#include <stdio.h>
#include <Windows.h>
int main(){
	int arr[9] = { 8, 2, 5, 9, 25, 3, 6, 7, 1 };
	int i, j, temp;    //�����������ͱ��� 
	for (j = 0; j<8; j++)    //��һ��Ƕ��ѭ��������һ��ÿһ������Ԫ��
	{
		for (i = 0; i<8 - j; i++)
		{
			if (arr[i]>arr[i + 1])//��������
			{
				temp = arr[i];      //����������������ʱ����temp
				arr[i] = arr[i + 1];   
				arr[i + 1] = temp;
			}
		}
	}

	for (i = 0; i < 9; i++){
		printf("%d ", arr[i]);
	}

	system("pause");
	return 0;
}