#include <stdio.h>
#include <Windows.h>

#define NUM 15

int main(){
	int a[NUM][NUM] = { 0 };
	int x = 0;
	int y = 0;
	for (y = 0,x = 0; y < NUM, x < NUM; y++, x++){
		a[0][y] = 1;
		a[x][y] = 1;
	}
	for (y = 2; y < NUM; y++){
		for (x = 1; x < y; x++){
			a[x][y] = a[x - 1][y - 1] + a[x][y - 1];
		}
	}
	for (y = 0; y < NUM; y++){
		int i = 0;
		for (i = 0; i < NUM - y; i++){
			printf("   ");
		}
		for (x = 0; x < y+1; x++){
			printf("   %4d", a[x][y]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}