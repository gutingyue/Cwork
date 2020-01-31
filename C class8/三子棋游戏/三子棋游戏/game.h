#pragma once
#include <stdio.h>
#include <Windows.h>
#include <time.h>

#define  ROW 3
#define  COL 3
#define P_ 'X'
#define C_ 'O'

void Game();
int Guess();//小游戏决定先手
void Checkerboard(char board[][COL]);//打印棋盘
void PlayerMove(char board[ROW][COL], int *round);
void ComputerMove(char board[ROW][COL], int *round);
char Judge(char board[ROW][COL]);//判断输赢