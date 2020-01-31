#include <stdio.h>
#include <Windows.h>

void non_recursive(int x){
	int i = 0;
	int num1 =1;
	int num2 = 1;
	int num = 0;
	if (x > 2){
		for (i = 3; i <= x; i++){
			num = num1 + num2;
			num1 = num2;
			num2 = num;
		}
		printf("非递归求第%d个斐波那契数是%d\n",x,num);
	}
	else if (x<=2 && x>0){
		printf("第%d个斐波那契数是1\n",x);
	}
	else{
		printf("输入有误\n");
	}
}

int recursive(int n){
	if (n <= 2){
		return 1;
	}
	else if (n>2){
		return recursive(n - 1) + recursive(n - 2);
	}
	else{
		return 0;
	}
}

int main(){
	int x = 0;
	printf("您知道第几个斐波那契数？\n");
	scanf_s("%d", &x);
	non_recursive(x);
	int ret=recursive(x);
	printf("递归求第%d个斐波那契数是%d\n", x,ret);
	system("pause");
	return 0;
}