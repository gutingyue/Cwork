#include<stdio.h>
#include<Windows.h>

int strlen1(char *str){
	if (*str == '\0'){
		return 0;
	}
	return 1 + strlen(str + 1);
}


int strlen2(char *str){
	int i = 0;
	for (; *str != '\0'; str++){
		i++;
	}
	return i;
}

int main(){
	char *str = "abcd1234";
	int sum1 = strlen1(str);
	printf("strlen(recursion):%d\n", sum1);
	int sum2 = strlen2(str);
	printf("strlen(non_recursion):%d\n", sum2);

	system("pause");
	return 0;
}