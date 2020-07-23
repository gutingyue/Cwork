#include <stdio.h>

void test1_struct(){

	struct s1{ 
		char c1;
		char c2;
		int i;
	}_s1; 

	struct s2{  
		char c1;
		int i;
		char c2;
	}_s2; 

	printf("%d", sizeof(_s1)); //8
	printf("%d", sizeof(_s2)); //12

}

void test2_struct(){

	struct s1{
		char c1; //1
		char c2; //1+6
		double d; //8
	}_s1;

	struct s2{ 
		int i; //4+4
		struct s1 _s1;//16 最大对其数8
		char c; //1+7
	}_s2;

	printf("%d \n", sizeof(_s1)); //16
	printf("%d \n", sizeof(_s2)); //32

}

int main(){
	//test1_struct();
	//test2_struct();

	struct s1{
		double d;
		int i;
		char c;
	}_s1;
	printf("s1:%d \n", sizeof(_s1)); //16
	printf("%p, %p, %p\n", &_s1.d, &_s1.i, &_s1.c);

	struct s2{
		char c;
		double d;
		int i;
	}_s2;
	printf("s2:%d \n", sizeof(_s2)); //24
	printf("%p, %p, %p\n", &_s2.c, &_s2.d, &_s2.i);


	return 0;
}