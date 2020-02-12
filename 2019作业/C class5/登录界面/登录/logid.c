#include <stdio.h>
#include <Windows.h>
#pragma warning (disable:4996)

//原有的帐号和密码
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
	printf("\n______登录界面______\n\n");
	printf("请输入一个六位数账号：");
	scanf("%s", input_Znum);
	printf("\n请输入一个六位数密码：");
	scanf("%s", input_Mnum);
	num++;

	int x= 0;
	int y = 0;
	x = judge(input_Znum, origial_Znum);
	y = judge(input_Mnum, origial_Mnum);
	if (0 == x && 0 == y)
	{
		printf("\n登录成功\n");
		int t = 0;
		for (; t < 10; t++){
			Sleep(1000);
			printf("加载中...%ds\r", t);
		}
	}
	else{
		if (num < 3){
			printf("\n登录失败，帐号或密码错误");
			printf("\n你还有%d次机会",3-num);
			goto again;
		}
		else{
			num = 0;
			int t = 30;
			for (; t>0; t--){
				printf("三次登录失败,请%d秒后重新登录。\r", t);
				Sleep(1000);
			}
			system("cls");
			goto again;
		}
	}

	return 0;
}
