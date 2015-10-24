#include <stdio.h>
#define MAXN 32

int main()
{
	int n;
	int i, j, f[MAXN][MAXN] = {{ 0 }};
	// f[i][j] = # of different ways to eat j sweets in i days
	scanf("%d", &n);

	f[1][1] = f[1][2] = 1;
	for (i = 2; i <= n; ++i) {
		f[i][0] = 0;
		f[i][1] = f[i - 1][0];
		for (j = 2; j <= n; ++j)
			f[i][j] = f[i - 1][j - 1] + f[i - 1][j - 2];
	}

	int ans = 0;
	for (i = 0; i <= n; ++i) ans += f[i][n];
	printf("%d\n", ans);
	return 0;
}

