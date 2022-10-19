#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

double Caculate(float t) {
	double f;
	f = 5000 * pow((1 + t), 15);
	return f;
}

int main() {
	double f;
	printf("%s", "Use Compound interest\n");
	printf("%s", "$5000 for 15 years:\n");
	for (float i = 0.100; i < 0.125; i += 0.005) {
		printf("rate %.1lf%%	$%.2lf\n", 100 * i, Caculate(i));
	}
}