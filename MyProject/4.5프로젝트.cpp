#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main_4check(void) {
	srand(time(NULL));
	int num = rand() % 100 + 1;
	
	int answer = 0;
	int chance = 5;

	while (1) {
		printf("남은 기회 : %d번 \n", chance--);
		printf("숫자를 맞춰보세요~ (1~100) : ");
		scanf_s("%d", &answer);
		if (answer > num) {
			printf("down \n\n");
		}
		else if (answer < num) {
			printf("up \n\n");
		}
		else if (answer == num) {
			printf("정답입니다. \n\n");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생했습니다. \n\n");
		}
		if (chance == 0) {
			printf("모든 기회를 사용했어요. 아쉽게도 실패했습니다. \n");
			break;
		}
	}

	int coffee_count = 0; 
	printf("커피를 주문해주세요. : ");
	scanf_s("%d", &coffee_count);
	
	int sandwich_count = 0;
	printf("샌드위치를 주문해주세요. : ");
	scanf_s("%d", &sandwich_count);

	int total_price = 0;
	if (sandwich_count > 0 && coffee_count > 0) {
		total_price = (sandwich_count * 6000) + (coffee_count * 3500);
	}
	else {
		total_price = (sandwich_count * 6000) + (coffee_count * 4500);
	}
	printf("주문하신 메뉴의 총금액은 %d원입니다. \n", total_price);

	return 0;
}