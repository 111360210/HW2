#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int accountNumber;
	float beginningBalance;
	float totalCharges;
	float totalCredits;
	float creditLimit;
	float newBalance;

	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf("%d", &accountNumber);
		if (accountNumber == -1)
		{
			break;
		}
		printf("Enter beginning balance: ");
		scanf("%f", &beginningBalance);
		printf("Enter total charges: ");
		scanf("%f", &totalCharges);
		printf("Enter total credits: ");
		scanf("%f", &totalCredits);
		printf("Enter credit limit: ");
		scanf("%f", &creditLimit);
		newBalance = beginningBalance + totalCharges - totalCredits;
		if (newBalance > creditLimit)
		{
			printf("Account:\t");
			printf("%d \n", accountNumber);
			printf("Credit limit:\t");
			printf("%.2f \n", creditLimit);
			printf("Balance:\t");
			printf("%.2f \n", newBalance);
			printf("Credit Limit Exceed. \n");
			printf("\n");
		}
	}
	system("pause");
	return 0;
}