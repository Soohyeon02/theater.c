#include <stdio.h>
#define SIZE 10

int main(void){
	int ans1;
	int ans2, i;
	int seats[SIZE] = { 0 };

	while (1)
	{
		printf("1. 예약 2. 예약취소 3. 종료\n");
		scanf_s("%d", &ans1);

		if (ans1 == 1)
		{
			printf("---------------------------------\n");
			printf("  1  2  3  4  5  6  7  8  9  10\n");
			printf("---------------------------------\n");

			for (i = 0; i < SIZE; i++)
				printf("  %d", seats[i]);
			printf("\n");

			printf("몇번째 좌석을 예약하시겠습니까 ");
			scanf_s("%d", &ans2);
			if (ans2 <= 0 || ans2 > SIZE) {
				printf("1부터 10사이의 숫자를 입력하세요\n");
				continue;
			}
			if (seats[ans2 - 1] == 0) {
				seats[ans2 - 1] = 1;
				printf("예약되었습니다.\n");
			}
			else
				printf("이미 예약된 자리입니다.\n");
		}
		else if (ans1 == 2)
		{
			printf("---------------------------------\n");
			printf("  1  2  3  4  5  6  7  8  9  10\n");
			printf("---------------------------------\n");

			for (i = 0; i < SIZE; i++)
				printf("  %d", seats[i]);
			printf("\n");

			printf("몇번째 좌석을 취소하시겠습니까 ");
			scanf_s("%d", &ans2);
			if (ans2 <= 0 || ans2 > SIZE) {
				printf("1부터 10사이의 숫자를 입력하세요\n");
				continue;
			}
			if (seats[ans2 - 1] == 1) {
				seats[ans2 - 1] = 0;
				printf("예약이 취소되었습니다.\n");
			}
			else if (ans1 == 3)
				return 0;
		}
	}
	return 0;
}