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
		printf("�� �� ���׿� ���� �ٱ��? (1~6) ");
		scanf_s("%d", &num);
		if (num < 1 || num>6) {
			printf("�Է°��� �߸��Ǿ����ϴ�. \n");
			continue;
		}
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;

		printf("�� ��� �ð� : %1d�� \n", totalElapsedTime);
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %1d�� \n", prevElapsedTime);
		decreaseWater(prevElapsedTime);

		if (cursor[num - 1] <= 0) {
			printf("%d�� ������ ������ �̹� �׾����Ƿ� ���� ���� �ʽ��ϴ�. \n", num);
		}
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d�� ���׿� ���� �ݴϴ�.\n", num);
			cursor[num - 1] += 1;
		}

		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf("** �����մϴ�. %d �������� %d������ �ö����ϴ�. **\n\n", level - 1, level);
			if (level == 5) {
				printf("\n\n �����մϴ�, �ְ����� �޼��Ͽ� ������ �����մϴ�! \n\n");
				exit(0);
			}
		}
		if (checkFishAlive() == 0) {
			printf("��� ����Ⱑ �׾����ϴ�. \n\n");
			exit(0);
		}
		else {
			printf("����Ⱑ ���� ����־��1");
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
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
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