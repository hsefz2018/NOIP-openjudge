// Submission #3352038
#include <stdio.h>

int main()
{
    int k, n1, n2, n3, n4, n5, depth, a, b, c, d, e;
    scanf("%d%d%d%d%d%d", &k, &n1, &n2, &n3, &n4, &n5);
    k *= 100;
    for (depth = 1; depth <= k; ++depth)
        for (a = 1; a <= depth / n1; ++a) {
            b = depth - a * n1;
            c = depth - b * n2;
            d = depth - c * n3;
            e = depth - d * n4;
            if (b > 0 && c > 0 && d > 0 && e > 0
                /* Clumsy (/_<) */
                && a != b && a != c && a != d && a != e
                && b != c && b != d && b != e
                && c != d && c != e
                && d != e
                && depth - e * n5 == a)
            {
                printf("%d %d %d %d %d %d\n", depth, a, b, c, d, e);
                return 0;
            }
        }
    puts("not found");
    return 0;
}
