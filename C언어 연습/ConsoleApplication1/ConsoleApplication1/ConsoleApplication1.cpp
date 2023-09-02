#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
	srand(time(NULL));
	int num = rand() % 100 + 1;
	int answer = 0;
	int chance = 5;
	while (chance > 0)
	{
		printf("남은 기회 %d\n", chance--);
		printf("남은 숫자를 맞혀 보세요.(1~100) : \n");
		scanf_s("%d", &answer);
		if (answer > num) {
			printf("DOWN ↓\n\n");
		}
		else if (answer < num) {
			printf("UP ↑\n\n");
		}
		else if (answer == num) {
			printf("정답입니다.\n\n");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생했어요.\n\n");
		}
		if (chance == 0) {
			printf("모든 기회를 사용함\n");
			printf("정답 : %d\n", num);
			break;
		}
	}
	return 0;
}
