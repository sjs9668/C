#include <stdio.h>

struct GameInfo
{
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
};
int main(void) {
	struct GameInfo gameInfo1;
	gameInfo1.name = "��������";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";
	struct GameInfo gameInfo2 = { "�ʵ�����",2022,100,"�ʵ�ȸ��" };
	gameInfo1.friendGame = &gameInfo2;
	printf("-- �̼Ǹ��� ���� ��� ���� --\n");
	printf("���� �̸� : %s\n", gameInfo1.friendGame->name);
	printf("�߸� ����: %d\n", gameInfo1.friendGame->year);
	printf("���� ���� : %d\n", gameInfo1.friendGame->price);
	printf("���� ȸ�� : %s\n", gameInfo1.friendGame->company);
}