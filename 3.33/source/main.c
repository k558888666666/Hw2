#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, m;
	printf("length = ");
	scanf_s("%d", &n);
	printf("breadth = ");
	scanf_s("%d", &m);
	for (int i = 1; i <= n; i++)
	{
		if (i == 1 || i == n)
		{
			for (int j = 1; j <= m; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int k = 1; k <= m ; k++)
			{
				if (k == 1 || k == m )
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}