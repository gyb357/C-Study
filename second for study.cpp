#include<stdio.h>

int main() {

	printf("20192718 고영보 C언어 및 실습 2019.05.14\n");

	/*
	int i, n;

	printf("Input Number: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		printf("*, %d\n", i);

	*/

	/*
	int i, num;

	printf("Input Number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			printf("%d\n", i);
		}
	}
	*/

	/*
	int i, num;

	printf("Input Number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		if (num % i == 0 && i != 1 && i != num) {
			printf("소수가 아닙니다.");
			break;
		}
		else if (i == num) printf("소수입니다.");
	*/

	int i;
	for (i = 0; i <= 10; i++) {
		if (i % 2 == 1) {
			printf("%d %d\n",i, 1);
		}
		else if (i % 2 != 1) {
			printf("%d %d\n",i, -1);
		}
	}

	return 0;
}
