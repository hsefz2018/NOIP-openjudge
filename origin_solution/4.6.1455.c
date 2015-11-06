// Submission #3981411
#include <stdio.h>

int easy(int n)
{
    int suf0 = 0, suf1 = 0;
    while (!(n & 1)) { n >>= 1; ++suf0; }
    while (n & 1) { n >>= 1; ++suf1; }
    return ((n | 1) << (suf0 + suf1)) | ((1 << (suf1 - 1)) - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n != 0) {
        printf("%d\n", easy(n));
        scanf("%d", &n);
    }
    return 0;
}
