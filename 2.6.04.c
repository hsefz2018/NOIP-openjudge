// Submission #3425213
#include <stdio.h>
#define MAXN 16

int calc(int remain_plates, int remain_apples, int last)
{
    if (remain_apples <= 0) return 0;
    else if (remain_plates == 1) return (remain_apples >= last);
    int i, ans = 0;
    for (i = last; i <= remain_apples; ++i)
        ans += calc(remain_plates - 1, remain_apples - i, i);
    return ans;
}

int main()
{
    int t, n, m, i, j;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &m, &n);
        printf("%d\n", calc(n, m, 0));
    }
    return 0;
}
