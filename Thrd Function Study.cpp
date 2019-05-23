#include<stdio.h>

char Calc_Score(float a);
void print_grade(float n, char s);

int main() {
	printf("20192718 고영보 C언어 실습 2019.05.23\n");

	// 복습
	int Do = 1;
	float num;

	while (Do) {
		printf("Input Your Score: ");
		scanf("%f", &num);

		print_grade(num, Calc_Score(num));

		Do = num == 0 ? 0 : 1;
	}

	return 0;
}

char Calc_Score(float a) {
	if (a >= 90)
		return 'A';
	else if (a >= 80)
		return 'B';
	else if (a >= 70)
		return 'C';
	else
		return 'F';
}

void print_grade(float n, char s) {
	printf("Your grade %f is %c\n", n, s);
}
