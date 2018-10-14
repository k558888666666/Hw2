#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double sale;
	double salary;
	for (int i = 0; i < 20; i++)
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%lf", &sale);
		if (sale == -1)
		{
			break;
		}
		else
		{
			salary = 200 + (sale * 9 / 100);
			printf("Salary is : %2.2f", salary);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}