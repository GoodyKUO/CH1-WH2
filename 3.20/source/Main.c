#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c;

	printf("Enter # of hours worked (-1 to end) :");
	scanf_s("%f", &a);
	if (a == -1)return 0;
	printf("Enter hourly rate of the worker($00.00) :");
	scanf_s("%f", &b);

	c = a*b;

	printf("Salary is $%f\n", c);
	


	system("pause");
	return 0;
}