#include <stdio.h>

int main(void) {
	int Ã¶¼ö = 1;
	int ¿µÈñ = 2; 
	int ¹Î¼ö = 3;
	printf("Ã¶¼ö³× ÁÖ¼Ò: %p, ¾ÏÈ£ :%d\n", &Ã¶¼ö, Ã¶¼ö);
	printf("¿µÈñ³× ÁÖ¼Ò: %p, ¾ÏÈ£ :%d\n", &¿µÈñ, ¿µÈñ);
	printf("¹Î¼ö³× ÁÖ¼Ò: %p, ¾ÏÈ£ :%d\n", &¹Î¼ö, ¹Î¼ö);
	return 0;
}