#include <stdio.h>
#include <Windows.h>

int fib(int num){
	int a = 0;
	int b = 1;
	int c = 0;
	while (c <= num){
		c = a + b;
		a = b;
		b = c;
	}
	if ((b - num) <= (num - a)){
		return b - num;
	}
	else{
		return num - a;
	}
}
int main() {
	int num = 15;
	// printf("������num��");
	// scanf_s("%d",&num);
	if ((num <= 1000000) || (num >= 0)){
		int tem = fib(num);
		printf("��С������%d", tem);
	}
	else{
		//    printf("\nnum��������\n�����䣺");
		//    scanf("%d",&num); 
		printf("��������");
	}
	system("pause");
	return 0;
}