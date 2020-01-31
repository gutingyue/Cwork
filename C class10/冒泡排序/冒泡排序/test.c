#include <stdio.h>
#include <Windows.h>
int main(){
	int arr[9] = { 8, 2, 5, 9, 25, 3, 6, 7, 1 };
	int i, j, temp;    //定义三个整型变量 
	for (j = 0; j<8; j++)    //用一个嵌套循环来遍历一遍每一对相邻元素
	{
		for (i = 0; i<8 - j; i++)
		{
			if (arr[i]>arr[i + 1])//升序排序
			{
				temp = arr[i];      //交换两数，借助临时变量temp
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