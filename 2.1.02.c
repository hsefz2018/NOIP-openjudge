// Submission #3346827
#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, b, c, a3, b3, c3;
    double d;
    scanf("%d", &n);
    for (a = 2; a <= n; a++) {
        a3 = a * a * a;
        for (b = 2; b <= n; b++) {
            b3 = b * b * b;
            for (c = b; c <= n; c++) {
                c3 = c * c * c;
                d = round(cbrt(a3 - b3 - c3));
                if (d >= c && fabs(a3 - b3 - c3 - d * d * d) <= 1e-5)
                    printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, (int)d);
            }
        }
    }
    return 0;
}
