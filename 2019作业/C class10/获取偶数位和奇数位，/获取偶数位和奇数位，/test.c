#include <stdio.h>
#include <Windows.h>
int main(){
	int num = 0;
	printf("���룺");
	scanf_s("%d", &num);
	printf("����λ��");
	int num1 = num;
	for (; num1 > 0;){
		printf("%d ", num1 % 2);
		num1 = num1 >> 2;
	}
	printf("\n");
	printf("ż��λ��");
	int num2 = num;
	num2 = num2 >> 1;
	for (; num2 > 0;){
		printf("%d ", num2 % 2);
		num2 = num2 >> 2;
	}
	printf("\n");
	system("pause");
	return 0;
}