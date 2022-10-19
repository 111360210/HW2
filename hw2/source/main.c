#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sales;
	float salary;

	while (1)
	{
		printf("Enter sales in dollar(-1 to end): ");
		scanf("%f", &sales);
		if (sales == -1)
		{
			break;
		}
		printf("Slary is: $");
		salary = 200 + (sales * 0.09);
		printf("%.2f \n", salary);
		printf("\n");
	}
	system("pause");
	return 0;
}