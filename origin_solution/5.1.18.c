// Submission #3435477
#include <stdio.h>

int main()
{
    int a, b, n;
    int deno, num, ans_deno = 1, ans_num = 0;
    scanf("%d%d%d", &n, &a, &b);
    for (deno = 2; deno <= n; ++deno)
        for (num = 0; num < deno; ++num)
            // if (ans_num / ans_deno < num / deno < a / b)
            if (ans_deno * num > ans_num * deno
                && deno * a > num * b)
            {
                ans_deno = deno; ans_num = num;
            }
    printf("%d %d\n", ans_num, ans_deno);
    return 0;
}
