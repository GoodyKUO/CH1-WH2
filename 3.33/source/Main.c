#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;

	printf("Enter length and breadth ");
	scanf_s("%d%d", &a ,&b);

	for (int i=0; i <a; i++)
	{
		for (int j=0 ; j  < b; j++)
		{
			if ((i==0 )||(i==a-1)||(j==0)||(j==b-1))printf("*");
			else printf(" ");
		}
		printf("\n");
	}



	system("pause");
	return 0;
}