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
	printf("������һ���ַ���");
	scanf_s("%c", &a);
	printf("ASCLL�룺%d\n", a);
	printf("ԭ�ַ���%c\n", a);
	int x = 0;
	x=transform(a);
	if (x != 0){
		printf("ת����%c\n", x);
	}
	else{
		printf("�����ַ��޷�ʶ��������");
	}
	system("pause");
	return 0;
}