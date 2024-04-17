#include <stdio.h>

int main_6array(void) {
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;
	
	for (int i = 0; i < 3; i++) {
		printf("지하철 %d호차에 %d명이 타고 있습니다. \n", i+1, subway_array[i]);
	}

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //배열초기화
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++) {
		printf("%.2f\n", arr_f[i]);
	}

	char c = 'A';
	printf("%c\n", c);

	/*char str1[6] = "coding";
	printf("%s\n", str1);
	배열 마지막에 널값이 들어갈 공간이 필요함. 오버플로 발생 
	*/ 

	char str[7] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));

	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));

	char c_array[7] = { 'c', 'o','d','i','n','g','\0' };
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%s\n", c_array);
		printf("%d\n", c_array[i]);
	}
	char name[256];
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);

	for (int i = 0; i < 128; i++) {
		printf("아스키코드 값 %d : %c\n", i, i);
	}

	return 0;
}