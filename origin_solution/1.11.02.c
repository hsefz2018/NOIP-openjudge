// Submission #3403973
#include <stdio.h>

int main()
{
    double lo = 1.5, hi = 2.4;
    int i;
    double x, result;
    for (i = 0; i < 233333; ++i) {
        x = (lo + hi) * 0.5;
        result = (((((x - 15) * x + 85) * x - 225) * x + 274) * x - 121);
        if (result > 0) lo = x;
        else hi = x;
    }
    printf("%.6lf\n", (lo + hi) * 0.5);
    return 0;
}
