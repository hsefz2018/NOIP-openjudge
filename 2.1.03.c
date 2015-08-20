// Submission #3363966
#include <stdio.h>

int main()
{
    int n;
    int biubiu, haihai, ans;
    scanf("%d", &n);
    do {
        scanf("%d%d", &biubiu, &haihai);
        ans = 0;
        while (biubiu > 0) {
            biubiu -= haihai;
            biubiu <<= 1;
            haihai *= 1.05;
            if (biubiu > 1000000) biubiu = 1000000;
            ++ans;
        }
        printf("%d\n", ans);
    } while (--n);
    return 0;
}
