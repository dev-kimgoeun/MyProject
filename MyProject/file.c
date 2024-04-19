#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main(void) {
	/*FILE* file = fopen("C:\\Users\\김고은\\test1.txt", "wb");
	if (file == NULL) {
		printf("파일 열기 실패");
		return 1;
	}
	fputs("fputs() 함수로 글을 써 볼게요. \n", file);
	fputs("잘 써지는지 확인해 주세요. \n", file);
	fclose(file);
	*/
	char line[MAX];
	FILE* file = fopen("C:\\Users\\김고은\\test1.txt", "rb");
	 if (file == NULL) {
		 printf("파일 열기 실패 \n");
		 return 1; 
	 }
	 while (fgets(line, MAX, file) != NULL) {
		 printf("%s", line);
	 }
	 fclose(file);
	return 0;
}