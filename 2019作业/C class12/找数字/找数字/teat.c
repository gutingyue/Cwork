#include <stdio.h>
#include <Windows.h>
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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