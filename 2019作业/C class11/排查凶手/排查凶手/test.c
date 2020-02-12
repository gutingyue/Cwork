#include <stdio.h>
#include <Windows.h>
int main(){
	char X = 'A';
	for (X = 'A'; X <= 'D'; X++){
		if ((X != 'A') + (X == 'C') + (X == 'D') + (X != 'D') == 3){
			printf("Ð×ÊÖÊÇ%c\n", X);
		}
	}
	system("pause");
	return 0;
}