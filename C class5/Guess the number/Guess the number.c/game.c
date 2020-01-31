#include <stdio.h>
#define RAND_MAX 0x7fff

int random_num = 0;
int input_num = 0;

int start()//开始界面
{
	int i;
	printf("******游戏登录******\n");
	printf("____________________\n");
	printf("是否开始：(输入1开始，输入其他结束)：");
	scanf_s("%d", &i);
	return i;
}


void end(int *num)//结束界面
{
	if (*num <5){//判断游戏结果
		printf("\n******你成功了******\n");
		switch (*num){
		case 1:
		case 2:printf("太厉害了%d次就猜对了\n", *num);
			break;
		case 3:
		case 4:printf("一共猜了%d次，真棒！\n", *num);
		}
	}
	else if (*num == 5 && random_num == input_num){
		printf("\n******你成功了******\n");
		printf("富贵险中求\n答案就是%d\n\n", input_num);
	}
	else{
		printf("\n******你失败了******\n");
		printf("%d次机会已经用完了\n", *num);
	}
}

void judge(int x, int y, int *num)//判断大小并计算次数
{
	if (x < y){
		printf("不好意思大了\n");
	}
	else if (x > y){
		printf("嘿嘿嘿，小了\n");
	}
	else{
		if (*num< 5){
			printf("是的，就是%d\n", input_num);
		}
	}
}


void game(int *num){
	printf("\n******游戏开始******\n");
	printf("现在有一个1-100的随机整数\n");
	printf("你有五次机会猜猜它的大小：");
	random_num = rand() % 100 + 1;//生成一个随机数赋给random_num
	for (; random_num != input_num &&*num<5;){//请用户反复输入一个值，并判断
		scanf_s("\n%d", &input_num);
		(*num)++;
		judge(random_num, input_num,&num);
	}
}


int main(){
	int num = 0;
	int a = start();
	switch (a)
	{
	case 1:
		game(&num);
		end(&num);
		break;
	default:printf("\n******不玩算了******\n");
	}

	system("pause");
	return 0;
}