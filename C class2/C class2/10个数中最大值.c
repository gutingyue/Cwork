#pragma warning( disable : 4996)
#include <stdio.h>

int main(){
	char *str = "abcd";
	printf("%d\n", sizeof(str));
	printf("%d\n", strlen(str));
	system("pause");
	return 0;
}