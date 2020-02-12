#include <stdio.h>
#include <Windows.h>

void reverse_string(char *string){
	if (*string == '\0'){
		return;
	}
	reverse_string(string + 1);
	printf("%c ", *string);
}


int main(){
	char *string = "abcd1234";
	int i = 0;
	reverse_string(string);
	printf("\n ");
	system("pause");
	return 0;
}