#include <stdio.h>

int main()
{
	double A, base, height;
	printf("\nArea of a Triangle...");
	printf("\nEnter the Base and Height...");
	scanf_s("%lf %lf", &base, &height);

	A = (base * height) / 2;

	printf("\nThe Area with Base = %.2lf and Height =  %.2lf is  %.2lf\n", base, height, A);

	return 0;
}