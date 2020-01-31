#include <stdio.h>
#include <Windows.h>

void convert(char *arr){
	char *p = arr;
	char *q = arr;
	while (*p != '\0'){
		while (*q != ' '){
			q++;
		}
		*q = '\0';
		printf("%s ", p);
		p = ++q;
	}
}

int main(){
	char arr[] = { "I like beijing." };
	convert(arr);
	system("pause");
	return 0;
}