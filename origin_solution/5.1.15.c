// Submission #3436158
#include <stdio.h>
#define MAXLEN 4096

int main()
{
    int n, a[2][MAXLEN], _cur = 0, len = 2;
    int i, j;
    scanf("%d%d%d", &a[0][0], &a[0][1], &n);
    for (i = 0; i < n; ++i) {
#define cur a[_cur]
#define last a[1 - _cur]
        _cur = 1 - _cur;
        for (j = 0; j < len - 1; ++j) {
            cur[j * 2] = last[j];
            cur[j * 2 + 1] = last[j] + last[j + 1];
        }
        cur[len * 2 - 2] = last[len - 1];
        len += (len - 1);
    }
    int ans = 0;
    for (i = 0; i < len; ++i) ans += cur[i];
    printf("%d\n", ans);
#undef cur
#undef last
    return 0;
}
