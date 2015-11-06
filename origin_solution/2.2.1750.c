// Submission #3365787
#include <stdio.h>
#include <string.h>
#define MAXN 8
#define TRUE  1
#define FALSE 0

int len;
unsigned char used[MAXN] = { FALSE };
char s[MAXN], generated[MAXN];
void dfs(int depth)
{
    if (depth == len) puts(generated);
    else {
        int i;
        for (i = 0; i < len; ++i) if (!used[i]) {
            used[i] = TRUE;
            generated[depth] = s[i];
            dfs(depth + 1);
            used[i] = FALSE;
        }
    }
}

int main()
{
    gets(s);
    len = strlen(s);
    dfs(0);
    return 0;
}
