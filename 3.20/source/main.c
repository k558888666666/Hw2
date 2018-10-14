#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hour;
	double rate;
	double salary;
	for (int i = 0; i < 20; i++)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &hour);
		if (hour  == -1)
		{
			break;
		}
		else
		{
			printf("Enter hourly rate of the worker ($00.00)");
			scanf_s("%lf", &rate);
			salary = hour * rate;
			printf("Salary is $%2.2f", salary);
		}
		printf("\n");
	}


	system("pause");
	return 0;
}