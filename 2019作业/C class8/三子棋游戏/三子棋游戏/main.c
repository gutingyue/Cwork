#include "game.h"

void Menu(){
		printf(" \n**----   ��¼  ----**\n");
		printf("------------------------\n");
		printf("|--    1.������Ϸ    --|\n");
		printf("|--    2.�˳�        --|\n");
		printf("------------------------\n");
	}

int main(){
	int i = 0;
	int quit = 0;
	while (!quit){
		Menu();
		printf("��ѡ��");
		scanf_s("%d", &i);

		switch (i)
		{
		case 1:{
				   Game();
		}
			break;
		case 2:{
				   printf("��Ϸ����\n");
				   quit = 1;
		}
			break;
		default:
			printf("��������\n");
			break;
		}
	}
	

	system("pause");
	return 0;
}