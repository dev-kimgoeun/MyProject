#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main_4con(void) {
	int age = 15;
	if (age >= 20) {
		printf("�����Դϴ�. \n");
	}
	else {
		printf("û�ҳ��Դϴ�. \n");
	}

	
	if (age >= 8 && age <= 13) {
		printf("�ʵ��л��Դϴ�, \n");
	}
	else if (age >= 14 && age <= 16) {
		printf("���л��Դϴ�. \n");
	}
	else if (age >= 17 && age <= 19) {
		printf("����л��Դϴ�. \n");
	}
	else {
		printf("û�ҳ��� �ƴմϴ�. \n");
	}

	int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d) {
		printf("a�� b �Ǵ� c�� d�� ���� �����ϴ�.\n");
	}
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("������ �л��� ���� ������.\n");
			break;
		}
		printf("%d�� �л��� ���������� �غ��ϼ��� \n", i);
	}

	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d�� �л��� �Ἦ�Դϴ�. \n", i);
				continue;
			}
			printf("%d�� �л��� ���������� �غ��ϼ���. \n", i);
		}
	}

	printf("���� �ʱ�ȭ ���� ... \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
	srand(time(NULL));
	printf("\n\n ���� �ʱ�ȭ ���� ,,, \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
	printf(" ");

	srand(time(NULL));
	int i = rand() % 3;
	 
	switch (i) {
	case 0: printf("���� \n");
		break;
	case 1: printf("���� \n");
		break;
	case 2: printf("�� \n");
		break;

	default: printf("����� \n");
		break;
	}
	return 0;
}