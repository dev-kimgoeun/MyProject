#include <stdio.h>

struct GameInfo {
	const char* name;
	int year;
	int price;
	const char* company;
	struct GameInfo* friendGame;
};
typedef struct GameInfomation {
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
} GAME_INFO;

int main_9struct(void) {
	struct GameInfo gameInfo1;
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

	printf("== 게임 출시 정보 == \n");
	printf("게임이름 : %s\n", gameInfo1.name);
	printf("발매연도 : %d\n", gameInfo1.year);
	printf("게임가격 : %d\n", gameInfo1.price);
	printf("게임회사 : %s\n", gameInfo1.company);

	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	printf("== 미션맨의 게임 출시 정보 == \n");
	printf("게임이름 : %s\n", (*gamePtr).name);
	printf("발매연도 : %d\n", (*gamePtr).year);
	printf("게임가격 : %d\n", (*gamePtr).price);
	printf("게임회사 : %s\n", gamePtr -> company);

	struct GameInfo gameInfo2 = { "너도게임", 2022,100, "너도회사" };

	gameInfo1.friendGame = &gameInfo2;
	printf("== 게임 출시 정보 == \n");
	printf("게임이름 : %s\n", gameInfo2.name);
	printf("발매연도 : %d\n", gameInfo2.year);
	printf("게임가격 : %d\n", gameInfo2.price);
	printf("게임회사 : %s\n", gameInfo2.company);

	struct GameInfo gameArray[2] = {
		{"나도게임", 2022, 50, "나도회사"},
		{"너도게임", 2022, 100, "너도회사"}
	};

	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "한글게임";
	game1.year = 2022;

	GAME_INFO game2;
	game2.name = "한글게임2";
	game2.year = 2023;

	printf("== 게임 출시 정보 == \n");
	printf("게임이름 : %s\n", game1.name);
	printf("발매연도 : %d\n", game1.year);
	printf("게임가격 : %d\n", game2.name);
	printf("게임회사 : %s\n", game2.year);

	return 0;
}