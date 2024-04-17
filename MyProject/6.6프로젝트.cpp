#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	int treatment = rand() % 4;
	printf("\n -- 자라나는 머리카락 -- \n");
	int cntShowBottle = 0;
	int prevCntShowBottle = 0;

	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0,0,0,0 };
		do {
			cntShowBottle = rand() % 2 + 2;
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;
		printf("> %d번째 테스트 : ", i);
		int isIncluded = 0;
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4;
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isIncluded = 1;
				}
			}
			else {
				j--;
			}
		}
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1) {
				printf("%d ", k + 1);
			}
		}

			printf("번 물약을 머리에 바릅니다 \n\n");
			if (isIncluded == 1) {
				printf(">> 성공! 머리카락이 났어요! \n");
			}
			else {
				printf(">> 실패! 머리카락이 나지 않았어요! \n");
			}
			printf("/n 계속하려면 enter를 누르세요, \n");
			getchar();
	}

	printf("\n 발모제는 몇  번일까요? \n");
	int answer;
	scanf_s("%d", &answer);
	if (answer == treatment + 1) {
		printf(">>정답입니다.");
	}
	else {
		printf(">> 틀렸습니다! 정답은 %d번 입니다. \n", treatment + 1);
	}

	//셀프체크
	int scores[5] = { 76, 84, 80, 92, 96 };
	int sum = 0;
	float average = 0.0f;
	for (int i = 0; i < 5; i++) {
		sum += scores[i];
	}
	average = sum / 5.0f;
	printf("총점은 %d점, 평균은 %.1f점입니다.\n", sum, average);
	return 0;
}