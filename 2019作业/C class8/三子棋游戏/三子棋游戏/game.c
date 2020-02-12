#include "game.h"

int Guess(){
	printf("剪刀石头布\n      谁赢谁先走！\n");
	printf("输入： 0为石头  1为剪刀   2为布\n");
	int time = 0;
	int p=0;
again:
	printf("告诉我你的想法：");
	scanf_s("%d", &p);

	for (time=3; time > 0; time--){
		printf("预备！");
		printf("%d \r", time);
		Sleep(1000);
	}
	int c = rand() % 3;
	switch (c - p)
	{
	case 0:{
			   printf("平局，再来\n");
			   goto again;
	}
	case -2:
	case 1:{
			   printf("电脑：%d   玩家：%d\n你赢了!你先开局\n", c, p);
			   return 1;
	}
		break;
	case -1:
	case 2:{
			   printf("电脑：%d   玩家：%d\n机器人赢了，电脑先开局\n", c, p);
			   return 2;
	}
		break;
	default:
		printf("你不按套路走,再来\n");
		goto again;
	}
}


int Full(char board[ROW][COL]){//判断棋盘是否放满
	int i = 0;
	int j = 0;
	for (i=0; i < ROW; i++){
		for (j=0; j < COL; j++){
			if (board[i][j] == ' '){
				return 0;
			}
		}
	}
	return 1;//返回1，说明board已满，没有空格
}

void Checkerboard(char board[ROW][COL]){
	int i = 0;
	printf("   ");
	for (i = 0; i < ROW; i++){
		printf("| %d ", i+1);
	}
	printf("\n");
	for (i = 0; i < COL; i++){
		printf("----------------\n");
		printf(" %d ", i+1);
		int j = 0;
		for (j = 0; j < ROW; j++){
			printf("| %c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------------\n\n");
}

void ComputerMove(char board[ROW][COL],int *round){
	printf("电脑说让我想想\n");
	while (1){
		int x = rand() % 3;//电脑自动生成0～3的横纵坐标
		int y = rand() % 3;
		Sleep((rand() % 3)*1000);
		if (board[x][y] == ' '){
			board[x][y] = C_;
			*round = 1;
			break;
		}
	}
}

void PlayerMove(char board[ROW][COL],int *round){
	int x = 0;
	int y = 0;
	printf("你的回合,请输入坐标x,y\n"); 
	while(1){
		scanf_s("%d%d", &x, &y);
		if (x <= 0 || y>3 || y <= 0 || x>3){
			printf("坐标有误，请重输\n");
			continue;
		}
		if (board[x - 1][y - 1] != ' '){
			printf("位置被占用,请重输\n");
			continue;
		}
		break;
	}
	
	board[x - 1][y - 1] = P_;
	*round = 2;
}

char Judge(char board[ROW][COL]){
	
	int i = 0;
	//判断横向是否三子相连
	for (i = 0; i < ROW; i++){
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&&board[i][0] != ' ')
		{return board[i][0];}
	}
	//判断纵向是否三子相连
	for (i = 0; i < COL; i++){
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]&&board[0][i] != ' ')
		{return board[0][i];}
	}
	//判断对角线
	if ((board[1][1] == board[0][0] && board[1][1] == board[2][2]) && board[1][1] != ' '){
		return board[1][1];
	}
	if ((board[0][2] == board[1][1] && board[1][1] == board[2][0]) && board[1][1] != ' '){
		return board[1][1];
	}
	int a = Full(board);
	if (a){
		return 'F';
	}
	return 'N';
}

	void Game()
	{
		char board[ROW][COL];
		srand((unsigned long)time(NULL));
		char win;
		memset(board, ' ', sizeof(board));
		int round = 1;
		round = Guess();//返回1则玩家先走，返回2则电脑先走
		printf("----游戏开始----\n");
		Checkerboard(board);
		do{
			win = Judge(board);//返回：F满平、O电脑赢、X玩家赢、N未满未赢
			if(win == 'N'){
				switch (round){
				case 1:{
						   PlayerMove(board,&round);
						   Checkerboard(board);
						   continue;}
					
				case 2:{
						   ComputerMove(board, &round);
						   Checkerboard(board);
						   continue;}
				}
			}
			break;
		} while (1);

		switch (win){
		case 'F':{
					 printf("平局\n");
		}break;
		case C_:{
					 printf("哦呵，电脑赢了\n");
		}break;
		case P_:{
					 printf("完胜！\n");
		}break;
		default:
			break;
		}
	}
	