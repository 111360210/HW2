#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hours;
	float rate;
	float salary;

	while (1)
	{
		printf("Enter # of hours worked(-1 to end): ");
		scanf("%f", &hours);
		if (hours == -1)
		{
			break;
		}
		printf("Enter hourly rate of work($00.00): ");
		scanf("%f", &rate);
		printf("Salary is: $");
		if (hours > 40)
		{
			salary = (hours * rate) + ((hours - 40) * 5);
		}
		else
		{
			salary = hours * rate;
		}
		printf("%.2f \n", salary);
		printf("\n");
	}
	system("pause");
	return 0;
}