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
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";
	struct GameInfo gameInfo2 = { "너도게임",2022,100,"너도회사" };
	gameInfo1.friendGame = &gameInfo2;
	printf("-- 미션맨의 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", gameInfo1.friendGame->name);
	printf("발매 연도: %d\n", gameInfo1.friendGame->year);
	printf("게임 가격 : %d\n", gameInfo1.friendGame->price);
	printf("제작 회사 : %s\n", gameInfo1.friendGame->company);
}