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
		printf("�ǵݹ����%d��쳲���������%d\n",x,num);
	}
	else if (x<=2 && x>0){
		printf("��%d��쳲���������1\n",x);
	}
	else{
		printf("��������\n");
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
	printf("��֪���ڼ���쳲���������\n");
	scanf_s("%d", &x);
	non_recursive(x);
	int ret=recursive(x);
	printf("�ݹ����%d��쳲���������%d\n", x,ret);
	system("pause");
	return 0;
}