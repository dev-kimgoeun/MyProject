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

	
	printf("사과 %d개 중에서 %d개를 먹으면 %d가 남습니다. \n", 10, 5, apple(10,5));
	return 0;
}

void p(int num) {
	printf("num은 %d입니다.\n", num);
}
void without_return() {
	printf("반환값이 없는 함수입니다. \n");
}
int with_return() {
	printf("반환값이 있는 함수입니다. \n");
	return 10;
}
void without_params() {
	printf("전달값이 없는 함수입니다.\n");
}
void with_params(int num1, int num2, int num3) {
	printf("전달값이 있는 함수이고, 전달값은 %d, %d, %d 입니다.\n", num1, num2, num3);
}
int apple(int total, int ate) {
	printf("반환값이 있는 함수입니다. \n");
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