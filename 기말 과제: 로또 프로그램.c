#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define DEBUG 0
#define MAX 45
#define COUNTMAX 7

// 함수 선언
void menu();
void rotto_num(int money, int automatic, int manual, int recommend);
void sort();

// 메인 함수
int main() {
	system("title rotto program"); // 프로그램 타이틀 이름 설정
	system("color f0"); // 프로그램 바탕, 글씨 색깔 설정

	menu();

	system("pause"); // 프로그램 정지

	return 0;
}

// 메뉴 함수
void menu() {
	// 변수 선언
	int num;
	int money;
	int automatic, manual;
	int rec;

	printf("----- 로또 프로그램 -----\n");

select: // goto select에 의해서 이곳에서 다시 순차실행

	printf("1. 실행\n");
	printf("2. 종료\n");
	printf("원하시는 숫자를 입력하세요: ");

	scanf("%d", &num);

	switch (num) {
	case 1: // 1일 때
		// 추천 번호 메뉴
	re: // goto re에 의해 이곳에서 다시 순차실행

		printf("\n");
		printf("추천 번호를 보시겠습니까?\n");
		printf("1. 네\n");
		printf("2. 아니요\n");
		printf("원하시는 숫자를 입력하세요: ");

		scanf("%d", &rec);

		if (rec < 1 || rec > 2) {
			printf("\n");
			printf("잘못된 입력입니다.\n");

			goto re;
		}

	// 돈, 자동, 수동 개수와 추천번호 출력 여부를 입력받음
		printf("\n");
		printf("금액을 입력해주십시오: ");
		scanf("%d", &money);

		if (money >= 1000) {
			printf("\n");
			printf("자동, 수동 개수를 입력하세요.\n");

		automanual: // goto automanual에 의해 이곳에서 다시 순차실행

			printf("자동: ");
			scanf("%d", &automatic);

			printf("수동: ");
			scanf("%d", &manual);

			if (automatic + manual > money * 0.001) {
				printf("%d원 이상 구입할 수 없습니다!\n", money);

				goto automanual;
			}
			else if (automatic + manual < money * 0.001) {
				printf("잔돈이 있습니다! 자동과 수동 개수를 다시 입력해주세요.\n");

				goto automanual;
			}
			else {
				rotto_num(money, automatic, manual, rec);
			}

			//recomment(rec);
		}
		else {
			printf("\n");
			printf("돈이 충분하지 않으므로 프로그램을 종료합니다.\n");
		}

		break;

	case 2: // 2일때 아무것도 안하고 프로그램 종료
		break;

	default: // 1, 2가 아닐때
		printf("\n");
		printf("잘못된 입력입니다.\n");

		goto select; // select로 이동함

		break;
	}
}

// 오름차순 정렬 함수
void sort(int arr[]) {
	int least, tmp;

	for (int i = 0; i < MAX; i++) {
		least = i;

		for (int j = i; j < MAX; j++) {
			if (arr[j] < arr[least]) {
				least = j;
			}
		}

		tmp = arr[i];
		arr[i] = arr[least];
		arr[least] = tmp;
	}
}

// 로또 번호 함수
void rotto_num(int money, int automatic, int manual, int recommend) {
	// 변수 선언
	int autonum[128];
	int autoarr[COUNTMAX] = { 0 };

	int manualnum = 0;
	int manualarr[COUNTMAX] = { 0 };

	char bonus[10] = "(보너스)";

	FILE *fp; // 파일 포인터

	// 파일 열기
	if ((fp = fopen("rotto.txt", "w")) == NULL) { // 파일이 없으면
		if (DEBUG) { // 디버그일때만 아래 문장들을 출력
			printf("\n");
			printf("rotto.txt 파일을 불러올 수 없습니다.\n");
		}

		exit(1);
	}
	else {
		if (DEBUG) {
			printf("\n");
			printf("rotto.txt 파일을 성공적으로 불러왔습니다.\n");
		}
	}

	// 자동 생성
	if (automatic) {
		srand((unsigned)time(NULL)); // 매번 프로그램 실행할때마다 다르게 난수를 생성

		for (int i = 0; i < automatic; i++) {
			printf("----- %d번째 로또 -----\n", i + 1);

			for (int j = 0; j < 7; j++) {
			artrn: // goto artrn에 의해 이곳에서 다시 순차 실행

				autonum[j] = rand() % MAX + 1; // 1 부터 45까지 랜덤으로 난수 생성

				// 번호 중복 검사
				for (int k = 0; k < j; k++) {
					if (autonum[j] == autoarr[k]) { // 만약 autonum이 처음부터 K까지 뽑힌 숫자와 중복되면
						goto artrn; // rtrn으로 이동함
					}
				}

				autoarr[j] = autonum[j];

				printf("%d번째 번호: %d %s\n", j + 1, autoarr[j], (j == 6 ? bonus : ""));

				fprintf(fp, "%d\n", autoarr[j]);
			}
		}
	}

	fclose(fp); // 파일 닫기

	// 수동 생성
	if (manual) {
		for (int i = 0; i < manual; i++) {
			printf("----- %d번째 로또 -----\n", automatic + i + 1);

			for (int j = 0; j < 7; j++) {
			mrtrn:

				printf("%d번째 %s 번호: ", j + 1, (j == 6 ? bonus : ""));

				scanf("%d", &manualnum);

				for (int k = 0; k < j; k++) {
					if (manualnum == manualarr[k]) { // 숫자가 중복되는것을 방지함
						printf("\n");
						printf("숫자가 중복되어서는 안됩니다! 다시 입력해주세요.\n");

						goto mrtrn;
					}
					else if (manualnum > MAX) { // 숫자가 45를 넘기면
						printf("\n");
						printf("숫자는 45 이하여야 합니다!. 다시 입력해주세요.\n");

						goto mrtrn;
					}
				}

				manualarr[j] = manualnum;
			}

			printf("\n");
		}
	}

	// 파일 분석 후 번호 추첨
	if (recommend == 1) {
		int buffer[128];
		int str[128] = { 0 };

		int count[128] = { 0 };

		fopen("rotto.txt", "r"); // 읽기모드로 파일 열기

		for (int i = 0; i < COUNTMAX * automatic; i++) {
			str[i] = atoi(fgets(buffer, 128, fp)); // 숫자로 형변환
		}

		fclose(fp); // 파일 닫기

		printf("----- 통계 -----\n");

		for (int i = 0; i < MAX; i++) {
			count[str[i]]++;

			if (count[i]) {
				printf("%d번: %d\n",i, count[i]);
			}
		}

		sort(str);

		printf("\n");
		printf("----- 가장 많이 뽑힌 번호를 추천합니다. -----\n\n");
	}
}
