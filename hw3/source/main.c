#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float loanprincipal;
	float rate;
	int days;
	float interestcharge;

	while (1)
	{
		printf("Enter loan princial(-1 to end): ");
		scanf("%f", &loanprincipal);
		if (loanprincipal == -1)
		{
			break;
		}
		printf("Enter interest rate: ");
		scanf("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf("%d", &days);
		printf("The interest charge is: $");
		interestcharge = (loanprincipal * rate * days) / 365;
		printf("%.2f \n", interestcharge);
		printf("\n");
	}
	system("pause");
	return 0;
}