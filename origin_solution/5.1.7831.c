// Submission #3435371
#include <stdio.h>

int main()
{
    const char *days[7] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };
    int a, b, ans = 1;
    scanf("%d%d", &a, &b);
    do ans = (ans * a) % 7; while (--b);
    puts(days[ans]);
    return 0;
}
