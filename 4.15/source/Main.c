#include<stdio.h>
#include<stdlib.h>



int main(void){

	double a=5000  ;
	double r ,b=0.1;
	int y;

	for (r = 1; r <= 5;r++){
		for (y = 1; y <= 15; y++){
			a = a* (1+b);
			printf("%d %.2lf\n", y, a);
		}
		a = 5000;
		b = b + 0.05;
		printf("\n");
	}
	
	system("pause");
	return 0;

}
