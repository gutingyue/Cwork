#include <stdio.h>
#include <Windows.h>
//4.student a am i
//  i ma a tneduts
//  i am a student
void Printf(char str[]){
	int i = 0;
	for (; str[i] != '\0'; i++){
		printf("%c", str[i]);
	}
	printf("\n");
}

void exchange(char *p, char *q){
	for (; p < q; p++, q--){
		*p ^= *q;
		*q ^= *p;
		*p ^= *q;
	}
}

void Str(char str[]){
		char *p = str;
		char *q = str;
		while (*(q-1) != '\0'){
			if (*q == ' '){
				exchange(p, q-1);
				p = ++q;
			}
			else{
				q++;
			}
		}
		p = str;
		q = q - 2;
		exchange(p, q);
}

int main(){
	char str[] = "student a am i";
	Printf(str);
	Str(str);
	Printf(str);
	
	system("pause");
	return 0;
}