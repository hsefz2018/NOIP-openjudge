// Submission #3351960
#include <stdio.h>

int main()
{
    int n, b, c, i = 0;
    scanf("%d", &n);
    for (c = 0; c <= n / 5; ++c)
        for (b = 0; b <= (n - c * 5) / 2; ++b)
            printf("%03d%12d%12d%12d\n", ++i, n - b * 2 - c * 5, b, c);
    return 0;
}
