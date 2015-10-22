// Submission #3351888
#include <stdio.h>
#define MAXN 1024

int main()
{
    int n, k, i, j;
    int a[MAXN];
    scanf("%d%d", &n, &k);
    for (i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
            if (a[i] + a[j] == k) {
                puts("yes"); return 0;
            }
    puts("no"); return 0;
}
