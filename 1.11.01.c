// Submission #3403956
#include <stdio.h>
#define MAXN 100005

int main()
{
    int a[MAXN];
    int n, m, i, pivot;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) scanf("%d", &a[i]);
    scanf("%d", &m);
    do {
        scanf("%d", &pivot);
        int lo = 0, hi = n, mid;
        while (lo + 1 < hi) {
            mid = (lo + hi) >> 1;
            if (a[mid] > pivot) hi = mid;
            else lo = mid;
        }
        if (lo + 1 < n && a[lo + 1] - pivot < pivot - a[lo]) ++lo;
        printf("%d\n", a[lo]);
    } while (--m);
    return 0;
}
