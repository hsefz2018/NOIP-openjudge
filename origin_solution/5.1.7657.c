// Submission #3461422
#include <stdio.h>

int main()
{
    int a, b, i, j;
    int twos = 0, fives = 0;
    scanf("%d%d", &a, &b);
    for (; a <= b; ++a) {
        i = a;
        while (i && !(i & 1)) i >>= 1, ++twos;
        while (i && i % 5 == 0) i /= 5, ++fives;
    }
    printf("%d\n", twos < fives ? twos : fives);
    return 0;
}
