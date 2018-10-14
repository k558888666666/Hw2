#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 1; i <= 10; i++)
	{
		for (int k = 1; k <= i-1 ; k++)
		{
			printf(" ");
		}
		for (int j = 10; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}