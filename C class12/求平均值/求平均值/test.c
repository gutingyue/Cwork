#include <stdio.h>
#include <Windows.h>
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

int mean(int x,int y){
	return (x&y) + ((x^y) >> 1);//x,yһ���ļ�x,y��һ����һ��
}

int main(){
	int num1 = 80;
	int num2 = 10;
	int mean_num = mean(num1,num2);
	printf("mean number:%d\n", mean_num);
	system("pause");
	return 0;
}