#include <stdio.h>
#include <Windows.h>
//2.不使用（a + b） / 2这种方式，求两个数的平均值。

int mean(int x,int y){
	return (x&y) + ((x^y) >> 1);//x,y一样的加x,y不一样的一半
}

int main(){
	int num1 = 80;
	int num2 = 10;
	int mean_num = mean(num1,num2);
	printf("mean number:%d\n", mean_num);
	system("pause");
	return 0;
}