// Submission #3428944
#include <stdio.h>
#define MAXN 108

int main()
{
    int h, a[MAXN][MAXN], f[MAXN][MAXN];
    int i, j;
    scanf("%d", &h);
    for (i = 0; i < h; ++i)
        for (j = 0; j <= i; ++j) scanf("%d", &a[i][j]);
    f[0][0] = a[0][0];
    for (i = 1; i < h; ++i)
        for (j = 0; j <= i; ++j)
            f[i][j] = a[i][j] +
                (f[i - 1][j - 1] > f[i - 1][j] ? f[i - 1][j - 1] : f[i - 1][j]);
    int ans = 0;
    for (i = 0; i < h; ++i) if (ans < f[h - 1][i]) ans = f[h - 1][i];
    printf("%d\n", ans);
    return 0;
}
