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
		printf("���� ��ȸ %d\n", chance--);
		printf("���� ���ڸ� ���� ������.(1~100) : \n");
		scanf_s("%d", &answer);
		if (answer > num) {
			printf("DOWN ��\n\n");
		}
		else if (answer < num) {
			printf("UP ��\n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�.\n\n");
			break;
		}
		else {
			printf("�� �� ���� ������ �߻��߾��.\n\n");
		}
		if (chance == 0) {
			printf("��� ��ȸ�� �����\n");
			printf("���� : %d\n", num);
			break;
		}
	}
	return 0;
}
