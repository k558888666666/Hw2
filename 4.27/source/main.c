#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//==================================================
	for ( int i = 1; i <= 150; i++)
	{
		for (int j = 1; j <= 150; j++)
		{
			for (int k = 1; k <= 150; k++)
			{
				if (i * i == j * j + k * k)
				{
					printf("%d^2 = %d^2 + %d^2\n",i,j,k);
				}
			}
		}
		
	}
	//==================================================
	for (int i = 1; i <= 335; i++)
	{
		for (int j = 1; j <= 335; j++)
		{
			for (int k = 1; k <= 335; k++)
			{
				if (i * i == j * j + k * k)
				{
					printf("%d^2 = %d^2 + %d^2\n", i, j, k);
				}
			}
		}

	}
	//==================================================
	for (int i = 1; i <= 500; i++)
	{
		for (int j = 1; j <= 500; j++)
		{
			for (int k = 1; k <= 500; k++)
			{
				if (i * i == j * j + k * k)
				{
					printf("%d^2 = %d^2 + %d^2\n", i, j, k);
				}
			}
		}

	}
	//==================================================
	
	for (int i = 1; i <= 150; i++)
	{
		for (int j = 1; j <= 150; j++)
		{
			for (int k = 1; k <= 150; k++)
			{
				if (i * i == j * j + k * k)
				{
					printf("%d^2 = %d^2 + %d^2\n", i, j, k);
				}
			}
		}

	}
	
	for (int i = 151; i <= 335; i++)
	{
		for (int j = 151; j <= 335; j++)
		{
			for (int k = 151; k <= 335; k++)
			{
				if (i * i == j * j + k * k)
				{
					printf("%d^2 = %d^2 + %d^2\n", i, j, k);
				}
			}
		}

	}
	
	for (int i = 336; i <= 500; i++)
	{
		for (int j = 336; j <= 500; j++)
		{
			for (int k = 336; k <= 500; k++)
			{
				if (i * i == j * j + k * k)
				{
					printf("%d^2 = %d^2 + %d^2\n", i, j, k);
				}
			}
		}

	}
	
	//==================================================
	system("pause");
	return 0;

}
