#include <stdio.h>
#include <Windows.h>
#pragma warning (disable:4996)

//ԭ�е��ʺź�����
char origial_Znum[4] = { "0000" };
char origial_Mnum[6] = { "111111" };


int judge(char a[], char b[])
{
	return strcmp(a, b);
}

int main()
{
	char input_Znum[4] = { 0 };
	char input_Mnum[6] = { 0 };
	int num = 0;
again:
	printf("\n______��¼����______\n\n");
	printf("������һ����λ���˺ţ�");
	scanf("%s", input_Znum);
	printf("\n������һ����λ�����룺");
	scanf("%s", input_Mnum);
	num++;

	int x= 0;
	int y = 0;
	x = judge(input_Znum, origial_Znum);
	y = judge(input_Mnum, origial_Mnum);
	if (0 == x && 0 == y)
	{
		printf("\n��¼�ɹ�\n");
		int t = 0;
		for (; t < 10; t++){
			Sleep(1000);
			printf("������...%ds\r", t);
		}
	}
	else{
		if (num < 3){
			printf("\n��¼ʧ�ܣ��ʺŻ��������");
			printf("\n�㻹��%d�λ���",3-num);
			goto again;
		}
		else{
			num = 0;
			int t = 30;
			for (; t>0; t--){
				printf("���ε�¼ʧ��,��%d������µ�¼��\r", t);
				Sleep(1000);
			}
			system("cls");
			goto again;
		}
	}

	return 0;
}
