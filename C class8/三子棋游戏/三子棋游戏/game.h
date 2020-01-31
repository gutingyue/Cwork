#pragma once
#include <stdio.h>
#include <Windows.h>
#include <time.h>

#define  ROW 3
#define  COL 3
#define P_ 'X'
#define C_ 'O'

void Game();
int Guess();//С��Ϸ��������
void Checkerboard(char board[][COL]);//��ӡ����
void PlayerMove(char board[ROW][COL], int *round);
void ComputerMove(char board[ROW][COL], int *round);
char Judge(char board[ROW][COL]);//�ж���Ӯ