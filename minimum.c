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
//	srand((unsigned)time(NULL)); //이 문장을 통해 완전히 랜덤한 숫자들을 만들어낸다. NULL은 1970년 1월 1일 0시 0분부터 현재시각까지 경과한 시간을 나타냄
//	for (i = 0; i < SIZE;i++)
//	{
//		prices[i] = (rand() % 100) + 1; // 이 문장을 통해 랜덤한 숫자들의 범위를 1부터 100까지로 지정함 100으로 나눈 나머지는 0부터 99까지밖에 없기 때문이다.
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
//	printf("최소값은 %d입니다.\n", minimum);
//	return 0;
//}