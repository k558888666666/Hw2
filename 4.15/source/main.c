#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	double n;
	double interest;
	double rate;
	n = 5000;
	rate = 0.095;
	for (int i = 1; i <= 15; i++)
	{
		rate = rate + 0.005;
		n = n * rate + n;
		printf("%d years fund %2.2f", i, n);
		printf("\n");
	}
	
	system("pause");
	return 0;
}