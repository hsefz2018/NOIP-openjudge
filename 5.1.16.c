// Submission #3394686
// Solution taken from problem A of TLX Practice Contest, the practice contest before APIO 2015
#include <stdio.h>
#define MAXB 128

int main()
{
    int a, b, n;
    scanf("%d%d%d", &a, &b, &n);
    --n;

    int i, t, cyc_start, cyc_len;
    a %= b; a *= 10;
    char seq[MAXB], idx[MAXB];
    for (i = 0; i < b; ++i) idx[i] = -1;
    for (i = 0; ; ++i) {
        t = a / 10;
        if (idx[t] >= 0) {
            // Cycling!
            cyc_start = idx[t]; cyc_len = i - idx[t];
            break;
        } else {
            seq[i] = a / b;
            idx[t] = i;
            a = a % b * 10;
        }
    }
    putchar('0' + (n < cyc_start + cyc_len ?
                   seq[n] : seq[cyc_start + (n - cyc_start) % cyc_len]));
    putchar('\n');
    return 0;
}
