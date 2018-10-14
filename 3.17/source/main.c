#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number , x;
	double Bblance;
	double charge;
	double credit;
	double limit;
	

	for (int i = 0; i < 20; i++)
	{
		
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &number);
		if (number == -1)
		{
			break;
		}
		else
		{
			printf("Enter begining balance:");
			scanf_s("%lf", &Bblance);
			printf("Enter total charges:");
			scanf_s("%lf", &charge);
			printf("Enter total credits:");
			scanf_s("%lf", &credit);
			printf("Enter credit limit:");
			scanf_s("%lf", &limit);
			printf("\n");
			x = Bblance + charge - credit;
			if (x > limit)
			{
				printf("Account:     %d\n", number);
				printf("Credit limit:  %2.2f\n", limit);
				printf("Balance:     %2.2f\n", x);
				printf("Credit limit exceeded\n");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
	
}