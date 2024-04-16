#include<stdio.h>

void p(int num);
void without_return();
int with_return();
void without_params();
void with_params(int num1, int num2, int num3);
int apple(int total, int ate);
int add(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int div(int n1, int n2);

int main_5func(void) {
	int num = 2;
	p(num);
	num = add(num,3);

	p(num);
	num = sub(num,1);

	p(num);
	num = mul(num,3);

	p(num);
	num = div(num,6);

	p(num);

	without_return();
	int ret;
	ret= with_return();
	p(ret);

	without_params();

	with_params(1, 2, 3);

	
	printf("��� %d�� �߿��� %d���� ������ %d�� �����ϴ�. \n", 10, 5, apple(10,5));
	return 0;
}

void p(int num) {
	printf("num�� %d�Դϴ�.\n", num);
}
void without_return() {
	printf("��ȯ���� ���� �Լ��Դϴ�. \n");
}
int with_return() {
	printf("��ȯ���� �ִ� �Լ��Դϴ�. \n");
	return 10;
}
void without_params() {
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}
void with_params(int num1, int num2, int num3) {
	printf("���ް��� �ִ� �Լ��̰�, ���ް��� %d, %d, %d �Դϴ�.\n", num1, num2, num3);
}
int apple(int total, int ate) {
	printf("��ȯ���� �ִ� �Լ��Դϴ�. \n");
	return total - ate; 
}
int add(int n1, int n2) {
	return n1 + n2;
}
int sub(int n1, int n2) {
	return n1 - n2;
}
int mul(int n1, int n2) {
	return n1 * n2;
}
int div(int n1, int n2) {
	return n1 / n2;
}