#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	int treatment = rand() % 4;
	printf("\n\n ==== �ڶ󳪶� �Ӹ�ī�� ���� ===\n\n");
	int cntShowBottle = 0;
	int prevCntShowBottle = 0;
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0,0,0,0 };
		do { cntShowBottle = rand() % 2 + 2; }
		while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;
		printf("> %d��° �׽�Ʈ : ", i);
		int isIncluded = 0;
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4;
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;
				if(randBottle == treatment) {
					isIncluded = 1;
				}
			}
			else {
				j--;
			}
		}
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1) {
				printf("%d ", k + 1);
			}
		}
		printf("�� ������ �Ӹ��� �ٸ��ϴ�.\n\n");
			if (isIncluded == 1) {
				printf(">>���� ! �Ӹ�ī���� �����!!\n");
			}
			else {
				printf(">> ����! �Ӹ�ī���� �����ʾҾ��.\n");
			}
			printf("\n	����Ϸ��� Enter�� ��������.\n");
			getchar();
	}
	printf("\n\n�߸����� �� ���ϱ��?");
	int answer;
	scanf_s("%d", &answer);
	if (answer == treatment + 1) {
		printf("\n>> �����Դϴ�!\n");
	}
	else {
		printf("\n>> ��! Ʋ�Ⱦ��. ������ %d���Դϴ�. \n", treatment + 1);
	}
	return 0;
}