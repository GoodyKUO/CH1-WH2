#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d;

	printf("Enter loan principal (-1 to end) :");
	scanf_s("%f", &a);
	if (a == -1)return 0;
	printf("Enter interest rate:");
	scanf_s("%f", &b);
	printf("Enter term of the loan in days :");
	scanf_s("%f", &c);


	d = a*b*c/365;

	printf("The interest charge is %f\n", d);

	system("pause");
	return 0;
}