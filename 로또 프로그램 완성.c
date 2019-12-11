// 헤더파일
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>	// srand함수를 쓰기 위한 time 헤더파일

// 전처리기
#define DEBUG 0
#define MAX 45
#define COUNT 7

#define BONUS "보너스"

// 함수 선언
void menu();
void bubble(int arr[]);
void rotto_auto(int atomatic, int manual);
void rotto_manual(int automatic, int manual);

// 메인 함수
int main() {
	system("title rotto v2.exe");
	system("color f0");

	menu();

	system("pause");

	return 0;
}

// 버블 정렬 함수
void bubble(int arr[]) {
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

// 메뉴 함수
void menu() {
	int select;

	int money;
	int automatic, manual;

	printf("----- 로또 프로그램 -----\n");

	while (1) {
		printf("1. 실행\n");
		printf("2. 종료\n");
		printf("입력: ");

		scanf("%d", &select);

		switch (select) {
		case 1: // 실행을 선택했을 시 수행

			while (1) {
				printf("돈: ");
				scanf("%d", &money);

				printf("자동: ");
				scanf("%d", &automatic);

				printf("수동: ");
				scanf("%d", &manual);

				if (money * 0.001 >= automatic + manual) { // 돈이 모자라는지 검사

					if (automatic) { // 자동이 있을 경우
						rotto_auto(automatic, manual);
					}
					if (manual) { // 수동이 있을 경우
						rotto_manual(automatic, manual);
					}

					break;
				}
				else {
					printf("돈이 부족합니다.\n");
				}
			}
			break; // case 1 탈출

		case 2: // 종료를 선택했을 시 수행
			printf("프로그램 종료.\n");
			break; // case 2 탈출

		default: // 이외의 값일 때 수행
			printf("잘못된 입력입니다.\n");
			break; // dafault 탈출
		}

		if (select == 1 || select == 2) { // 1이나 2를 선택했을 경우
			break; // 초기 수행 입력 while문 탈출
		}
	}
}

// 자동 생성 함수
void rotto_auto(int automatic, int manual) {
	int anum[128];
	int aarr[COUNT] = { 0 }; // 배열 초기화

	FILE *fp;

	
	if ((fp = fopen("rotto.txt", "w")) == NULL) { // rotto.txt 파일을 쓰기모드로 호출. 이때 파일이 존재하지 않으면 아래 수행
		if (DEBUG) { // 디버그에 값이 있으면
			printf("rotto.txt 파일을 불러올 수 없습니다.\n");
		}

		exit(1);
	}
	else {
		if (DEBUG) { // 디버그에 값이 있으면
			printf("rotto.txt 파일을 성공적으로 불러왔습니다.\n");
		}
	}
	
	srand((unsigned)time(NULL)); // 매번 실행할때마다 다르게 난수를 생성

	for (int i = 0; i < automatic; i++) {
		printf("----- %d번째 로또 -----\n", i + 1);

		for (int j = 0; j < 7; j++) {
			again: // goto artrn에 의해 이곳에서 다시 순차 실행

			anum[j] = rand() % MAX + 1; // 1 부터 45까지 랜덤으로 난수 생성

			for (int k = 0; k < j; k++) { // 숫자 중복 검사
				if (anum[j] == aarr[k]) { // 만약 숫자와 중복되면
					goto again; // again으로 역행
				}
			}

			aarr[j] = anum[j];

			printf("%d번째 번호: %d %s\n", j + 1, aarr[j], (j == 6 ? BONUS : ""));

			fprintf(fp, "%d\n", aarr[j]); // 파일에 숫자들을 저장함
		}
	}

	fclose(fp);

	// 통계
	int buffer[1024];
	int str[1024] = { 0 }; // 배열 초기화
	int count[1024] = { 0 }; // 배열 초기화

	fopen("rotto.txt", "r");

	for (int i = 0; i < COUNT * automatic; i++) {
		str[i] = atoi(fgets(buffer, 1024, fp)); // rotto.txt 파일 안에 있는 스트링 문자를 가져온 뒤 정수로 형 변환

		count[str[i]]++;
	}

	fclose(fp); // 파일 닫기

	bubble(str); // 버블 정렬 함수 호출

	printf("----- 통계 -----\n");

	for (int i = 1; i < MAX; i++) {
		printf("%d번: %d\n", i, count[i]);
	}

	printf("가장 많이 뽑힌 숫자를 추천합니다.\n");

	if (!manual) {
		menu(); // 메뉴 함수 호출
	}
}

// 수동 생성 함수
void rotto_manual(int automatic, int manual) {
	int mnum;
	int marr[MAX] = { 0 }; // 배열 초기화

	for (int i = 0; i < manual; i++) { // 수동 개수만큼 반복
		printf("----- %d번째 로또 -----\n", automatic + i + 1);

		for (int j = 0; j < COUNT; j++) { // 행운의 번호를 포함한 숫자 7개를 입력받기 위한 7번 반복
			again: // 숫자가 중복되거나 45를 넘기면 이곳에서 다시 번호를 추첨함

			printf("%d번째 번호: %s", j + 1, (j == 6 ? BONUS : ""));
			scanf("%d", &mnum);

			for (int k = 0; k < j; k++) { // 숫자 중복 감지
				if (mnum == marr[k]) { // 선택한 숫자가 이전의 숫자와 하나라도 같으면
					printf("숫자 중복 감지.\n");

					goto again; // again으로 역행
				}
			}

			if (mnum > MAX) { // 숫자가 45를 넘기면
				printf("숫자 초과 감지.\n");

				goto again; // again으로 역행
			}

			marr[j] = mnum;
		}
	}

	menu(); // 메뉴 함수 호출
}
