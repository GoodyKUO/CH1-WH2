#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c,d,e,f,g;

	printf("Enter account number (-1 to end) :");
	scanf_s("%f", &a);
	if(a == -1)return 0;
	printf("Enter begining balance :");
	scanf_s("%f", &b);
	printf("Enter total charges :");
	scanf_s("%f", &c);
	printf("Enter total credits :");
	scanf_s("%f", &d);
	printf("Enter credit limit :");
	scanf_s("%f", &f);

	g = b + c - d;

	printf("Account:\t%f\n", a);
	printf("Credit limit:\t%f\n", f);
	printf("Balance:\t%f\n", g);
	if (g > f)printf("Credit Limit Exceeded.\n");


	system("pause");
	return 0;
}