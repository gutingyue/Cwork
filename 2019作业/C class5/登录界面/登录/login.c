#include <stdio.h>
#include <Windows.h>
//ԭ�е��ʺź�����
char origial_Znum[4] = { "1111"};
char origial_Mnum[6] = { "111111" };


int judge(char a[],char b[])
{
	if (0 == strcmp(a, b)){
		printf("��֤�ɹ�\n");
	}
	else{
		printf("��֤ʧ��\n");
		return 0;
	}
	return 1;
}

int main()
{
	char input_Znum[4] = { 0 };
	char input_Mnum[6] = { 0 };
	int num = 0;
	printf("______��¼����______\n\n");
again:
	printf("������һ����λ���˺ţ�\n");
	scanf_s("%s", input_Znum);
	printf("������һ����λ�����룺\n");
	scanf_s("%s", input_Mnum);
	num ++;

	int a = 0;
	int b = 0;
	a = judge(input_Znum, origial_Znum);
	b = judge(input_Mnum, origial_Mnum);
	if (num < 3)
	{
		if (1 == a && 1 == b)
		{
			printf("��¼�ɹ�");
			int t = 0;
			for (; t < 10; t++){
				Sleep(1000);
				printf("������...%ds\r", t);
			}
		}
		else{
			printf("��¼ʧ�ܣ��ʺŻ��������\n");
			goto again;
		}
	}
	
	return 0;
}
