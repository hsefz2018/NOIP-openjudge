// Submission #3986679
// For test data, see
//   http://acm.student.cs.uwaterloo.ca/~acm00/
//   http://acm.student.cs.uwaterloo.ca/~acm00/010127/data/

#include <cstdio>
#include <cstring>
#include <vector>
static const int MAXN = 203;
typedef std::vector<int> edgelist;
static const double EPS = 1e-5;

inline double dist_sq(double x1, double y1, double x2, double y2)
{
    return ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int n;
edgelist e[MAXN];

int match[MAXN];
bool visited[MAXN];
bool dfs(int u)
{
    for (edgelist::iterator i = e[u].begin(); i != e[u].end(); ++i) if (!visited[*i]) {
        visited[*i] = true;
        if (match[*i] == -1 || dfs(match[*i])) {
            match[*i] = u;
            match[u] = *i;
            return true;
        }
    }
    return false;
}

bool work()
{
    int m, s, v;
    static double x1[MAXN], y1[MAXN], x2[MAXN], y2[MAXN];
    if (scanf("%d%d%d%d", &n, &m, &s, &v) != 4) return false;
    for (int i = 0; i < n + m; ++i) e[i].clear();
    for (int i = 0; i < n; ++i) scanf("%lf%lf", &x1[i], &y1[i]);
    for (int i = 0; i < m; ++i) {
        scanf("%lf%lf", &x2[i], &y2[i]);
        for (int j = 0; j < n; ++j)
            if (dist_sq(x1[j], y1[j], x2[i], y2[i]) <= (double)(s * v) * (s * v) + EPS) {
                e[j].push_back(n + i);
                e[n + i].push_back(j);
            }
    }
    int ans = n;
    memset(match, -1, sizeof match);
    for (int i = 0; i < n; ++i) if (match[i] == -1) {
        memset(visited, false, sizeof visited);
        if (dfs(i)) --ans;
    }
    printf("%d\n", ans);
    return true;
}

int main()
{
    while (work());
    return 0;
}
