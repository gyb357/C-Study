// 20192718 고영보 고급 프로그래밍 언어 및 실습 과제

// 전처리기
#include <stdio.h>	// 기본적인 입출력 등을 하기 위한 헤더파일
#include <stdlib.h>	// 프로그램 내에서의 system() 함수와 puts를 사용하기 위한 라이브러리 헤더파일

// 함수 선언
void menu();							// 메뉴함수
void typing(int action);				// 문자 입력함수
void encrypt(char string[], int shift);	// 암호화 함수
void decrypt(char string[], int shift);	// 복호화 함수

// 메인함수
int main() {
	system("Color f0"); // 화면 색상 변경 (system(Color 바탕색, 글자 색))

	menu();				// 메뉴합수 호출

	return 0;			// 0 출력 뒤 프로그램 종료
}

// 메뉴함수
void menu() {
	int select;											// select변수 선언 (정수형)

	first:												// select에 대한 스위치문에서 default의 goto함수에 의해서 다시 돌아오는 구간 (잘못된 수행값을 받았을 때 처음부터 다시 입력받기 위함)

	puts("----- 원하는 수행을 선택하시오 -----");		// 메뉴 출력
	puts("1. 암호화");
	puts("2. 복호화");
	puts("3. 종료");
	printf("선택: ");

	scanf("%d", &select);								// select값을 입력받음

	switch (select) {									// select에 대한 스위치문 실행
		case 1:											// select가 1일때
			printf("----- 암호화 실행 -----\n\n");
			typing(select);								// 문자 입력함수 호출 (select값을 문자열 입력함수에 전달)
		break;											// case 1 탈출

		case 2:											// select가 2일때 실행
			printf("----- 복호화 실행 -----\n\n");
			typing(select);								// 문자 입력함수 호출 (select값을 문자열 입력함수에 전달)
		break;											// case 2 탈출

		case 3:											// select가 3일때 실행
			printf("----- 프로그램 종료 -----\n\n");
		break;											// case 3 탈출

		default:										// select가 1, 2, 3중 그 어떠한 것도 아닐 때 실행
			printf("----- 잘못된 입력입니다 -----\n\n");

			goto first;									// first에서 순차적으로 다시 실행

		break;											// default 탈출
	}
}

// 문자열 입력합수
void typing(int action) {		// 메뉴합수의 select값을 문자열 입력함수에선 action으로 메개변수로 사용
	char string[100];			// 배열 선언 (크기는 100)
	int shift;					// shift 변수 선언 (정수형)

	printf("shift 입력: ");
	scanf("%d", &shift);		// shift값을 입력받음

	printf("문자열 입력: ");
	scanf("%s", string);		// 문자열을 입력받음

	if (action == 1) {			// action의 값의 여부로 암호화 함수를 호출할지, 복호화 함수를 호출할지 결정 (매게변수 action의 값은 메뉴합수의 select, 즉 1일땐 암호화 함수 호출, 2일땐 복호화 함수를 호출)
		encrypt(string, shift);	// 암호화 함수 호출 (배열 string과 shift를 매게변수로 사용)
	}
	else {
		decrypt(string, shift); // 복호화 함수 호출 (배열 string과 shift를 매게변수로 사용)
	}
}

// 암호화 함수
void encrypt(char string[], int shift) {				// 문자열 입력 함수의 string과 shift값을 가져와 메개변수로 사용
	int i = 0;											// while문에 사용될 i 선언 (초기값 = 0)

	while (string[i] != NULL) {							// string문자열의 i번째 문자가 NULL (= \n), 즉 문자열의 끝이 아닐때까지 while문 실행
		if (string[i] >= 'a' && string[i] <= 'z') {		//
			string[i] += shift;							// string문자열의 i번째 문자를 shift만큼 더해서 스펠링 순서를 앞으로 밀어낸다

			if (string[i] > 'z') {						// 만약 shift만큼 밀어낸 문자가 z를 넘어설 경우
				string[i] -= 26;						// 스펠링 개수인 26을 빼서 z를 a로 바꾼다
			}
		}

		i++;											// 다음 string번째의 문자열을 불러오기 위함
	}

	printf("암호화 된 문자: %s\n\n", string);			// 암호화 된 문자열 출력

	menu();												// 메뉴함수 호출 (모든 암호화를 마친 뒤 프로그램의 원하는 수행을 선택하기 위함)
}

// 복호화 함수
void decrypt(char string[], int shift) {				// 문자열 입력함수의 string과 shift값을 가져와 매게변수로 사용
	int i = 0;											// while문에 사용될 i 선언 (초기값 = 0)

	while (string[i] != NULL) {							// string문자열의 i번째 문자가 NULL (= \0), 즉 문자열의 끝이 아닐때까지 while문 실행
		if (string[i] >= 'a' && string[i] <= 'z') {		// 
			string[i] -= shift;							// string문자열의 i번째 문자를 shift만큼 빼서 스펠링 순번을 뒤로 밀어낸다

			if (string[i] > 'z') {						// 만약 shift만큼 밀어낸 문자가 z를 넘어설 경우
				string[i] -= 26;						// 스펠링 개수인 26을 빼서 z를 a로 바꾼다
			}
														// 복호화 과정은 순번을 뒤로 밀어야 하므로 a뒤의 문자가 올 때까지 고려해야 한다
			else if (string[i] < 'a') {					// 만약에 shift만큼 앞으로 밀어낸 i번째의 string문자열이 a보다 앞에 있을 경우
				string[i] += 26;						// 그 문자를 26순번 만큼 더하여 z로 변환한다
			}
		}

		i++;											// 다음 string번째의 문자열을 불러오기 위함
	}

	printf("복호화 된 문자: %s\n\n", string);			// 복호화 된 문자열 출력

	menu();												// 메뉴합수 호출 (모든 복호화를 마친 뒤 프로그램의 원하는 수행을 선택하기 위함)
}
