// 20190404 고영보
#include <stdio.h>
#include <string.h>			// memset

void 실습1(), 실습2(), 실습3(), 실습4(), 실습5();

int main() {

	실습4();

	return 0;
}

void 실습1() {
	char s[100];			// 지역변수 = 함수 안에서만 사용 가능, 전역변수 = 전체에서 사용 가능.

	memset(s, 0, 100);		// 지역변수 정리

	printf("입력: ");
	scanf("%[^\n]", &s);	// [^\n] 는 사용자가 엔터 치기 전까지의 모든 데이터를 받아들임. (공백 입력 가능)
	printf("s = [%s]", s);	// 전역변수는 초기화되지만, 지역변수는 초기화되지 않음. -> 이상한 쓰래기값 출력됨.
}

void 실습2() {
	int i, j;

	puts("20192718 고영보");
	printf("Enter first number  :  ");
	scanf("%d", &i);
	printf("Enter second number :  ");
	scanf("%d", &j);

	printf("i < j : %d \n", i < j);		// j 가 i 보다 큰 경우
	printf("i <= j : %d \n", i <= j);	// j 가 i 보다 크거나 같은 경우
	printf("i > j : %d \n", i > j);		// i 가 j 보다 더 큰 경우
	printf("i >= j : %d \n", i >= j);	// i 가 j 보다 크거나 같은 경우
	printf("i == j : %d \n", i == j);	// i 와 j 가 서로 같은 경우
	printf("i != j : %d \n", i != j);	// i 와 j 가 서로 다른 경우
}

void 실습3() {
	int i, j;

	printf("첫번째 숫자 입력: ");
	scanf("%d", &i);
	printf("두번째 숫자 입력: ");
	scanf("%d", &j);

	printf("(0은 거짓, 1은 참)\n");
	printf("\n 부호판별 \n");
	printf("첫번째 숫자는 음수이다: %d\n", i < 0);
	printf("첫번째 숫자는 양수이다: %d\n", i > 0);
	printf("첫번째 숫자는 0이다: %d\n", i == 0);
	printf("두번째 숫자는 음수이다: %d\n", j < 0);
	printf("두번째 숫자는는 양수이다: %d\n", j > 0);
	printf("두번째 숫자는는 0이다: %d\n", j == 0);
}

void 실습4() {
	int i, j;

	printf("Enter first number   :  ");
	scanf("%d", &i);
	printf("Enter Second number  :  ");
	scanf("%d", &j);

	printf("i >= 100 && j >= 100: %d\n", i >= 100 && j >= 100);
	printf("i >= 100 || j >= 100: %d\n", i >= 100 || j >= 100);

	//i = 0;
	printf("i && j: %d\n", i && j);
	printf("i || j: %d\n", i || j);
	printf("!i :%d !j: %d\n", !i, !j);
}\

void 실습5() {
	char flag;

	flag = 0x50;

	// flag = [0101] [0000]
	// 0x01 = [0000] [0001]
	// 0x10 = [0001] [0000]
	// 0x40 = [0100] [0000]

	printf("1번 전원이 %s져 있습니다.\n", (flag & 0x01 != 0) ? "켜" : "꺼");
	printf("5번 전원이 %s져 있습니다.\n", (flag & 0x10 != 0) ? "켜" : "꺼");
	printf("7번 전원이 %s져 있습니다.\n", (flag & 0x40 != 0) ? "켜" : "꺼");
}
