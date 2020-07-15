#include<stdio.h>
#include <Windows.h>

void test1(){
	int i = 0;
	for (i = 0; i = 1; i++){ //i=1不是判断语句，而是赋值语句，在进行循环判断是，结果永远为1--->是
		//for循环就会陷入死循环
		printf("i: %d\n", i);
		Sleep(1);
	}
}

//数组越界，覆盖条件变量，造成的死循环
void test2(){
	int i = 0;
	int arr[10] = { 0 };

	for (i = 0; i <= 13; i++){
		printf("arr[%d] \n", i);
		arr[i] = 1;
		Sleep(5);
	}
}

//逗号表达式作为判断条件
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