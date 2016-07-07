// Submissions #5865426 & #5865431
#include <stdio.h>
#define MAXN 12
#define TRUE  1
#define FALSE 0
static const int move[8][2] = {
    {+1, +2}, {+1, -2}, {-1, +2}, {-1, -2},
    {+2, +1}, {+2, -1}, {-2, +1}, {-2, -1}
};

int n, m, x0, y0;
unsigned char vis[MAXN][MAXN] = {{ FALSE }};
long long ans = 0;

void dfs(int depth, int x, int y)
{
    if (depth == n * m) { ++ans; return; }
    int k, xx, yy;
    for (k = 0; k < 8; ++k) {
        xx = x + move[k][0];
        yy = y + move[k][1];
        if (xx >= 0 && xx < n && yy >= 0 && yy < m && !vis[xx][yy]) {
            vis[xx][yy] = TRUE;
            dfs(depth + 1, xx, yy);
            vis[xx][yy] = FALSE;
        }
    }
}

void work()
{
    scanf("%d%d%d%d", &n, &m, &x0, &y0);
    ans = 0;
    vis[x0][y0] = TRUE;
    dfs(1, x0, y0);
    vis[x0][y0] = FALSE;
    printf("%lld\n", ans);
}

int main()
{
    int t;
    scanf("%d", &t);
    do work(); while (--t);
    return 0;
}
