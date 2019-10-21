#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// stdlib.h = standard library header file

/*
int get_value(int count);
int print_high_num(int x, int y);
void print_star();

int main() {
	int i = 1;
	int v1 = get_value(i);
	i++;
	int v2 = get_value(i);

	print_star();

	printf("더 큰 정수 = %d\n", print_high_num(v1, v2));

	print_star();

	return 0;
}

int get_value(int count) {
	int a;

	printf("%d번째 정수 입력: ", count);
	scanf("%d", &a);

	return a;
}

int print_high_num(int x, int y) {
	if (x < y) {
		return y;
	}
	else {
		return x;
	}
}

void print_star() {
	for (int i = 0; i < 10; i++) {
		printf("*");
	}

	printf("\n");
}
*/
/*
int get_num(int index);
int calc(int n1, int n2);

int main() {
	int i = 1;
	int a = get_num(i);
	i++;
	int b = get_num(i);

	printf("%d + %d = %d", a, b, calc(a, b));

	return 0;
}

int get_num(int index) {
	int number;
	printf("%d번째 정수 입력", index);
	scanf("%d", &number);

	return number;
}

int calc(int n1, int n2) {
	return n1 + n2;
}
*/


/*
int get_num() {
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	return num;
}

int find_prime(int x) {
	int prime = 0;

	for (int i = 1; i < x; i++) {
		if (x % i == 0) {
			prime++;
		}
	}

	return prime;
}

int main() {
	int n = get_num();
	int prime = find_prime(n);

	prime == 1 ? printf("%d 는 소수입니다", n) : printf("%d 는 소수가 아닙니다", n);

	return 0;
}
*/
/*
int get_num(int index) {
	int num;
	printf("%d번째 정수 입력: ", index);
	scanf("%d", &num);

	return num;
}

int find_prime(int num1, int num2) {
	int prime = 0;

	for (int i = num1; i < num2; i++) {
		for (int j = 1; j < num2; j++) {
			if (i % j == 0) {
				prime++;
			}
		}
	}

	return prime;
}

int main() {
	int idx = 1;
	int n1 = get_num(idx);
	idx++;
	int n2 = get_num(idx);

	int prime = find_prime(n1, n2);

	printf("%d과 %d까지의 소수 개수는 %d개 입니다.", n1, n2, prime);

	return 0;
}
*/

/*
int rand_func();

int main() {

	srand((unsigned)time(NULL));

	for (int i = 1; i < 100; i++) 
		printf("%d\n", rand_func());

	return 0;
}

int rand_func() {
	int a = rand() % 10;

	return a;
}*/
/*
int get_num() {
	int i;

	printf("정수 입력: ");
	scanf("%d", &i);

	return i;
}

void calc_and_print() {
	int num, front, back = 0;

	int re = get_num();

	srand((unsigned)time(NULL));

	for (int i = 0; i < re; i++) {
		num = rand() % 2;

		if (num == 1) {
			front++;
		} else {
			back++;
		}
	}

	printf("front = %d\n", front);
	printf("back = %d\n", back);
}

int main() {
	calc_and_print();

	return 0;
}
*/
