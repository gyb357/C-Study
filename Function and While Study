#include<stdio.h>

int plus(int x, int y);
int minus(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main() {
	printf("20192718 고영보 C언어 실습 2019.05.16\n");

	/*
	int i, sum = 0;

	for (i = 1; i <= 10; i++) {
		if (i % 2 != 1) {
			sum += i;
		}
	}
	printf("%d", sum);
	*/

	/*
	int i = 0, sum =0;

	while (i < 10) {
		i++;
		sum += i;
	}
	printf("%d", sum);
	*/

	/*
	int i = 0, sum = 0;

	while (i < 10) {
		i++;
		if (i % 2 == 1) {
			sum += i;
		}
	}
	printf("%d", sum);
	*/

	/*
	int i = 0, sum = 0;

	for (i = 1; i <= 10; i++) {
		if (i == 4 || i == 8)
			continue; // break;
		sum = i;
		printf("%d", sum);
	}
	*/

	/*
	int i = 1;
	while (i) {
		printf("Hello World!\n");

		if (i < 10) {
			i++;
		}
		else {
			break;
		}
	}
	*/

	/*
	int i, n;
	double pi = 0;
	for (n = 1; n < 100000000; n++) {
		pi += 1.0 / (4 * n - 3) - 1.0 / (4 * n - 1);
	}
	pi *= 4.0;
	printf("%f", pi);
	*/

	/*
	int a, b;
	char op;

	printf("Input Number: ");

	scanf("%d %c %d", &a, &op, &b);

	switch (op) {
		case '+': printf("%d + %d = %d\n", a, b, a + b); break;
		case '-': printf("%d - %d = %d\n", a, b, a - b); break;
		case '*': printf("%d * %d = %d\n", a, b, a * b); break;
		case '/': printf("%d / %d = %d\n", a, b, a / b); break;
	}
	*/

	int i = 1, a = 0, b = 0;
	char op;

	while (i) {
		printf("Input Number: ");

		scanf("%d %c %d", &a, &op, &b);
		switch (op) {
			case '+': printf("%d + %d = %d\n", a, b, plus(a, b)); break;
			case '-': printf("%d - %d = %d\n", a, b, minus(a, b)); break;
			case '*': printf("%d * %d = %d\n", a, b, multiply(a, b)); break;
			case '/': printf("%d / %d = %d\n", a, b, divide(a, b)); break;

			default: printf("Error!"); break;
		}

		printf("U Wanna End Program?: Yes = 1, No = 0: ");
		scanf("%d", &i);
	}

	if (i == 0) {
		printf("End Program ...\n");
	}
	else {
		printf("ReStart Program ...\n");
	}

	return 0;
}

int plus(int x, int y) {
	printf("function plus() .... x = %d y = %d\n", x, y);
	return x + y;
}

int minus(int x, int y) {
	printf("function minus() .... x = %d y = %d\n", x, y);
	return x - y;
}

int multiply(int x, int y) {
	printf("function multiply() .... x = %d y = %d\n", x, y);
	return x * y;
}

int divide(int x, int y) {
	printf("function divide() .... x = %d y = %d\n", x, y);
	return x / y;
}
