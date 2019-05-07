#include <stdio.h>

int main() {

	printf("20192718 고영보 C언어 실습 2019.05.07\n");

	//char Score;

	//printf("Input Your Score: ");
	//scanf("%c", &Score);

	/*
	if (Score == 'A' || Score == 'a') {
		printf("Good\n");
	}
	else if (Score == 'B' || Score == 'b') {
		printf("Normal\n");
	}
	else if (Score == 'C' || Score == 'c') {
		printf("Bad\n");
	}
	else {
		printf("Error\n");
	}
	*/

	/*
	switch (Score) {
		case 'A': printf("Great"); break;
		case 'a': printf("Great"); break;
		case 'B': printf("Normal"); break;
		case 'b': printf("Normal"); break;
		case 'C': printf("Bad"); break;
		case 'c': printf("Bad"); break;
		default: printf("Error");
	}
	*/

	/*
	int a, b;
	char Calc;

	printf("Input Calc(Num1 + Num2): ");
	scanf("%d %c %d", &a, &Calc, &b);

	switch (Calc) {
	case '+': printf("%d + %d = %d\n", a, b, a + b); break;
	case '-': printf("%d - %d = %d\n", a, b, a - b); break;
	case '*': printf("%d * %d = %d\n", a, b, a * b); break;
	case '/': printf("%d / %d = %d\n", a, b, a / b); break;
	default: printf("Erorr\n");
	}
	*/

	/*
	int i;
	//for (i = 0; i < 10; i++) {
	//	printf("Hello World: i = %d\n", i, i++);
	//}

	for (i = 0; i < 10; i++)
		printf("Hello World: i = %d\n", i, i++);
	printf("Hello World");
	*/

	/*
	int a, i, Sum;

	a = 1;
	for (i = 1; i < 10; i++) {
		printf("%d + %d = %d\n", i, 1, a + i);
	}

	puts("");

	Sum = 0;
	for (i = 0; i < 11; i++) {
		Sum += i;
		printf("%d\n", Sum);
	}
	*/

	/*
	int a, i;

	a = 0;
	for (i = 0; i < 100; i++) {
		a += 1;
		if (a % 2 == 1) {
			printf("짝수 = %d\n", a);
		}
	}
	*/

	return 0;
}
