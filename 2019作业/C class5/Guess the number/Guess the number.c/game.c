#include <stdio.h>
#define RAND_MAX 0x7fff

int random_num = 0;
int input_num = 0;

int start()//��ʼ����
{
	int i;
	printf("******��Ϸ��¼******\n");
	printf("____________________\n");
	printf("�Ƿ�ʼ��(����1��ʼ��������������)��");
	scanf_s("%d", &i);
	return i;
}


void end(int *num)//��������
{
	if (*num <5){//�ж���Ϸ���
		printf("\n******��ɹ���******\n");
		switch (*num){
		case 1:
		case 2:printf("̫������%d�ξͲ¶���\n", *num);
			break;
		case 3:
		case 4:printf("һ������%d�Σ������\n", *num);
		}
	}
	else if (*num == 5 && random_num == input_num){
		printf("\n******��ɹ���******\n");
		printf("����������\n�𰸾���%d\n\n", input_num);
	}
	else{
		printf("\n******��ʧ����******\n");
		printf("%d�λ����Ѿ�������\n", *num);
	}
}

void judge(int x, int y, int *num)//�жϴ�С���������
{
	if (x < y){
		printf("������˼����\n");
	}
	else if (x > y){
		printf("�ٺٺ٣�С��\n");
	}
	else{
		if (*num< 5){
			printf("�ǵģ�����%d\n", input_num);
		}
	}
}


void game(int *num){
	printf("\n******��Ϸ��ʼ******\n");
	printf("������һ��1-100���������\n");
	printf("������λ���²����Ĵ�С��");
	random_num = rand() % 100 + 1;//����һ�����������random_num
	for (; random_num != input_num &&*num<5;){//���û���������һ��ֵ�����ж�
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
	default:printf("\n******��������******\n");
	}

	system("pause");
	return 0;
}