
#include <stdio.h>
#include <Windows.h>

int judge(int x){
	int i = 0;
	for (i = 2; i <= x/2; i++){
		if (x%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int num = 0;
	printf("������һ������");
	scanf_s("%d", &num);
	int ret=judge(num);
	if (ret == 1){
		printf("%d��һ������\n", num);
	}
	else{
		printf("%d����һ������\n", num);
	}

	system("pause");
	return 0;
}

