//#include <stdio.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define SIZE 10
//int main(void)
//{
//	int prices[SIZE] = { 0 };
//	int i, minimum;
//
//	printf("------------------------------\n");
//	printf("1 2 3 4 5 6 7 8 9 10\n");
//	printf("------------------------------\n");
//	srand((unsigned)time(NULL)); //�� ������ ���� ������ ������ ���ڵ��� ������. NULL�� 1970�� 1�� 1�� 0�� 0�к��� ����ð����� ����� �ð��� ��Ÿ��
//	for (i = 0; i < SIZE;i++)
//	{
//		prices[i] = (rand() % 100) + 1; // �� ������ ���� ������ ���ڵ��� ������ 1���� 100������ ������ 100���� ���� �������� 0���� 99�����ۿ� ���� �����̴�.
//		printf("%-3d ", prices[i]);
//	}
//	printf("\n\n");
//
//	minimum = prices[0];
//
//	for (i = 0; i < SIZE; i++)
//	{
//		if (prices[i] < minimum)
//			minimum = prices[i];
//	}
//	printf("�ּҰ��� %d�Դϴ�.\n", minimum);
//	return 0;
//}