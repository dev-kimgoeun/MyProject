#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main_4con(void) {
	int age = 15;
	if (age >= 20) {
		printf("성년입니다. \n");
	}
	else {
		printf("청소년입니다. \n");
	}

	
	if (age >= 8 && age <= 13) {
		printf("초등학생입니다, \n");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생입니다. \n");
	}
	else if (age >= 17 && age <= 19) {
		printf("고등학생입니다. \n");
	}
	else {
		printf("청소년이 아닙니다. \n");
	}

	int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d) {
		printf("a와 b 또는 c와 d의 값이 같습니다.\n");
	}
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("나머지 학생은 집에 가세요.\n");
			break;
		}
		printf("%d번 학생은 조별과제를 준비하세요 \n", i);
	}

	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d번 학생은 결석입니다. \n", i);
				continue;
			}
			printf("%d번 학생은 조별과제를 준비하세요. \n", i);
		}
	}

	printf("난수 초기화 이전 ... \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
	srand(time(NULL));
	printf("\n\n 난수 초기화 이후 ,,, \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
	printf(" ");

	srand(time(NULL));
	int i = rand() % 3;
	 
	switch (i) {
	case 0: printf("가위 \n");
		break;
	case 1: printf("바위 \n");
		break;
	case 2: printf("보 \n");
		break;

	default: printf("몰라요 \n");
		break;
	}
	return 0;
}