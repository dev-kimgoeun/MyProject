#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char word[256] = "";
	char definition[256] = "";
	char input[256] = "";

	FILE* file = fopen("C:\\Users\\�����\\word.txt", "rb");
	if (file == NULL) {
		printf("���� ���� ���� \n");
		return 1;
	}
	for (int i = 0; i < 3; i++) {
		(void)fscanf(file, "%s %s", word, definition);
		printf("'%s'(��)��� ���� ���� �ܾ��? ", definition);
		scanf_s("%s", input, (unsigned int)sizeof(input));
		if (strcmp(input, word) == 0) {
			printf("%s, �����Դϴ�. \n\n", word);
		}
		else {
			printf("Ʋ�Ƚ��ϴ�. ������ %s�Դϴ�. \n\n", word);
		}
	}
	fclose(file);
	return 0;
}