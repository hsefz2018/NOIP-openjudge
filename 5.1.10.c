// Submission #3461436
#include <stdio.h>

int main()
{
    int n;
    double ch3ch2oh = 0;
    scanf("%d", &n);
    do ch3ch2oh = (ch3ch2oh + 1) / 2; while (--n);
    printf("%.5lf\n", ch3ch2oh);
    return 0;
}
