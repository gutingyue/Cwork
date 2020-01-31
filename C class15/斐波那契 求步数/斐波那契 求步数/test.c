#include <stdio.h>
#include <Windows.h>

int Fibonacci(int n){
	int num1 = 0;
	int num2 = 1;
	int num = 0;
	for (; num<n;){
		num = num1 + num2;
		num1 = num2;
		num2 = num;
	}
	int x = num - n;
	int y = n - num1;
	if (x>y){
		return y;
	}
	else{
		return x;
	}
}

int main(){
	int N = 0;
	printf("输入N:");
	while (1){
		scanf_s("%d", &N);
		if (N < 1000000 && N > 0){
			break;
		}
		printf("输入有误，请重输\n");
	}
	
	int f = Fibonacci(N);
	if (!f){
		printf("%d为斐波那契数\n", f);
	}
	printf("最小步数为：%d\n", f);
	system("pause");
	return 0;
}