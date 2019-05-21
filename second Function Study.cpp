#include<stdio.h>
#include<stdlib.h>

int ABS(int a);

int main() {
	system("Color 00");
	printf("20192718 고영보 C언어 실습 2019.05.21\n");

	// 계산기 복습
	/*
	int d;
	float a, b;
	char c;

	again:

	printf("Input Number: ");
	scanf("%f %c  %f", &a, &c, &b);

	switch (c) {
	case'+': printf("%f + %f = %f\n", a, b, a + b); break;
	case'-': printf("%f - %f = %f\n", a, b, a - b); break;
	case'*': printf("%f * %f = %f\n", a, b, a * b); break;
	case'/': printf("%f / %f = %f\n", a, b, a / b); break;

	default: printf("Error!\n"); goto again; break;
	}

	loop:

	printf("Input Number (Again = 1, End = 0): ");
	scanf("%d", &d);

	switch (d) {
	case 1: printf("Again!\n"); goto again; break;
	case 0: printf("End Program...\n"); break;

	default: printf("Error!\n"); goto loop; break;
	}

	system("pause");
	*/

	// 구구단 출력
	/*
	int i, j;
	char space;

	for (i = 1; i < 14; i++) {
		printf("%d단 \n", i);
		for (j = 1; j < 10; j++) {
			// if (j == 6) break;	// 5까지만 for
			// if (j > 5) continue; // 5까지만 for
			printf("%d * %d = %02d\n", i, j, i * j);
		}
		printf("\n\n");
	}
	*/

	// 함수를 이용한 절대값 출력
	int a = 1;

	while (!!a) {
		printf("Input Number(0 = End):  ");
		scanf("%d", &a);

		if (!a) break;

		printf("abs(%d) = %d\n\n", a, ABS(a));
	}

	printf("Program End\n");

	system("pause");

	return 0;
}

int ABS(int a) {
	return abs(a);

	/*
	if(a>0) return a;
	else return -a;
	*/
}
