#include <stdio.h>
#include<time.h>
#include <stdlib.h>

int level;
int arrayFish[6];
void initData();
void printFishes();

void decreaseWater(long elapsedTime);
int* cursor;
int checkFishAlive();

int main(void) {
	long startTime = 0;
	int num;
	long totalElapsedTime= 0;
	long prevElapsedTime= 0;

	initData();
	startTime = clock();
	cursor = arrayFish;
	while (1) {
		printFishes();
		printf("몇 번 어항에 물을 줄까요? (1~6) ");
		scanf_s("%d", &num);
		if (num < 1 || num>6) {
			printf("입력값이 잘못되었습니다. \n");
			continue;
		}
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;

		printf("총 경과 시간 : %1d초 \n", totalElapsedTime);
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %1d초 \n", prevElapsedTime);
		decreaseWater(prevElapsedTime);

		if (cursor[num - 1] <= 0) {
			printf("%d번 어항의 물고기는 이미 죽었으므로 물을 주지 않습니다. \n", num);
		}
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d번 어항에 물을 줍니다.\n", num);
			cursor[num - 1] += 1;
		}

		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf("** 축하합니다. %d 레벨에서 %d레벨로 올랐습니다. **\n\n", level - 1, level);
			if (level == 5) {
				printf("\n\n 축하합니다, 최고레벨을 달성하여 게임을 종료합니다! \n\n");
				exit(0);
			}
		}
		if (checkFishAlive() == 0) {
			printf("모든 물고기가 죽었습니다. \n\n");
			exit(0);
		}
		else {
			printf("물고기가 아직 살아있어요1");
		}
		prevElapsedTime = totalElapsedTime;
	}

	return 0;
}

void initData() {
	level = 1;
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100;
	}
}

void printFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("	%3d ", arrayFish[i]);
	}
	printf("\n\n");
}
void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime);
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0) {
			return 1;
		}
	}
	return 0;
}