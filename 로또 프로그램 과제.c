#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define DEBUG 1
#define ROTTO_NUM 7
#define MAX_NUM 45

int menu();
int create_rotto_num(int money, int automatic);

int main() {
	system("color 0A");

	menu();
}

int menu() {
	int select, money, automatic;

roop:

	printf("----- 로또 프로그램 -----\n");
	printf("1. 실행\n");
	printf("2. 종료\n");

	scanf("%d", &money, &select);

	switch (select) {
	case 1:
		printf("로또 개수와 자동 개수를 입력하세요: ");
		scanf("%d", &automatic);

		create_rotto_num(money, automatic);
		break;

	case 2:
		printf("프로그램을 종료합니다.\n");

		system("pause");

		return 0;

	default:
		printf("잘못된 값입니다.");

		goto roop;
	}
}

int create_rotto_num(int money, int automatic) {
	FILE *fp = NULL;

	int numberAry[ROTTO_NUM];
	int manual, recommend;

	fp = fopen("rotto.txt", "w");

	if ((fp = fopen("rotto.txt", "w")) == NULL) {
		if (DEBUG) {
			printf("rotto.txt 파일을 찾을 수 없습니다.");
		}

		exit(1);
	}

	srand((unsigned)time(NULL));

	printf("----- %d번째 자동생성 -----\n", 1);

	for (int i = 0; i < automatic; i++) {
		for (int j = 0; j < ROTTO_NUM; j++) {
			printf("%d번째 번호 : %d\n", j, 1 + (rand() % MAX_NUM - 1));

			fprintf(fp, "%d/", 1 + (rand() % MAX_NUM - 1));
		}

		printf("----- %d번째 자동생성 -----\n", i + 2);
	}

	if (automatic != money) {
		printf("1부터 45 사이의 원하시는 로또 번호를 입력해주세요.\n");

		for (int i = 0; i < 5 - automatic; i++) {
			for (int j = 0; j < ROTTO_NUM; j++) {
				printf("%d번째 번호: ", j + 1);
				scanf("%d", &manual);

				fprintf(fp, "%d/", manual);
			}

			printf("----- %d번째 자동생성 -----\n", automatic + i + 2);
		}
	}

	fclose(fp);

	if (recommend) {
		fopen("torro.txt", "r");
	}
}
