#include <stdio.h>
void calc();

int main() {
	int a;

	a = 100;

	calc();

	printf("a in calc() is = %d\n", a);

	return 0;
}

void calc() {
	int a;

	a = 200;

	printf("a in calc() is = $d\n", a);
}

// 구조적 프로그래밍: 순차, 판단, 반복
