#include "game.h"

int Guess(){
	printf("����ʯͷ��\n      ˭Ӯ˭���ߣ�\n");
	printf("���룺 0Ϊʯͷ  1Ϊ����   2Ϊ��\n");
	int time = 0;
	int p=0;
again:
	printf("����������뷨��");
	scanf_s("%d", &p);

	for (time=3; time > 0; time--){
		printf("Ԥ����");
		printf("%d \r", time);
		Sleep(1000);
	}
	int c = rand() % 3;
	switch (c - p)
	{
	case 0:{
			   printf("ƽ�֣�����\n");
			   goto again;
	}
	case -2:
	case 1:{
			   printf("���ԣ�%d   ��ң�%d\n��Ӯ��!���ȿ���\n", c, p);
			   return 1;
	}
		break;
	case -1:
	case 2:{
			   printf("���ԣ�%d   ��ң�%d\n������Ӯ�ˣ������ȿ���\n", c, p);
			   return 2;
	}
		break;
	default:
		printf("�㲻����·��,����\n");
		goto again;
	}
}


int Full(char board[ROW][COL]){//�ж������Ƿ����
	int i = 0;
	int j = 0;
	for (i=0; i < ROW; i++){
		for (j=0; j < COL; j++){
			if (board[i][j] == ' '){
				return 0;
			}
		}
	}
	return 1;//����1��˵��board������û�пո�
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
	printf("����˵��������\n");
	while (1){
		int x = rand() % 3;//�����Զ�����0��3�ĺ�������
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
	printf("��Ļغ�,����������x,y\n"); 
	while(1){
		scanf_s("%d%d", &x, &y);
		if (x <= 0 || y>3 || y <= 0 || x>3){
			printf("��������������\n");
			continue;
		}
		if (board[x - 1][y - 1] != ' '){
			printf("λ�ñ�ռ��,������\n");
			continue;
		}
		break;
	}
	
	board[x - 1][y - 1] = P_;
	*round = 2;
}

char Judge(char board[ROW][COL]){
	
	int i = 0;
	//�жϺ����Ƿ���������
	for (i = 0; i < ROW; i++){
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&&board[i][0] != ' ')
		{return board[i][0];}
	}
	//�ж������Ƿ���������
	for (i = 0; i < COL; i++){
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]&&board[0][i] != ' ')
		{return board[0][i];}
	}
	//�ж϶Խ���
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
		round = Guess();//����1��������ߣ�����2���������
		printf("----��Ϸ��ʼ----\n");
		Checkerboard(board);
		do{
			win = Judge(board);//���أ�F��ƽ��O����Ӯ��X���Ӯ��Nδ��δӮ
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
					 printf("ƽ��\n");
		}break;
		case C_:{
					 printf("Ŷ�ǣ�����Ӯ��\n");
		}break;
		case P_:{
					 printf("��ʤ��\n");
		}break;
		default:
			break;
		}
	}
	