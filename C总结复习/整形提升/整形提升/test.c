#include <stdio.h>

void test(){
	unsigned char c = 0xb0;//1011 0000
	int ic = c + 0;//整形提升0000 0000 0000 0000 0000 0000 1011 0000
	char cc = c + 0;//cc截断c+0的结果进行保存

	char a = 0xb0;//1011 0000
	int ia = a + 0;//整形提升1111 1111 1111 1111 1111 1111 1011 0000

	char b = -1;//补码 1111 1111 
	int ib = b + 0;//整形提升1111 1111 1111 1111 1111 1111 1111 1111


}

int main(){
	test();


	return 0;
}