#include<stdio.h>
#include<stdlib.h>


int main(void){
	float a ;

		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%f", &a);
		if (a == -1)return 0;
		printf("Salary is %f\n", 200 + 0.09*a);
		printf("\n");
	
	system("pause");
	return 0;
}