#include <stdio.h>
#include <Windows.h>

int sum = 0;
void DigitSum(int x){
	if (x > 0){
		sum = sum + (x % 10);
		DigitSum(x / 10);
		printf("%d+", x % 10);
	}
	return;
}

int main(){
	int num = 0;
	printf("«Î ‰»Î:");
	scanf_s("%d", &num);
	printf("\n");
	DigitSum(num);
	printf("=%d\n", sum);
	system("pause");
	return 0;
}