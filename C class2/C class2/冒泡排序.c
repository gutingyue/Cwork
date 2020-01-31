#pragma warning( disable : 4996)
#include <stdio.h>
int rank()
{
	int num[6];
	int i, j,k,g;
	int a;
	for (i = 0; i < 5; i++)
		{
			printf("Please enter  mumber%d:", i);
			scanf("%d", &num[i]);
		}
	printf("ÅÅĞòÇ°£º");
	for (i = 0; i < 5; i++)
	{
		printf("%d,", num[i]);
	
	}
	for (k = 0; k< 4;k++)
	{
		for (j = 0; j < 4; j++)
		{
			if (num[j]>num[j + 1])
			{
				num[j] = num[j] ^ num[j + 1];
				num[j + 1] = num[j + 1] ^ num[j];
				num[j] = num[j + 1] ^ num[j];
			}
		}
	}
	printf("\nÅÅĞòºó£º");
	for (g = 0; g< 5; g++)
	{
		printf("%d,", num[g]);

	}
	scanf("%d", &a);
	return 0;
}