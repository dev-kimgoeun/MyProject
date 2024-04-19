#include <stdio.h>

struct book {
	int id;
	char* title;
	int available;
};

void print_books(struct book* books);

int main_9check(void) {
	struct book books[4] = {
		{1, "c �Թ���", 1},
		{2, "���̽� �⺻��", 1},
		{3, "�ڹ� �⺻��", 1},
		{4, "���̽� �߱���", 1}
	};

	int input;
	while (1) {
		print_books(books);
		printf("����/ �ݳ� �� å ��ȣ�� �Է��ϼ���. ( ���� : -1) : ");
		scanf_s("%d", &input);
		if (input == -1) {
			printf("���α׷��� �����մϴ�. \n");
			break;
		}
		if (input < 1 || input >4) {
			printf("�߸��� �Է��Դϴ�. \n\n");
			continue;
		}
		input -= 1;
		if (books[input].available == 0) {
			printf("'%s' �ݳ��� �Ϸ�Ǿ����ϴ�. \n\n", books[input].title);
			books[input].available = 1;
		}
		else {
			printf("'%s' ������ �Ϸ�ƽ��ϴ�.\n\n", books[input].title);
			books[input].available = 0;
		}
	}
	return 0;
	
}

void print_books(struct book* books) {
	char* available = "���Ⱑ��";
	char* unavailable = "���� ��";
	printf("��ü ���� ����Դϴ�. \n");
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