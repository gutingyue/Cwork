#include <stdio.h>

void ex(int *x, int *y){
	*x = *x - *y;
	*y = *y + *x;
	*x = *y - *x;
	
}


int main(){
	int x = 0;
	int y = 0;
	printf("Please enput x:");
	scanf_s("%d", &x);
	printf("Please enput y:");
	scanf_s("%d", &y);
	ex(&x, &y);
	printf("x:%d\n",x);
	printf("y:%d\n",y);
	system("pause");
	return 0;
}