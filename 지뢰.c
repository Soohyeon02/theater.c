//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void board(void);
//void minesetup(void);
//void changeboard(int x, int y);
//void showboard(void);
//
//char arr[10][10];
//char mine[10][10];
//char index[9] = { '1','2','3','4','5','6','7','8','9' };
//
//int main(void)
//{
//	int x, y;
//	int a = 1;
//
//	board();
//	minesetup();
//	while (a)
//	{
//		printf("input point x y:");
//		scanf_s("%d %d", &x, &y);
//
//		if (arr[x][y] == '?')
//		{
//			if (mine[x][y] == '*')
//			{
//				printf("\n---------------GAME OVER---------------\n");
//				showboard();
//				a = 0;
//			}
//			else changeboard(x, y);
//		}
//
//		else
//		{
//			printf("\n�̹� ���õ� ��ǥ�Դϴ�.\n");
//		}
//		return 0;
//	} //���⿡ ��ȣ �ϳ��� �����־��� ����
//}
//void board(void)
//{
//	arr[0][0] = '\0'; //�̰� ������ �¾�? �� ó����
//	for (int i = 1; i < 10; i++)
//	{
//		arr[i][0] = index[i - 1]; //���� 0���� ���� O���� �𸣰���
//		arr[0][i] = index[i - 1]; //�����ؼ� �˻��غ��� 0���� ���� ��
//	}
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j < 10; j++)
//		{
//			arr[i][j] = '?';
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			printf("%3c",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void minesetup(void)
//{
//	int check[10][10] = { 0 };
//	int choice1, choice2;
//	char count = '0';
//
//	srand((unsigned)time(0));
//	for (int i = 0; i < 10; i++)
//	{
//		choice1=(rand()%9+1);
//		choice2=(rand()%9+1);
//
//		if (check[choice1][choice2] == 1)
//		{
//			i--;
//		}
//		else
//		{
//			mine[choice1][choice2] = '*';
//			check[choice1][choice2] = 1;
//		}
//	}
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j < 10; j++)
//		{
//			if (check[i][j] != 1)
//			{
//				if (check[i - 1][j - 1] == 1)
//					count++;
//				if (check[i - 1][j] == 1)
//					count++;
//				if (check[i - 1][j + 1] == 1)
//					count++;
//				if (check[i][j - 1] == 1)
//					count++;
//				if (check[i][j + 1] == 1)
//					count++;
//				if (check[i + 1][j - 1] == 1)
//					count++;
//				if (check[i + 1][j] == 1)
//					count++;
//				if (check[i + 1][j + 1] == 1)
//					count++;
//
//				mine[i][j] = count;
//				count = '0';
//			}
//			mine[0][0] = '\0';
//			for (int i = 1; i < 10; i++)
//			{
//				mine[i][0] = index[i - 1];
//				mine[0][i] = index[i - 1];
//			}
//		}
//	}
//}
//void changeboard(int x, int y)
//{
//	arr[x][y] = mine[x][y];
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			printf("%3c", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void showboard(void)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			printf("%3c", mine[i][j]);
//		}
//		printf("\n");
//	}
//}