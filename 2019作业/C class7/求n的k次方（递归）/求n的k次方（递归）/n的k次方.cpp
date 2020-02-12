#include <stdio.h>
#include <Windows.h>

int f(int x,int y){
	if (y >1){
		x=x*f(x, y - 1);
	}
	return x;
	}


int main(){
	int n = 0;
	int k = 0;
	printf("\nn:");
	scanf_s("%d", &n);
	printf("\nk:");
	scanf_s("%d", &k);
	int ret=f(n, k);
	printf("½á¹ûÎª£º%d\n", ret);

	system("pause");
	return 0;
}