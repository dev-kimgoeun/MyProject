#include <stdio.h>

int main(void) {
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
	return 0;
}