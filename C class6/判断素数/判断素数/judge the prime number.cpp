
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
	printf("请输入一个数：");
	scanf_s("%d", &num);
	int ret=judge(num);
	if (ret == 1){
		printf("%d是一个素数\n", num);
	}
	else{
		printf("%d不是一个素数\n", num);
	}

	system("pause");
	return 0;
}

