// Submission #3436054
#include <stdio.h>
#define MAXN 16

int gcd(int a, int b)
{
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main()
{
    int a[MAXN], n;
    unsigned char g[MAXN][MAXN], group[MAXN] = { 0 };
    int i, j, k, group_cnt = 0, grouped_cnt = 0;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
            g[i][j] = g[j][i] = (gcd(a[i], a[j]) == 1);
    while (grouped_cnt < n) {
        for (i = 0; i < n; ++i) if (group[i] == 0) break;
        ++grouped_cnt;
        group[i] = ++group_cnt;
        unsigned char found;
        do {
            found = 0;
            for (i = 0; i < n; ++i) if (group[i] == 0) {
                found = 1;
                for (j = 0; j < n; ++j)
                    if (group[j] == group_cnt && !g[i][j]) { found = 0; break; }
                if (found) {
                    ++grouped_cnt;
                    group[i] = group_cnt;
                    break;
                }
            }
        } while (found);
    }
    printf("%d\n", group_cnt);
    return 0;
}
