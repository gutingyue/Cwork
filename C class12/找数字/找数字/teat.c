#include <stdio.h>
#include <Windows.h>
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
int find_data(int arr[], int num){
	int find = arr[0];
	int i = 0;
	for (; i < num; i++){
		find ^= arr[i];
	}
	return find;
}

int main(){
	int arr[11] = { 11, 22, 11, 22, 33, 66, 40, 33, 55, 55, 66 };
	int num = sizeof (arr) / sizeof (arr[0]);
	int find = find_data(arr, num);
	printf("find data:%d\n", find);
	system("pause");
	return 0;
}