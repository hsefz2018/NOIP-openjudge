// POJ Submission #15447004
// OpenJudge Submission #5301867
// Solution here: http://www.cnblogs.com/scau20110726/archive/2013/04/28/3050178.html
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
static const int MAXN = 128;
static const int MAXCOST = 10004;
static const int INF = 0x3f3f3f3f;

struct edge {
    int dest, len, cost;
};
typedef std::vector<edge> edgelist;
template <typename T> inline bool update_min(T& a, const T b) {
    if (a > b) { a = b; return true; } else return false;
}

int k, n, m;
edgelist e[MAXN];
int f[MAXN][MAXCOST];
bool in_q[MAXN];

bool work()
{
    if (scanf("%d%d%d", &k, &n, &m) != 3) return false;

    for (int i = 0; i < n; ++i) e[i].clear();
    memset(f, 0x3f, sizeof f);
    memset(in_q, false, sizeof in_q);

    int u, v, l, c;
    for (int i = 0; i < m; ++i) {
        scanf("%d%d%d%d", &u, &v, &l, &c);
        e[u - 1].push_back((edge){ v - 1, l, c });
    }

    f[0][0] = 0;
    static int q[MAXN], qhead, qtail;
    qhead = 1; qtail = 0; q[0] = 0;
    in_q[0] = true;
    while (qhead != qtail) {
        u = q[(qtail++) % MAXN];
        in_q[u] = false;
        for (edgelist::iterator i = e[u].begin(); i != e[u].end(); ++i)
            for (int j = 0; j <= k - i->cost; ++j)
                if (update_min(f[i->dest][j + i->cost], f[u][j] + i->len) && !in_q[i->dest]) {
                    in_q[i->dest] = true;
                    q[(qhead++) % MAXN] = i->dest;
                }
    }
    int ans = INF;
    for (int i = 0; i <= k; ++i) update_min(ans, f[n - 1][i]);
    printf("%d\n", ans == INF ? -1 : ans);

    return true;
}

int main()
{
    while (work());
    return 0;
}
