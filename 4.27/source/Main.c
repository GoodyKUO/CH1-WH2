#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

	for (int i = 1; i <= 500; i++){
		for (int j = 1; j < i; j++){
			for (int k = j; k < i; k++){
				if (pow(j, 2) + pow(k, 2) == pow(i, 2))
				{
					printf("side1: %d\tside2: %d\tside3: %d\n", j, k, i);
				}
			}
		}
	}


	system("pause");
	return 0;

}