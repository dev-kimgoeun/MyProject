#include <stdio.h>

//ȸ�����
int main_2in (void) {
	//�̸�
	char name[256];
	printf("�̸��� �Է��ϼ���. : ");
	scanf_s("%s", name, sizeof(name));

	//���̵�
	char id[256];
	printf("����� ���̵� �Է��ϼ���. : ");
	scanf_s("%s", id, sizeof(id));

	//����
	int age;
	printf("���̸� ���ڷ� �Է��ϼ���. : ");
	scanf_s("%d", &age);

	//����
	char birth[256];
	printf("������ �Է��ϼ���. (����, ��:0802) : ");
	scanf_s("%s", birth, sizeof(birth));

	//�Ź�ũ��
	int size;
	printf("�Ź�ũ�⸦ �Է��ϼ��� : ");
	scanf_s("%d", &size);

	//ȸ���������
	printf("\n\n---ȸ�� ���� ---\n\n");
	printf("�̸�	: %s\n", name);
	printf("���̵�	: %s\n", id);
	printf("����	: %d\n", age);
	printf("����	: %s\n", birth);
	printf("�Ź�ũ��: %d\n", size);

	return 0;
}