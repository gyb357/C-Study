#include <stdio.h>

int main() {
	/*
	int a, b;
	printf("첫번째 숫자를 입력하시오.\n");
	scanf("%d", &a);

	printf("두번째 숫자를 입력하시오.\n");
	scanf("%d", &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	*/

	/*
	float 국어, 영어, 수학, 과학, 총점, 과목개수;

	국어 = 95;
	영어 = 85;
	수학 = 75;
	과학 = 80;
	
	printf("국어: %f\n", 국어);
	printf("영어: %f\n", 영어);
	printf("수학: %f\n", 수학);
	printf("과학: %f\n", 과학);

	총점     = 국어 + 영어 + 수학 + 과학;
	과목개수 = 4;

	printf("\n");

	printf("총점: %f\n", 총점);
	printf("평균: %f\n", 총점 / 과목개수);
	*/

	int a, b, c, x;

	x = 2 + (2 * 4) - 5;		printf("x = %d\n", x);	// x = 5
	x = 2 * 2 % 4 / 2;			printf("x = %d\n", x);	// x = 0
	x = -2 - (3 * 4) + (5 % 6);	printf("x = %d\n", x);	// x = -9
	x = x + 5;					printf("x = %d\n", x);	// x = -4
	
	a = b = c = 3;		printf("a = %d\n", a);			// a = 3
	a = -2 + (6 % 4);	printf("a = %d\n", a);			// a = 0
	//(a = (b = (c = 3))) 죽, a = 3, b = 3, c = 3

	return 0;
}

