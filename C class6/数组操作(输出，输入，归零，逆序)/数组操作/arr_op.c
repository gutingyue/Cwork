#include "arr_op.h"

void Printf(int *arr, int i){
	printf("数组打印");
	int j = 0;
	for (j=0; j < i; j++){
	printf("%d ",arr[j]);
	}
	printf("\n ");
}

void init(int *arr,int i){
	printf("数组赋值");
	int j = 0;
	for (; j < i; j++){
		scanf_s("%d", &arr[j]);
	}
}

void empty(int *arr, int i){
	printf("数组归零");
	int j = 0;
	for (; j < i; j++){
		arr[j] = 0;
	}
}

void reverse(int *arr, int i){
	printf("数组逆序");
	int j = 0;
	for (j = 0,i=i-1; j <= i; j++, i--){
		int tem = 0;
		tem = arr[j];
		arr[j] = arr[i];
		arr[i] = tem;
	}
}
