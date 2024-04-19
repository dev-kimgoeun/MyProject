#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main_10file(void) {
	/*FILE* file = fopen("C:\\Users\\김고은\\test1.txt", "wb");
	if (file == NULL) {
		printf("파일 열기 실패");
		return 1;
	}
	fputs("fputs() 함수로 글을 써 볼게요. \n", file);
	fputs("잘 써지는지 확인해 주세요. \n", file);
	fclose(file);
	*/

	/*char line[MAX];
	FILE* file = fopen("C:\\Users\\김고은\\test1.txt", "rb");
	 if (file == NULL) {
		 printf("파일 열기 실패 \n");
		 return 1; 
	 }
	 while (fgets(line, MAX, file) != NULL) {
		 printf("%s", line);
	 }
	 fclose(file);
	 */
	char str1[MAX];
	char str2[MAX];
	int num[6] = { 0,0,0,0,0,0 };
	int bonus = 0;

	FILE* file = fopen("c:\\Users\\김고은\\test2.txt", "rb");
	if (file == NULL) {
		printf("파일 열기 실패 \n");
		return 1;
	}
	fscanf(file, "%s %d %d %d %d %d %d \n", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d\n", str2, bonus);
	fclose(file);
	return 0;
}