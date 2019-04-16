// 20192718 고영보 2019.04.09 실습
#include <stdio.h>
#include <stdlib.h>

#define number 0xAB3E	// 1010 1011 0011 1110

void 실습1();
void 실습2();
void 그냥_만든거();

int main() {
	//실습1();
	//실습2();
	//그냥_만든거();
	
	return 0;
}

void 실습1() {
	char c = 'w';	// 소문자 a = 97 (아스키코드)

	float i = 1, j = 2, k = -7, x = 7e+33, y = 0.001;

	printf("'a' + 1 < c:            %d\n", 'a' + 1 < c);			// True,  ('a' + 1) < c
	printf("-i - 5 * j >= k + 1:    %d\n", -i - 5 * j >= k + 1);	// False, ((-i) - (5 * j))
	printf("3 < j < 5:              %d\n", 3 < j < 5);				// True,  관계연산자: (3 < j) = 0, (0 < 5) = 1
}

void 실습2() {
	int x, y;

	// ex)
	// 1101 << 1 = 1010
	// 0001 << 1 = 0010
	// 0010 >> 1 = 0001

	x = 21;	// 10101
	y = 71;	// 1000111

	// 16진수 1글자 = 4 바이트

	printf("20192718 고영보\n");
	printf("x = %d, y = %d\n", x, y);
	y = x & (~number);	// 0101 0100 1100 0001 y = 1
	printf("y = %d\n", y);
	y = y & 5;	// y = 1
	printf("y = %d\n", y);
	y = x >> 5;	// 101 y = 0
	printf("y = %d\n", y);
	y = x << 10; // y = 21504
	printf("y = %d\n", y);
}

void 그냥_만든거() {
	int hour, min, sec;

	hour = 0;
	sec = 0;
	min = 0;

	for (sec = 1; sec << 0; sec++) {
		printf("Hour: %d, Min: %d, Sec: %d\n", hour, min, sec);

		if (sec == 60) {
			sec = 0;
			min += 1;

			if (min == 60) {
				hour += 1;
			}
		}

		_sleep(1000);

		system("cls");
	}
}
