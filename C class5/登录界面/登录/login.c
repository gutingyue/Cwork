#include <stdio.h>
#include <Windows.h>
//原有的帐号和密码
char origial_Znum[4] = { "1111"};
char origial_Mnum[6] = { "111111" };


int judge(char a[],char b[])
{
	if (0 == strcmp(a, b)){
		printf("验证成功\n");
	}
	else{
		printf("验证失败\n");
		return 0;
	}
	return 1;
}

int main()
{
	char input_Znum[4] = { 0 };
	char input_Mnum[6] = { 0 };
	int num = 0;
	printf("______登录界面______\n\n");
again:
	printf("请输入一个四位数账号：\n");
	scanf_s("%s", input_Znum);
	printf("请输入一个六位数密码：\n");
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
			printf("登录成功");
			int t = 0;
			for (; t < 10; t++){
				Sleep(1000);
				printf("加载中...%ds\r", t);
			}
		}
		else{
			printf("登录失败，帐号或密码错误\n");
			goto again;
		}
	}
	
	return 0;
}
