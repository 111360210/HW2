#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int managers = 0;
	int hourlyworkers = 0;
	int commissionworkers = 0;
	int piceworkers = 0;

	int payCode;
	double salary, totalpay = 0;
	double  hourlysalary, workhour, grossweeklysales, piecesnumer, wageperpieces;

	do {
		salary = 0;

		printf("%s", "Select type of Employee from menu\n");
		printf("%s", "1. Manager\t\tfixed weekly salary\n");
		printf("%s", "2. Hourly Worker\tOver 40 hours are time-and-a-half\n");
		printf("%s", "3. Commission Worker\tBase $250 plus multiply 5.7% by gross weekly sales\n");
		printf("%s", "4. Pieceworker\t\tmultiply the numer of pices by wage\n");

		printf("%s", "\nEnter your pay code(-1 to end):");
		scanf("%d", &payCode);
		if (payCode == -1)	break;

		switch (payCode) {
		case 1:
			printf("%s", "\nManagers selected!\n");
			printf("%s", "Enter the yearly salary: $");
			scanf("%lf", &salary);
			salary /= 52; //52 weeks per year
			printf("\nManager's weekly pay is $%.2lf\n\n", salary);
			managers++;
			totalpay += salary;
			break;

		case 2:
			printf("%s", "\nHourly workers selected!\n");
			printf("%s", "Enter the hourly salary: $");
			scanf("%lf", &hourlysalary);
			printf("%s", "The time you work this week(hour): ");
			scanf("%lf", &workhour);
			if (workhour > 40) {
				workhour -= 40;
				salary = 40 * hourlysalary + workhour * (hourlysalary*1.5);
			}
			else	salary = hourlysalary * workhour;
			printf("\nWorker's weekly pay is $%.2lf\n\n", salary);
			hourlyworkers++;
			totalpay += salary;
			break;

		case 3:
			printf("%s", "\nCommission workers selected!\n");
			printf("%s", "Enter the gross weekly sales: $");
			scanf("%lf", &grossweeklysales);
			salary = 250 + 0.057*grossweeklysales;
			printf("\nWorker's weekly pay is $%.2lf\n\n", salary);
			commissionworkers++;
			totalpay += salary;
			break;

		case 4:
			printf("%s", "\nPiecewokers selected!\n");
			printf("%s", "Enter the numer of pieces: ");
			scanf("%lf", &piecesnumer);
			printf("%s", "Enter the wage per pieces: ");
			scanf("%lf", &wageperpieces);
			salary = piecesnumer * wageperpieces;
			printf("\nWorker's weekly pay is $%.2lf\n\n", salary);
			piceworkers++;
			totalpay += salary;
			break;

		default:
			printf("%s", "\nPay code Errow ( X w X )//!! \n\n");
			break;

		}
	} while (payCode != -1);

	printf("\nThe number of managers paid:\t\t%d\n", managers);
	printf("The number of hourly worker paid:\t%d\n", hourlyworkers);
	printf("The number of commission workers paid:\t%d\n", commissionworkers);
	printf("The number of pice workers paid:\t%d\n", piceworkers);
	printf("Total payment:\t\t\t\t$%.2lf\n", totalpay);
}