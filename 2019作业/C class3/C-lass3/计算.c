#include <stdio.h>
#include<stdlib.h>
int mai()
{
	int  i;
	double sum = 0.0;

	printf("sum=");
	for (i = 1; i < 101; i++){
		switch (i % 2)
		{
		case 1:sum = sum + 1.0 / i;
			printf("+1/%d", i);
			break;
		case 0:sum = sum - 1.0/ i;
			printf("-1/%d", i);
			break;
		}
	}
	printf("=%lf", sum);
	system("pause");
	return 0;
}