#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level) {
	return rand() % (level * 9) + 1;
}
void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n######### %d��° ��й�ȣ #########\n", level);
	printf("\n\t%d x %d ? \n\n", num1,num2);
	printf("############################\n");
	printf("\n��й�ȣ�� �Է��ϼ���.(���Ḧ ���ϸ� -1 �Է� >> ");
}
void success() {
	printf("\n >> Good! �����Դϴ�.\n");
}
void fail() {
	printf("\n >> ��! Ʋ�Ƚ��ϴ�.\n");
}
int main(void)
{
	int count = 0;
	srand(time(NULL));
	
	for (int i = 1; i <= 5; i++) {
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);
		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) {
			printf("\n���α׷��� �����մϴ�.\n");
			exit(0);
		}
		else if (answer == num1 * num2) {
			success();
			count++;
		}
		else {
			fail();
		}
	}
	printf("\n\n��й�ȣ %d���� �������ϴ�.\n", count);
	return 0;
}