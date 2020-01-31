#include <stdio.h>
#include <stdlib.h>

int transform(int x)
{
	if (x >= 65 && x <= 90){
		x += 32;
	}
	else if (x >= 97 && x <= 122){
		x -= 32;
	}
	else{
		return 0;
	}
	return x;
}


int main(){
	char a = 0;
	printf("请输入一个字符：");
	scanf_s("%c", &a);
	printf("ASCLL码：%d\n", a);
	printf("原字符：%c\n", a);
	int x = 0;
	x=transform(a);
	if (x != 0){
		printf("转换后%c\n", x);
	}
	else{
		printf("输入字符无法识别，请重输");
	}
	system("pause");
	return 0;
}