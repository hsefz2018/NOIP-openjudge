// Submission #3402674
#include <stdio.h>
#include <math.h>

int niconiconi(int a, int min)
{
    if (a == 1) return 1;
    int i, ans = 0;
    for (i = min; i <= a; ++i)
        if (a % i == 0) ans += niconiconi(a / i, i);
    return ans;
}

int main()
{
    int n, a;
    scanf("%d", &n);
    do {
        scanf("%d", &a);
        printf("%d\n", niconiconi(a, 2));
    } while (--n);
    return 0;
}
