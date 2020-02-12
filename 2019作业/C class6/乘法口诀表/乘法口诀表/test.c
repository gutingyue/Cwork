#include <stdio.h>

void mul(int x){
	int i = 1;
	for (; i <= x;i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", j, i, j*i);
		}
			printf("\n ");
	}
}

int main(){
	int num = 0;
	printf("Please enter a parameter:");
	scanf_s("%d", &num);
	mul(num);
	system("pause");
	return 0;
}