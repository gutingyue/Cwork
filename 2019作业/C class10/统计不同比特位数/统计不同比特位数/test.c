#include <stdio.h>
#include <Windows.h>

int main(){
	int n =1999;
	int m =2299;
	int count = 0;
	n = n^m;
	for (; n > 0;){
		if (n % 2 == 1){
			count++;
		}
		n = n >> 1;
	}
	printf("��ͬλ����%d��\n", count);
	system("pause");
	return 0;
}