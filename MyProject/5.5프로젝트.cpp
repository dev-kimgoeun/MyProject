
#include<time.h>
#include<stdlib.h>
#include <stdio.h>

int getRandomNumber(int level);
void showQuestion(int level, int num2, int num3);
void success();
void fail();
void convert_time(int time);

int main_5check(void) {
	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++) {
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);
		
		int answer = -1;
		scanf_s("%d", &answer);

		if (answer == -1) {
			printf("프로그램을 종료합니다. \n");
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
	printf("정답 %d개를 맞췄습니다, \n", count);
	int time = 118;
	convert_time(time);

	return 0;
}
int getRandomNumber(int level) {
	return rand() % (level * 9) + 1;
}
void showQuestion(int level, int num1, int num2) {
	printf("%d번쨰 정답\n", level);
	printf("%d * %d ? \n", num1, num2);
	printf("정답을 입력하세요, (종료를 원하시면 -1) >> \n");
}
void success() {
	printf("정답입니다. \n");
}
void fail() {
	printf("틀렸습니다. \n");
}
void convert_time(int time) {
	int hour = time / 60; 
	int minute = time % 60; 
	printf("%d 시간 %d 분 \n", hour, minute);
}