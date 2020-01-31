#include<stdio.h>
#include<windows.h>

int  one()
{
	int h_long = 0;
	int max = 0;
	scanf_s("%d", &max);

	for ( h_long=0; h_long<max ; h_long++){
		int i = 0;
		for (i = 0; i < h_long; i++){
			printf("*");
		}
		printf("\n");
		Sleep(100);
	}

	for (;h_long>0; h_long--){
		int j = 0;
		for (j = 0; j < h_long; j++){
			printf("*");
		}
		printf("\n");
		Sleep(100);
	}

	system("pause");
	return 0;
}