#include <stdio.h>

int main_3check(void) {
	int floor;
	printf("¸î ÃþÀ¸·Î ½×°Ú½À´Ï±î? (5~100) ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	//¼¿ÇÁÃ¼Å© 
	for (int i = floor; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}