#include <stdio.h>
#include <Windows.h>

int find(int a, int b){
	int i = a;
	for (; i<(a*b); i++){
		if ((i%a == 0) && (i%b == 0)){
			return i;
		}
	}
	return i;
}

int main(){
	int A = 5;
	int B = 7;
	printf("����A B:");
	scanf_s("%d %d",&A,&B);
	int ret = find(A, B);
	printf("��С������Ϊ%d\n", ret);
	system("pause");
	return 0;
}