#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main(void) {
	/*FILE* file = fopen("C:\\Users\\�����\\test1.txt", "wb");
	if (file == NULL) {
		printf("���� ���� ����");
		return 1;
	}
	fputs("fputs() �Լ��� ���� �� ���Կ�. \n", file);
	fputs("�� �������� Ȯ���� �ּ���. \n", file);
	fclose(file);
	*/
	char line[MAX];
	FILE* file = fopen("C:\\Users\\�����\\test1.txt", "rb");
	 if (file == NULL) {
		 printf("���� ���� ���� \n");
		 return 1; 
	 }
	 while (fgets(line, MAX, file) != NULL) {
		 printf("%s", line);
	 }
	 fclose(file);
	return 0;
}