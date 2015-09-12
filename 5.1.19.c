// Submission #3435547
#include <stdio.h>

int main()
{
    int a, b, ans = 1;
    scanf("%d%d", &a, &b);
    do ans = (ans * a) % 1000; while (--b);
    printf("%03d\n", ans);
    return 0;
}
