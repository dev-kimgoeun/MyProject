#include <stdio.h>

int main_3loop(void) {
	int a = 10;
	printf("a�� %d\n", a);

	a++;
	printf("a�� %d\n", a);

	int b = 20;
	printf("b�� %d\n", ++b);
	printf("b�� %d\n", b++);
	printf("b�� %d\n", b);

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
		printf("ù��° �ݺ��� : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("	�ι�° �ݺ��� : %d\n", j);
		}
	}

	for (int i = 2; i <= 9; i++) {
		printf("--- %d ��---\n", i);
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
		printf("%d�� ���\n", i);
		for (int j = 3; j <= 5; j++) {
			printf("%d * %d = %d \n", i, j, i * j);
		}
	}
	return 0;
}