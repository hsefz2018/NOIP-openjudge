// Submission #4045088
#include <stdio.h>
#include <string.h>
#define MAXLEN 1024

int k;
char s[MAXLEN], used[MAXLEN];

void work()
{
    getchar();
    scanf("%s%d", s, &k);
    int len = strlen(s), i, j, min, min_idx;
    k = len - k;
    memset(used, 0, sizeof used);
    while (k != 0) {
        min = '9' + 2333;
        for (j = len - k; j >= 0; --j)
            if (!used[j] && min >= s[j]) {
                min = s[j];
                min_idx = j;
            } else if (used[j]) break;
        used[min_idx] = 1;
        --k;
    }
    for (i = 0; i < len; ++i) if (used[i]) putchar(s[i]);
    putchar('\n');
}

int main()
{
    int cases;
    scanf("%d", &cases);
    do work(); while (--cases);
    return 0;
}
