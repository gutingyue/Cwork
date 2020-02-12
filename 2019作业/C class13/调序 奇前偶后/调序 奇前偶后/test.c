#include <stdio.h>
#include <Windows.h>
//1.
//调整数组使奇数全部都位于偶数前面。
//题目：输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
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