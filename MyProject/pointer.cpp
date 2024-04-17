#include <stdio.h>

void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int * ptr);


int main_7pointer(void) {
	int ö�� = 1;
	int ���� = 2; 
	int �μ� = 3;
	printf("ö���� �ּ�: %p, ��ȣ :%d\n", &ö��, ö��);
	printf("����� �ּ�: %p, ��ȣ :%d\n", &����, ����);
	printf("�μ��� �ּ�: %p, ��ȣ :%d\n", &�μ�, �μ�);

	int* �̼Ǹ�;
	�̼Ǹ� = &ö��;
	printf("�̼Ǹ��� �湮�� ���� �ּ�: %p, ��ȣ: %d\n", �̼Ǹ�, *�̼Ǹ�);
	�̼Ǹ� = &����;
	printf("�̼Ǹ��� �湮�� ���� �ּ�: %p, ��ȣ: %d\n", �̼Ǹ�, *�̼Ǹ�);
	�̼Ǹ� = &�μ�;
	printf("�̼Ǹ��� �湮�� ���� �ּ�: %p, ��ȣ: %d\n", �̼Ǹ�, *�̼Ǹ�);
	
	//������ ������ �ٲ� �� ���
	�̼Ǹ� = &ö��;
	*�̼Ǹ� = *�̼Ǹ� * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� ���� �ּ� : %p, ��ȣ: %d\n", �̼Ǹ�, *�̼Ǹ�);	
	
	printf(">> �����̰� �̼��� �����ϴ� ��");
	int* ������ = �̼Ǹ�;
	*������ = *������ - 1;
	printf("�����̰� �湮�� ���� �ּ�: %p, ��ȣ : %d\n", ������, *������);

	�̼Ǹ� = &����;
	*�̼Ǹ� = *�̼Ǹ� * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� ���� �ּ� : %p, ��ȣ: %d\n", �̼Ǹ�, *�̼Ǹ�);	
	
	printf(">> �����̰� �̼��� �����ϴ� ��");
	 ������ = �̼Ǹ�;
	*������ = *������ - 1;
	printf("�����̰� �湮�� ���� �ּ�: %p, ��ȣ : %d\n", ������, *������);

	�̼Ǹ� = &�μ�;
	*�̼Ǹ� = *�̼Ǹ� * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� ���� �ּ� : %p, ��ȣ: %d\n", �̼Ǹ�, *�̼Ǹ�);

	//�����ͺ����� �߰��� �� �ٲٱ�
	printf(">> �����̰� �̼��� �����ϴ� ��");
	������ = �̼Ǹ�;
	*������ = *������ - 1;
	printf("�����̰� �湮�� ���� �ּ�: %p, ��ȣ : %d\n", ������, *������);

	printf(">> ���� �ͼ� �ٲ� ��ȣ�� ���� ���<< \n");
	printf("ö���� �ּ�: %p, ��ȣ :%d\n", &ö��, ö��);
	printf("����� �ּ�: %p, ��ȣ :%d\n", &����, ����);
	printf("�μ��� �ּ�: %p, ��ȣ :%d\n", &�μ�, �μ�);

	printf("�̼Ǹ��� �ּ� : %p, \n", &�̼Ǹ�);
	printf("�̼Ǹ��� �ּ� : %p, \n", &������);

	int arr[3] = { 5, 10,15 };
	for (int i = 0; i < 3; i++) {
		printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
	}

	int* ptr = arr;
	for (int i = 0; i < 3; i++) {
		printf("�����ͺ��� ptr[%d]�� �� : %d\n", i, ptr[i]);
	}

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	for (int i = 0; i < 3; i++) {
		printf("�迭 arr[%d]�� ��: %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("�迭 ptr[%d]�� ��: %d\n", i, ptr[i]);
		printf("�迭 ptr[%d]�� ��: %d\n", i, *(ptr+i));
	}

	int a = 10;
	int b = 20;
	printf("a�� �ּ�: %p\n", &a);
	printf("b�� �ּ�: %p\n", &b);
	printf("swap() �Լ� ȣ����  -> a:%d, b: %d\n", a, b);
	swap(a, b);
	printf("swap() �Լ� ȣ����  -> a:%d, b: %d\n", a, b);
	printf("swap_addr() �Լ� ȣ����  -> a:%d, b: %d\n", a, b);
	swap_addr(&a, &b);
	printf("swap_addr() �Լ� ȣ����  -> a:%d, b: %d\n", a, b);

	int arr2[3] = { 10,20,30 };
	changeArray(arr2);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}
	return 0;
}

void swap(int a, int b) {
	printf("swap() �Լ� �ȿ����� a�� �ּ�: %p\n", &a);
	printf("swap() �Լ� �ȿ����� b�� �ּ�: %p\n", &b);
	int temp = a;
	a = b;
	b = temp;
	printf("swap() �Լ� ��-> a: %d, b:%d\n", a, b);
}
void swap_addr(int * a, int * b) {
	printf("swap_addr() �Լ� �ȿ����� a�� �ּ�: %p\n", a);
	printf("swap_addr() �Լ� �ȿ����� b�� �ּ�: %p\n", b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("swap_addr() �Լ� ��-> a: %d, b:%d\n", *a, *b);
}
void changeArray(int* ptr) {
	ptr[2] = 50;
}
