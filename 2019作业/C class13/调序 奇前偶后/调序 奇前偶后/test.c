#include <stdio.h>
#include <Windows.h>
//1.
//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ������һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
void rank(int arr[], int num){
	int *p = arr;
	int *q = arr + num;
	while (p<q){
		if (((*p%2)==0)&((*q%2)==1)){
			*p ^= *q;
			*q ^= *p;
			*p ^= *q;
		}
		p++;
		q--;
	}
}

int main(){
	int arr[10] = { 1, 4, 5, 7, 44, 34, 6, 9, 10, 11 };
	int num = sizeof(arr) / sizeof(arr[0]);
	rank(arr,num);
	int i = 0;
	for (; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}