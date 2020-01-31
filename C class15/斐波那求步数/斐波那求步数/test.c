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
	// printf("请输入num：");
	// scanf_s("%d",&num);
	if ((num <= 1000000) || (num >= 0)){
		int tem = fib(num);
		printf("最小步数：%d", tem);
	}
	else{
		//    printf("\nnum输入有误\n请重输：");
		//    scanf("%d",&num); 
		printf("输入有误");
	}
	system("pause");
	return 0;
}