#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("------------1\n");
	for(int i = 0; i < 10; i++){
		for (int j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}



	printf("------------2\n");
	for (int i = 0; i < 10; i++){
		for (int j = 9; i <= j; j--){
			printf("*");
		}
		printf("\n");
	}


	printf("------------3\n");
	for (int i = 0; i < 10; i++){
		for (int j = 0; j <10; j++){
			if(j-i>=0)printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	printf("------------4\n");
	for (int i = 0; i < 10; i++){
		for (int j = 0; j <10; j++){
			if (j - i >= 0)printf(" ");
			else printf("*");
		}
		printf("\n");
	}


	system("pause");
	return 0;


}