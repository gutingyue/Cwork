#include<stdio.h>
#include <Windows.h>

void test1(){
	int i = 0;
	for (i = 0; i = 1; i++){ //i=1�����ж���䣬���Ǹ�ֵ��䣬�ڽ���ѭ���ж��ǣ������ԶΪ1--->��
		//forѭ���ͻ�������ѭ��
		printf("i: %d\n", i);
		Sleep(1);
	}
}

//����Խ�磬����������������ɵ���ѭ��
void test2(){
	int i = 0;
	int arr[10] = { 0 };

	for (i = 0; i <= 13; i++){
		printf("arr[%d] \n", i);
		arr[i] = 1;
		Sleep(5);
	}
}

//���ű��ʽ��Ϊ�ж�����
void test3(){
	int x, y;
	for (x = 0, y = 0; x < 5, y < 3; ++x, ++y){
		printf("x=%d , y=%d \n", x, y);
	}
}

int main(){
	//test2();
	test3();

	return 0;
}