#include "game.h"

void Menu(){
		printf(" \n**----   登录  ----**\n");
		printf("------------------------\n");
		printf("|--    1.进入游戏    --|\n");
		printf("|--    2.退出        --|\n");
		printf("------------------------\n");
	}

int main(){
	int i = 0;
	int quit = 0;
	while (!quit){
		Menu();
		printf("请选择：");
		scanf_s("%d", &i);

		switch (i)
		{
		case 1:{
				   Game();
		}
			break;
		case 2:{
				   printf("游戏结束\n");
				   quit = 1;
		}
			break;
		default:
			printf("输入有误\n");
			break;
		}
	}
	

	system("pause");
	return 0;
}