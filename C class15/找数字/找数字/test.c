#include <stdio.h>
#include <Windows.h>
//1.һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ��ҳ�������ֻ����һ�ε����֣����ʵ�֡�
void find(int arr[], int num){
	int i = 0;
	int j = 0;
	for (; i < num; i++){
		if (arr[i] != 0){
			for (j = i+1; j < num; j++){
				if (arr[i] == arr[j]){
					arr[i] = 0;
					arr[j] = 0;
					continue;
				}
			}
		}
	}
}

int main(){
	int arr[] = { 1, 2, 1, 2, 3, 4, 4, 5, 6, 5, 6, 7};
	int num = sizeof(arr) / sizeof(arr[0]);
	find(arr, num);
	int i = 0;
	printf("��������Ϊ��");
	for (; i < num; i++){
		if (arr[i] != 0){
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}