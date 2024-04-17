#include <stdio.h>

void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int * ptr);


int main_7pointer(void) {
	int 철수 = 1;
	int 영희 = 2; 
	int 민수 = 3;
	printf("철수네 주소: %p, 암호 :%d\n", &철수, 철수);
	printf("영희네 주소: %p, 암호 :%d\n", &영희, 영희);
	printf("민수네 주소: %p, 암호 :%d\n", &민수, 민수);

	int* 미션맨;
	미션맨 = &철수;
	printf("미션맨이 방문한 곳의 주소: %p, 암호: %d\n", 미션맨, *미션맨);
	미션맨 = &영희;
	printf("미션맨이 방문한 곳의 주소: %p, 암호: %d\n", 미션맨, *미션맨);
	미션맨 = &민수;
	printf("미션맨이 방문한 곳의 주소: %p, 암호: %d\n", 미션맨, *미션맨);
	
	//포인터 변수로 바꾼 값 출력
	미션맨 = &철수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳의 주소 : %p, 암호: %d\n", 미션맨, *미션맨);	
	
	printf(">> 스파이가 미션을 수행하는 중");
	int* 스파이 = 미션맨;
	*스파이 = *스파이 - 1;
	printf("스파이가 방문한 곳의 주소: %p, 암호 : %d\n", 스파이, *스파이);

	미션맨 = &영희;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳의 주소 : %p, 암호: %d\n", 미션맨, *미션맨);	
	
	printf(">> 스파이가 미션을 수행하는 중");
	 스파이 = 미션맨;
	*스파이 = *스파이 - 1;
	printf("스파이가 방문한 곳의 주소: %p, 암호 : %d\n", 스파이, *스파이);

	미션맨 = &민수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳의 주소 : %p, 암호: %d\n", 미션맨, *미션맨);

	//포인터변수를 추가해 값 바꾸기
	printf(">> 스파이가 미션을 수행하는 중");
	스파이 = 미션맨;
	*스파이 = *스파이 - 1;
	printf("스파이가 방문한 곳의 주소: %p, 암호 : %d\n", 스파이, *스파이);

	printf(">> 집에 와서 바뀐 암호를 보고 놀람<< \n");
	printf("철수네 주소: %p, 암호 :%d\n", &철수, 철수);
	printf("영희네 주소: %p, 암호 :%d\n", &영희, 영희);
	printf("민수네 주소: %p, 암호 :%d\n", &민수, 민수);

	printf("미션맨의 주소 : %p, \n", &미션맨);
	printf("미션맨의 주소 : %p, \n", &스파이);

	int arr[3] = { 5, 10,15 };
	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	}

	int* ptr = arr;
	for (int i = 0; i < 3; i++) {
		printf("포인터변수 ptr[%d]의 값 : %d\n", i, ptr[i]);
	}

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d]의 값: %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("배열 ptr[%d]의 값: %d\n", i, ptr[i]);
		printf("배열 ptr[%d]의 값: %d\n", i, *(ptr+i));
	}

	int a = 10;
	int b = 20;
	printf("a의 주소: %p\n", &a);
	printf("b의 주소: %p\n", &b);
	printf("swap() 함수 호출전  -> a:%d, b: %d\n", a, b);
	swap(a, b);
	printf("swap() 함수 호출후  -> a:%d, b: %d\n", a, b);
	printf("swap_addr() 함수 호출전  -> a:%d, b: %d\n", a, b);
	swap_addr(&a, &b);
	printf("swap_addr() 함수 호출후  -> a:%d, b: %d\n", a, b);

	int arr2[3] = { 10,20,30 };
	changeArray(arr2);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}
	return 0;
}

void swap(int a, int b) {
	printf("swap() 함수 안에서의 a의 주소: %p\n", &a);
	printf("swap() 함수 안에서의 b의 주소: %p\n", &b);
	int temp = a;
	a = b;
	b = temp;
	printf("swap() 함수 안-> a: %d, b:%d\n", a, b);
}
void swap_addr(int * a, int * b) {
	printf("swap_addr() 함수 안에서의 a의 주소: %p\n", a);
	printf("swap_addr() 함수 안에서의 b의 주소: %p\n", b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("swap_addr() 함수 안-> a: %d, b:%d\n", *a, *b);
}
void changeArray(int* ptr) {
	ptr[2] = 50;
}
