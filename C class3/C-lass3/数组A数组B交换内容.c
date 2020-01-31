#include <stdio.h>
int main()
{
	int *p, *q;
	int i, j;
	int A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int B[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	printf("交换前A：");
	int a, b;
	for (a = 0,b=0; a < 10,b<10; a++,b++){
		printf("%d ", A[a]);
	}
	printf("\n交换前B：");
	for (b = 0; b < 10; b++){
		printf("%d ", B[b]);
	}
	
	for (i = 0, j = 0; i < 10, j < 10; i++, j++)
	{
		p = &A[i];
		q = &B[j];
		swap(p, q);

	}

	printf("\n交换后A：");
	for (a = 0, b = 0; a < 10, b < 10; a++, b++){
		printf("%d ", A[a]);
	}
	printf("\n交换后B：");
	for (b = 0; b < 10; b++){
		printf("%d ", B[b]);
	}

	system("pause");
	return 0;
}
int swap(int *x, int* y)
{
	int c;
	c = *x;
	*x = *y;
	*y = c;
}