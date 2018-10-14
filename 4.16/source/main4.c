#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 1; i <= 10; i++)
	{
		
		for (int j = 9; j >= i; j--)
		{
			printf(" ");
		}
		for (int k = 1; k <= i ; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}