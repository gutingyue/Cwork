#include <stdio.h>
#include <Windows.h>

int recursion(int n){
	if (1!=n){
		return n*recursion(n - 1);
	}
	return 1;
}

int non_recursion(int n){
	int i = n;
	int ret = 1;
	for (; i > 1; i--){
		ret = ret*i;
	}
	return ret;
}

int main(){
	int n = 0;
	printf("请输入n：");
	scanf_s("%d", &n);

	int rec = recursion(n);
	printf("\n%d的阶乘为(递归)：%d\n", n, rec);
	int non = non_recursion(n);
	printf("%d的阶乘为(非递归)：%d\n", n, non);

	system("pause");
	return 0;
}