#include <stdio.h>
#define SIZE 10

int main(void){
	int ans1;
	int ans2, i;
	int seats[SIZE] = { 0 };

	while (1)
	{
		printf("1. ���� 2. ������� 3. ����\n");
		scanf_s("%d", &ans1);

		if (ans1 == 1)
		{
			printf("---------------------------------\n");
			printf("  1  2  3  4  5  6  7  8  9  10\n");
			printf("---------------------------------\n");

			for (i = 0; i < SIZE; i++)
				printf("  %d", seats[i]);
			printf("\n");

			printf("���° �¼��� �����Ͻðڽ��ϱ� ");
			scanf_s("%d", &ans2);
			if (ans2 <= 0 || ans2 > SIZE) {
				printf("1���� 10������ ���ڸ� �Է��ϼ���\n");
				continue;
			}
			if (seats[ans2 - 1] == 0) {
				seats[ans2 - 1] = 1;
				printf("����Ǿ����ϴ�.\n");
			}
			else
				printf("�̹� ����� �ڸ��Դϴ�.\n");
		}
		else if (ans1 == 2)
		{
			printf("---------------------------------\n");
			printf("  1  2  3  4  5  6  7  8  9  10\n");
			printf("---------------------------------\n");

			for (i = 0; i < SIZE; i++)
				printf("  %d", seats[i]);
			printf("\n");

			printf("���° �¼��� ����Ͻðڽ��ϱ� ");
			scanf_s("%d", &ans2);
			if (ans2 <= 0 || ans2 > SIZE) {
				printf("1���� 10������ ���ڸ� �Է��ϼ���\n");
				continue;
			}
			if (seats[ans2 - 1] == 1) {
				seats[ans2 - 1] = 0;
				printf("������ ��ҵǾ����ϴ�.\n");
			}
			else if (ans1 == 3)
				return 0;
		}
	}
	return 0;
}