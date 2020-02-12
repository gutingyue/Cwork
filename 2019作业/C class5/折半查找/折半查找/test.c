#include <stdio.h>
#include <stdlib.h>

int find(int *a, int *mid, int nums[], int left, int right){
	while (left <= right)
	{
		*mid = (left + right) / 2;
		if (nums[*mid] > *a){
			right = *mid - 1;
		}
		else if (nums[*mid] < *a){
			left = *mid + 1;
		}
		else{
			return 1;
		}
	}
	return 0;
}


int main()
{
	int nums[] = { 11, 22, 25, 29, 55, 66, 77, 88, 99, 100, 101, 110 };
	int key = 0;
	int mid = 0;
	printf("\n请输入要查找的值：");
input:
	scanf_s("%d", &key);

	int a = 0;
	int left = 0;
	int right = sizeof(nums) / sizeof(nums[0]) - 1;
	a = find(&key, &mid, nums, left, right);

	if (1 == a){
		printf("数组中存在%d,在第%d个\n", key, mid + 1);
	}
	else{
		printf("抱歉%d未找到\n请重输：", key);
		goto input;
	}
	system("pause");
	return 0;
}