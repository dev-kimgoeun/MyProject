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
	gameInfo1.name = "��������";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	printf("== ���� ��� ���� == \n");
	printf("�����̸� : %s\n", gameInfo1.name);
	printf("�߸ſ��� : %d\n", gameInfo1.year);
	printf("���Ӱ��� : %d\n", gameInfo1.price);
	printf("����ȸ�� : %s\n", gameInfo1.company);

	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	printf("== �̼Ǹ��� ���� ��� ���� == \n");
	printf("�����̸� : %s\n", (*gamePtr).name);
	printf("�߸ſ��� : %d\n", (*gamePtr).year);
	printf("���Ӱ��� : %d\n", (*gamePtr).price);
	printf("����ȸ�� : %s\n", gamePtr -> company);

	struct GameInfo gameInfo2 = { "�ʵ�����", 2022,100, "�ʵ�ȸ��" };

	gameInfo1.friendGame = &gameInfo2;
	printf("== ���� ��� ���� == \n");
	printf("�����̸� : %s\n", gameInfo2.name);
	printf("�߸ſ��� : %d\n", gameInfo2.year);
	printf("���Ӱ��� : %d\n", gameInfo2.price);
	printf("����ȸ�� : %s\n", gameInfo2.company);

	struct GameInfo gameArray[2] = {
		{"��������", 2022, 50, "����ȸ��"},
		{"�ʵ�����", 2022, 100, "�ʵ�ȸ��"}
	};

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ۰���";
	game1.year = 2022;

	GAME_INFO game2;
	game2.name = "�ѱ۰���2";
	game2.year = 2023;

	printf("== ���� ��� ���� == \n");
	printf("�����̸� : %s\n", game1.name);
	printf("�߸ſ��� : %d\n", game1.year);
	printf("���Ӱ��� : %d\n", game2.name);
	printf("����ȸ�� : %s\n", game2.year);

	return 0;
}