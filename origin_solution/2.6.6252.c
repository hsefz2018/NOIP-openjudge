#include <stdio.h>
#include <string.h>
#define MAXN 32

int main()
{
	char s[MAXN], t[MAXN];
	gets(s + 1); gets(t + 1);
	int s_len = strlen(s + 1),
		t_len = strlen(t + 1);

	unsigned char f[MAXN][MAXN] = {{ 0 }};
	// f[i][j] = whether s[1..i] matches t[1..j]
	int i, j;
	f[0][0] = 1;
	for (i = 1; s[i] == '*'; ++i) f[i][0] = 1;
	//for (i = 0; i <= s_len; ++i) f[i][0] = 1;
	//for (i = 0; i <= t_len; ++i) f[0][i] = 1;
	//printf("   | ");
	//for (i = 1; i <= t_len; ++i) printf("%2c", t[i]);
	//putchar('\n');
	for (i = 1; i <= s_len; ++i) {
		//printf(" %c | ", s[i]);
		for (j = 1; j <= t_len; ++j) {
			if (s[i] == '*') f[i][j] = f[i - 1][j] || f[i][j - 1];
			else if (s[i] == '?') f[i][j] = f[i - 1][j - 1];
			else if (s[i] == t[j]) f[i][j] = f[i - 1][j - 1];
			else f[i][j] = 0;
			//printf("%2d", f[i][j]);
		}
		//putchar('\n');
	}

	puts(f[s_len][t_len] ? "matched" : "not matched");
	return 0;
}

