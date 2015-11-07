// Submission #4053212
#include <stdio.h>
#define MAXN 64

int n;
int a[MAXN][MAXN] = {{ 0 }};

int main()
{
    scanf("%d", &n);
    n = n + n - 1;
    int i, j, k;
    i = 0, j = n / 2;
    a[i][j] = 1;
    for (k = 2; k <= n * n; ++k) {
        if (i == 0 && j != n - 1) {
            i = n - 1; j = j + 1;
        } else if (i != 0 && j == n - 1) {
            i = i - 1; j = 0;
        } else if (i == 0 && j == n - 1) {
            i = 1; j = n - 1;
        } else if (a[i - 1][j + 1] == 0) {
            i = i - 1; j = j + 1;
        } else {
            i = i + 1;
        }
        a[i][j] = k;
    }
    for (i = 0; i < n; ++i) {
        printf("%d", a[i][0]);
        for (j = 1; j < n; ++j) printf(" %d", a[i][j]);
        putchar('\n');
    }
    return 0;
}
