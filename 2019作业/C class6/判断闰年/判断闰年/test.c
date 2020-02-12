#include<stdio.h>

int Year(int x){
	if (x % 4 == 0){
		if ( x % 100 == 0){
			if (x % 400 == 0){
				return 1;
			}
			return 0;
		}
		else{
			return 1;
		}
	}
}

int main()
{
	int year = 0;
	printf("输入年份：");
	scanf_s("%d", &year);
	int i=Year(year);
	if (i == 1){
		printf("%d是闰年\n", year);
	}
	else{
		printf("%d不是闰年\n", year);
	}
	system("pause");
	return 0;
}