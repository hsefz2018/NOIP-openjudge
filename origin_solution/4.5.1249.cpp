// Submission #3979584
#include <cstdio>
#include <algorithm>
static const int MAXN = 5842;
static const int RANGE = 2000000000LL;

int a_top = 0;
long long a[MAXN + 1000];
void precalc()
{
    long long x, y, z, w;
    for (x = 1; x <= RANGE; x <<= 1)
        for (y = x; y <= RANGE; y *= 3)
            for (z = y; z <= RANGE; z *= 5)
                for (w = z; w <= RANGE; w *= 7)
                    a[a_top++] = w;
    std::sort(a, a + a_top);
}
const char *suffix(int x)
{
    if (x % 100 >= 10 && x % 100 <= 19) return "th";
    if (x % 10 == 1) return "st";
    if (x % 10 == 2) return "nd";
    if (x % 10 == 3) return "rd";
    return "th";
}

int main()
{
    precalc();
    int n;
    scanf("%d", &n);
    do {
        printf("The %d%s humble number is %d.\n", n, suffix(n), a[n - 1]);
        scanf("%d", &n);
    } while (n != 0);
    return 0;
}
