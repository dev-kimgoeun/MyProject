#include <stdio.h>

struct book {
	int id;
	char* title;
	int available;
};

void print_books(struct book* books);

int main_9check(void) {
	struct book books[4] = {
		{1, "c 입문편", 1},
		{2, "파이썬 기본편", 1},
		{3, "자바 기본편", 1},
		{4, "파이썬 중급편", 1}
	};

	int input;
	while (1) {
		print_books(books);
		printf("대출/ 반납 할 책 번호를 입력하세요. ( 종료 : -1) : ");
		scanf_s("%d", &input);
		if (input == -1) {
			printf("프로그램을 종료합니다. \n");
			break;
		}
		if (input < 1 || input >4) {
			printf("잘못된 입력입니다. \n\n");
			continue;
		}
		input -= 1;
		if (books[input].available == 0) {
			printf("'%s' 반납이 완료되었습니다. \n\n", books[input].title);
			books[input].available = 1;
		}
		else {
			printf("'%s' 대출이 완료됐습니다.\n\n", books[input].title);
			books[input].available = 0;
		}
	}
	return 0;
	
}

void print_books(struct book* books) {
	char* available = "대출가능";
	char* unavailable = "대출 중";
	printf("전체 도서 목록입니다. \n");
	printf("====================================\n");
	for (int i = 0; i < 4; i++) {
		printf("%d. %-16s ", books[i].id, books[i].title);
		if (books[i].available) {
			printf("[%s]\n", available);
		}
		else {
			printf("[%s]\n", unavailable);
		}
	}
	printf("====================================\n");
}