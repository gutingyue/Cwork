#include <stdio.h>
#include <Windows.h>
//дһ���������ز����������� 1 �ĸ���
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
	// ���� 1��λ��
}

int main(){
	unsigned int value = 0;
	printf("�����룺");
	scanf_s("%d", &value);
	int count=count_one_bits(value);
	printf("\n1�ĸ�����%d\n", count);

	system("pause");
	return 0;
}