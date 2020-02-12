#include <stdio.h>
#include <Windows.h>

void recursion(int n){
	if (n == 0){
		return;
	}
	printf("%d ", n % 10);
	recursion(n / 10);
}

int main(){
	int sum = 0;
	printf("������һ����:");
	scanf_s("%d", &sum);
	recursion(sum);
	system("pause");
	return 0;
}