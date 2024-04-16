#include <stdio.h>

int main_3loop(void) {
	int a = 10;
	printf("a는 %d\n", a);

	a++;
	printf("a는 %d\n", a);

	int b = 20;
	printf("b는 %d\n", ++b);
	printf("b는 %d\n", b++);
	printf("b는 %d\n", b);

	for (int i = 0; i < 11; i++) {
		printf("hello world %d\n", i);
		
	}

	int i = 0;
	while (i <= 10) {
		printf("hi there %d\n", i++);
	}

	int j = 0;
	do {
		printf("do redo %d\n", j++);
	} while (j <= 10);

	for (int i = 1; i <= 3; i++) {
		printf("첫번째 반복문 : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("	두번째 반복문 : %d\n", j);
		}
	}

	for (int i = 2; i <= 9; i++) {
		printf("--- %d 단---\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d \n", i, j, i * j);
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 5; i <= 7; i++) {
		printf("%d단 출력\n", i);
		for (int j = 3; j <= 5; j++) {
			printf("%d * %d = %d \n", i, j, i * j);
		}
	}
	return 0;
}