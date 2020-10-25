#include <stdio.h>
int main()
{
	int c[100][100] = {};
	int m, n, k, x, y;
	scanf_s("%d %d", &m, &n);
	scanf_s("%d", &k);
	for (int i = 1; i <= k; i++)
	{
		scanf_s("%d %d", &x, &y);
		c[x][y] = 1;
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (c[i][j] == 1) printf("x");
			else printf("_");
		}
		printf("\n");
	}
	return 0;
}