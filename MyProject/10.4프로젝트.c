#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 10000

int main_10pro(void) {
	char password[20];
	char c;
	int i = 0;
	char line[MAX];
	char contents[MAX]="";

	printf("비밀 일기에 오신 것을 환영합니다. \n");
	printf("비밀 번호를 입력하세요.(최대 20자리) : ");
	while (1) {
		c = _getch();
		if (c == 13) {
			password[i] = '\0';
			break;
		}
		else {
			printf("*");
			password[i] = c;
		}
		i++;
	}

	printf("\n\n === 비밀번호 확인중 === \n\n");
	if (strcmp(password, "skehzheld") == 0) {
		printf("=== 비밀번호 확인완료 === \n\n");
		char * fileName = "C:\\Users\\김고은\\secretdiary.txt";

		FILE * file = fopen(fileName, "a+b");
		if (file == NULL) {
			printf("파일 열기 실패 \n");
			return 1; 
		}
		while (fgets(line, MAX, file) != NULL) {
			printf("%s", line);
		}
		printf("\n\n 내용을 계속 작성하세요! 종료하려면 exit를 입력하세요!");
		while (1) {
			scanf("%[^\n]", contents);
			getchar();
			if (strcmp(contents, "EXIT") == 0) {
				printf("비밀 일기 입력을 종료합니다.\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);
		}
		fclose(file);
	}
	else {
		printf("=== 비밀번호가 틀렸어요, \n");
	}
	return 0;
}