// Submission #3461536
#include <stdio.h>
// Assume that 10^8 people comsume 1 unit of resources per year.
// If the Earth produces N units of resources every year then
//   ax - aN = R   (1)
//   by - bN = R   (2)
// The answer is N.
// (1) - (2)
//   (b - a)N + (ax - by) = 0
//   N = (ax - by) / (a - b)

int main()
{
    int x, y, a, b;
    scanf("%d%d%d%d", &x, &a, &y, &b);
    printf("%.2lf\n", (double)(a * x - b * y) / (double)(a - b));
    return 0;
}
