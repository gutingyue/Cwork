#include <stdio.h>

//二维数组初始化
void test1(){
	int arr1[3][2] = { 1, 2, 3, 4 };
	int arr2[][3] = { 1, 2, 3, 4 };
	int arr3[][3] = { { 1, 2 }, { 3, 4 } };

	printf("arr1: \n");
	for (int i = 0; i < 3;i++){
		for (int j = 0; j < 2; j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}  //[ [1,2] [3,4] [0,0] ]

	printf("arr2: \n");
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++)
			printf("%d ", arr2[i][j]);
		printf("\n");
	} //[ [1 2 3] [4 0 0] ]

	printf("arr3: \n");
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++)
			printf("%d ", arr3[i][j]);
		printf("\n");
	} //[ [1 2 0] [3 4 0] ]
}


int main(){
	test1();


	return 0;
}