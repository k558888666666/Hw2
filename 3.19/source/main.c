#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double loan;
	double rate;
	int day;
	double interest;
	for (int i = 0; i < 20; i++)
	{
		printf("Enter loan principal (-1 to end):");
		scanf_s("%lf", &loan);
		if (loan == -1)
		{
			break;
		}
		else
		{
			printf("Enter interest rate:");
			scanf_s("%lf", &rate);
			printf("Enter term of the loan in days:");
			scanf_s("%d", &day);
			interest = loan * rate * day / 365;
			printf("The interest charge is %2.2f", interest);
		}
		printf("\n");
	}


	system("pause");
	return 0;
}