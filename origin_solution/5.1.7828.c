// Submission #3436205
#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main()
{
    int g, l;
    scanf("%d%d", &g, &l);
    int prod = l / g, i, ans = 0x7fffffff;
    for (i = 1; i <= sqrt(prod); ++i)
        if (prod % i == 0
            && gcd(i, prod / i) == 1
            && i + prod / i < ans) ans = i + prod / i;
    printf("%d\n", ans * g);
    return 0;
}
