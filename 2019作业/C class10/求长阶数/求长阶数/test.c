#include <stdio.h>
#include <windows.h>

int main(){
	int n = 0;
	for (n = 0; n <= 1000; n++){
		if (n % 2 == 1 && n % 3 == 2 && n % 5 == 4 && n % 6 == 5 && n % 7 == 0){
			printf("%d\n", n);
			continue;
		}
	}
	system("pause");
	return 0;
}