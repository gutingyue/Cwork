#include <stdio.h>
#include <Windows.h>
//写一个函数返回参数二进制中 1 的个数
int count_one_bits(unsigned int value)
{
	int count = 0;
	for (; value > 0;){
		if (value % 2 == 1){
			count++;
		}
		value = value >> 1;
	}
	return count;
	// 返回 1的位数
}

int main(){
	unsigned int value = 0;
	printf("请输入：");
	scanf_s("%d", &value);
	int count=count_one_bits(value);
	printf("\n1的个数：%d\n", count);

	system("pause");
	return 0;
}