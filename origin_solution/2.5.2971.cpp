// Submission #4009408
#include <cstdio>
#include <queue>
static const int MAXN = 100009;
static const int INF = 0x7fffffff;

int n, k;
int d[MAXN];
bool visited[MAXN] = { false };

std::queue<int> q;
inline void bfs_enqueue(int x, int dist)
{
    if (!visited[x]) {
        q.push(x);
        visited[x] = true;
    }
    if (d[x] > dist) d[x] = dist;
}
void bfs()
{
    for (int i = 0; i < MAXN; ++i) d[i] = INF;
    bfs_enqueue(k, 0);
    while (!q.empty()) {
        int r = q.front(); q.pop();
        if (r < MAXN - 1) bfs_enqueue(r + 1, d[r] + 1);
        if (r > 0) bfs_enqueue(r - 1, d[r] + 1);
        if (r && r % 2 == 0) bfs_enqueue(r / 2, d[r] + 1);
    }
}

int main()
{
    scanf("%d%d", &n, &k);
    bfs();
    printf("%d\n", d[n]);
    return 0;
}
