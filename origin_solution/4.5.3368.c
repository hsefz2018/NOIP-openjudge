// Submission #4015406
#include <stdio.h>
#define MAXN 505
#define INF 0x3fffffff
#define UPDATE_MIN(__var, __val) if ((__var) > (__val)) __var = (__val)

int n, m;
int g[MAXN][MAXN];
int f[2][MAXN][MAXN];
int d[MAXN][MAXN];

int floyd_warshall()
{
    int i, j, k;
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j) d[i][j] = g[i][j];
    for (k = 0; k < n; ++k)
        for (i = 0; i < n; ++i)
            for (j = 0; j < n; ++j)
                if (d[i][j] > d[i][k] + d[k][j])
                    d[i][j] = d[i][k] + d[k][j];
}

int main()
{
    int i, j, k, u, v, w;
    scanf("%d%d", &n, &m);
    ++n;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) g[i][j] = INF;
        g[i][i] = 0;
    }
    for (i = 0; i < m; ++i) {
        scanf("%d%d%d", &u, &v, &w);
        if (g[u][v] > w) g[u][v] = g[v][u] = w;
    }
    floyd_warshall();

    // Dynamic programming
    int cur = 0;
#define f_cur f[cur]
#define f_next f[!cur]
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j) f_cur[i][j] = INF;
    f_cur[0][0] = 0;
    for (k = 0; k < n - 1; ++k) {
        for (i = 0; i < n; ++i)
            for (j = 0; j < n; ++j) f_next[i][j] = INF;
        for (i = 0; i < n; ++i)
            for (j = i; j < n; ++j) {
                UPDATE_MIN(f_next[k][j], f_cur[i][j] + d[i][k + 1]);
                f_next[j][k] = f_next[k][j];
                UPDATE_MIN(f_next[i][k], f_cur[i][j] + d[j][k + 1]);
                f_next[k][i] = f_next[i][k];
                UPDATE_MIN(f_next[i][j], f_cur[i][j] + d[k][k + 1]);
                f_next[j][i] = f_next[i][j];
            }
        cur = !cur;
    }

    int ans = INF;
    for (i = 0; i < n; ++i)
        for (j = i; j < n; ++j)
            if (f_cur[i][j] < INF && d[0][i] < INF && d[0][j] < INF)
               UPDATE_MIN(ans, f_cur[i][j] + d[0][i] + d[0][j] + d[0][n - 1]);
    printf("%d\n", ans);
#undef f_cur
#undef f_next

    return 0;
}
