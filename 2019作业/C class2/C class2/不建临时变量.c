#pragma warning( disable : 4996)
#include <stdio.h>
int no()
{
	int num1 = 0;
	int num2 = 0;
	
	printf("Please enter two mumbers:");
	scanf("%d%d", &num1, &num2);
	printf("��ʱ��num1=%d num2=%d\n", num1, num2);
	num1 = num1^num2;
	num2 = num2^num1;
	num1 = num2^num1;
	printf("�޽�����num1=%d num2=%d\n", num1, num2);

	return 0;
}