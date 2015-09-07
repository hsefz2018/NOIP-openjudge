#include <stdio.h>
#define MAXM 108
#define MAXT 1024

int main()
{
	int m, t, v[MAXM], w[MAXM];
	int i, j;
	int f[MAXM][MAXT];
	scanf("%d%d", &t, &m);
	for (i = 0; i < m; ++i) scanf("%d%d", &w[i], &v[i]);

	for (i = 0; i <= t; ++i) f[0][i] = 0;
	f[0][w[0]] = v[0];
	for (i = 1; i < m; ++i)
		for (j = 0; j <= t; ++j) {
			f[i][j] = f[i - 1][j];
			if (j >= w[i] && f[i][j] < f[i - 1][j - w[i]] + v[i])
				f[i][j] = f[i - 1][j - w[i]] + v[i];
		}

	int ans = 0;
	for (i = 0; i <= t; ++i)
		if (ans < f[m - 1][i]) ans = f[m - 1][i];
	printf("%d\n", ans);
	return 0;
}

