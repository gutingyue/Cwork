#include<stdio.h>

int main()
{
	int i, j;
	int count = 0;
	int n = 0;
	for (i = 100; i < 200; i++)
	{
		
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (i == j)
		{
			count++;
			n++;
			printf("%d  ", i);
			if (n>5){
				printf("\n");
				n = 0;
			}
		}
			
	}
	return 0;
}