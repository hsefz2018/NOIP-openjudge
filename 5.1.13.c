// Submission #3461394
#include <stdio.h>
#include <math.h>
#define TRUE  1
#define FALSE 0

unsigned char is_prime(int n)
{
    int x = (int)sqrt(n), i;
    for (i = 2; i <= x; ++i) if (n % i == 0) return FALSE;
    return TRUE;
}

int main()
{
    int s, i, ans = 0;
    scanf("%d", &s);
    for (i = 2; i <= s - 2; ++i) {
        if (is_prime(i) && is_prime(s - i) && ans < i * (s - i))
            ans = i * (s - i);
    }
    printf("%d\n", ans);
    return 0;
}
