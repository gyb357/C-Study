#include<stdio.h>

/*
void m_f(int *x, int *y);

int main() {
	printf("20192718 고영보 C언어 실습 2019.06.13\n");

	int a = 100, b = 200;
	char array[10];
	short *p_s;

	printf("array = %c[주소 = %p]\n", array[0], &array[0]);
	p_s = &array[0];
	printf("%d", p_s);


	printf("[1] a = %d[주소 = %p] b = %d[주소 = %p]\n", a, &a, b, &b);

	m_f(&a, &b);

	printf("[3] a = %d[주소 = %p] b = %d[주소 = %p]\n", a, &a, b, &b);

	return 0;
}

void m_f(int *x, int *y) {
	int t = *x;
	*x = *y;
	*y = t;

	printf("[2] a = %d[주소 = %p] b = %d[주소 = %p]\n", *x, &x, *y, &y);
}
*/

int fact(int x);

int main() {
	int number;

	printf("Input Number: ");
	scanf("%d", &number);

	printf("%d\n", fact(number));

	return 0;
}

int fact(int x) {
	if (x == 1) return x;
	return x * fact(x - 1);
}
