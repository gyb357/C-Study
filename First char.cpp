#include <stdio.h>
void fir();
void sec();
void thrd();
void four();

int main() {
	four();

	return 0;
}

void fir() {
	int one, two, result;
	float three;

	one = 'd';	// d 는 아스키코드에서 100	-> one = 100
	two = 2.3;	// 소숫점은 생략			-> two = 2.3
	three = 3;

	result = one + two + three;

	printf("one = %d\n", one);
	printf("two = %d\n", two);
	printf("three = %f\n", three);

	printf("result = %d\n", result);
}

void sec() {
	float p, result;

	p      = 2.94 + 3.15;			// p      = 2.94 + 3.15 = 6.09
	result = (int)2.94 + (int)3.15;	// result = 2 + 3 = 5

	printf("p = %f\n", p);
	printf("result = %f\n", result);
}

void thrd() {
	printf("\a");							// 벨소리
	printf("KIM\n \"MIN\" \n /*LEE*/\n");	// \"blabla\"는 blabla와 ""까지 출력
}

void four() {
	int number;
	char name[50], phraise[35] = "My sakes, that's a grand name!";

	printf("School number: ");
	scanf("%d", &number);

	printf("What is your name: ");
	scanf("%s", name);
	printf("Shcool Number %d Hello %s %s\n", number, name, phraise);
}
