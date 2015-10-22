// Submission #3427396
#include <stdio.h>
#define MAXN 108

int main()
{
    int n, a[MAXN][MAXN], f[MAXN][MAXN];
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j) scanf("%d", &a[i][j]);
    f[0][0] = a[0][0];
    for (i = 1; i < n; ++i) {
        f[0][i] = f[0][i - 1] + a[0][i];
        f[i][0] = f[i - 1][0] + a[i][0];
    }
    for (i = 1; i < n; ++i)
        for (j = 1; j < n; ++j)
            f[i][j] = a[i][j] +
                (f[i - 1][j] < f[i][j - 1] ? f[i - 1][j] : f[i][j - 1]);
    printf("%d\n", f[n - 1][n - 1]);
    return 0;
}
