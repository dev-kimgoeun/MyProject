#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main_4check(void) {
	srand(time(NULL));
	int num = rand() % 100 + 1;
	
	int answer = 0;
	int chance = 5;

	while (1) {
		printf("���� ��ȸ : %d�� \n", chance--);
		printf("���ڸ� ���纸����~ (1~100) : ");
		scanf_s("%d", &answer);
		if (answer > num) {
			printf("down \n\n");
		}
		else if (answer < num) {
			printf("up \n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�. \n\n");
			break;
		}
		else {
			printf("�� �� ���� ������ �߻��߽��ϴ�. \n\n");
		}
		if (chance == 0) {
			printf("��� ��ȸ�� ����߾��. �ƽ��Ե� �����߽��ϴ�. \n");
			break;
		}
	}

	int coffee_count = 0; 
	printf("Ŀ�Ǹ� �ֹ����ּ���. : ");
	scanf_s("%d", &coffee_count);
	
	int sandwich_count = 0;
	printf("������ġ�� �ֹ����ּ���. : ");
	scanf_s("%d", &sandwich_count);

	int total_price = 0;
	if (sandwich_count > 0 && coffee_count > 0) {
		total_price = (sandwich_count * 6000) + (coffee_count * 3500);
	}
	else {
		total_price = (sandwich_count * 6000) + (coffee_count * 4500);
	}
	printf("�ֹ��Ͻ� �޴��� �ѱݾ��� %d���Դϴ�. \n", total_price);

	return 0;
}