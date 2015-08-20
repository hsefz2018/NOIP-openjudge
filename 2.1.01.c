// Submission #3346081
#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d", &n);
    do {
        scanf("%d", &a);
        if (a & 1) puts("0 0");
        else printf("%d %d\n", a / 4 + (a % 4 ? 1 : 0), a / 2);
    } while (--n);
    return 0;
}
