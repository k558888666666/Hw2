#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int item,hour,paycode,overtime;
	double wage;
	double sales;
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
			printf("Fixed weekly salary,bro\n");
		}
		
		if (paycode == 2)
		{
			printf("work hour :");
			scanf_s("%d", &hour);
			if (hour > 40)
			{
				overtime = (hour - 40);
				printf("%d * 1.5 * (Fix hourly wage) + 40 * (Fix hourly wage)\n", overtime);
			}
			else
			{
				printf("%d * (Fix hourly wage)\n", hour);
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
			
			printf("%d * (Fixed money)\n", item);
		}
	}




	system("pause");
	return 0;

}
