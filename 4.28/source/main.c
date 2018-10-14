#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int item,hour,paycode,overtime;
	double wage;
	double sales;
	double salary;
	for (int i = 1; i <= 20; i++)
	{
		printf("Enter your paycode:");
		scanf_s("%d", &paycode);
		if (paycode == -1)
		{
			break;
		}
		
		if (paycode == 1)
		{
			printf("Enter weekly salary");
			scanf_s("%lf", &salary);
			printf("Fixed weekly salary = %2.2f\n" , salary );
		}
		
		if (paycode == 2)
		{
			printf("work hour :");
			scanf_s("%d", &hour);
			printf("Enter hourky wage:");
			scanf_s("%lf", &salary);
			if (hour > 40)
			{
				wage = salary * 40 + 1.5 * (hour - 40) * salary;
				printf("Overtime wage = %2.2f \n", wage);
			}
			else
			{
				wage = hour * salary;
				printf("wage = %2.2f\n", wage);
			}
		}
		if (paycode == 3)
		{
			printf("your gross weekly sales :");
			scanf_s("%lf", &sales);
			wage = 250 + sales * 5.7 / 100;
			printf("Your pay : %2.2f\n",wage);
		}
		if (paycode == 4)
		{
			printf("amount of item :");
			scanf_s("%d", &item);
			printf("Enter item worth:");
			scanf_s("%lf", &salary);
			wage = salary * item;
			printf("wage = %2.2f \n", wage);
		}
	}




	system("pause");
	return 0;

}
