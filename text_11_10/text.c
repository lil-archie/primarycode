
#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//1. ���ɨ����Ϸ����
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);

}
//void game()
//{
//	//1. ��Ҫ��Ų��úõ��׵���Ϣ������Ų�����׵���Ϣ��������Ҫ2����ά����
//	//2. �Ų������ʱ��Ϊ�˷�ֹ����Խ�磬���Ǹ������������2�У���������2��
//	char mine[ROWS][COLS] = { 0 };//���úõ��׵���Ϣ
//	char show[ROWS][COLS] = { 0 };//�Ų�����׵���Ϣ
//	//��ʼ������
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//
//	//��ӡ����
//	DisplayBoard(show, ROW, COL);
//
//	//������
//	SetMine(mine, ROW, COL);
//	DisplayBoard(mine, ROW, COL);
//	//�Ų���
//	FindMine(mine, show, ROW, COL);
//}

void menu()
{
	printf("**************\n");
	printf("**** 1.play***\n");
	printf("**** 0.exit***\n");
	printf("**************\n");

}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		
		scanf("%d", &input);
		
		
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("����������\n");
			break;
		}
		
		

	
	} while(input);
}
//void test()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
//			break;
//		}
//	} while (input);
//}
int main()
{
	test();
	return 0;
}