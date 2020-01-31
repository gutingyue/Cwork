#include <stdio.h>
#include <Windows.h>

//���Ͼ���
//��һ����ά����.�����ÿ�д������ǵ�����,ÿ�д��ϵ����ǵ�����.�������������в���һ�������Ƿ����.
//���飺
//    1  2  3  4   
//    3  4  5  6  
//    4  5  7  10  
//    6  9  10 11
int find(int arr[][4],int num, int key){
	int row = num-1;
	int col = 0;
	while ( row>0 && col<(num-1) ){
		if (key < arr[row][col]){
			row--;
		}
		if (key > arr[row][col]){
			col++;
		}
		if (key == arr[row][col]){
			return 1;
		}
	}
	return 0;
}

int main(){
	int arr[4][4] = { { 1, 2, 3, 4 }, { 3, 4, 5, 6 }, { 4, 5, 7, 10 }, { 6, 9, 10, 11 } };
	int num = sizeof(arr) / sizeof(arr[0]);
	int key = 11;
	int ret = find(arr, num, key);
	if (ret){
		printf("Find:%d\n", key);
	}
	else{
		printf("Not Find\n");
	}
	system("pause");
	return 0;
}