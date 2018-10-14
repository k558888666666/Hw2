#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 1; i <= 500; i++)
	{
		for (int j = 1; j < i; j++)
		{
			for (int k = j; k < i; k++)
			{
				if (i * i == j * j + k * k)
				{
					printf("%d^2 = %d^2 + %d^2\n", i, j, k);
				}
			}
		}

	}

	system("pause");
	return 0;

}
