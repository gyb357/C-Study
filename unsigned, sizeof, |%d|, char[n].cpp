#include <stdio.h>

int main() {
	// 정수형 변수
	int i, j;
	unsigned int u_i;
	long I;
	unsigned long u_I;

	// 실수형 변수
	float f;
	double d;

	// short
	short s;
	
	printf("sizeof i = %i u_i = %d\n", sizeof(i), sizeof(u_i));
	printf("sizeof I = %d u_I = %d\n", sizeof(I), sizeof(u_I));
	printf("sizeof f = %d   d = %d\n", sizeof(f), sizeof(d));
	printf("sizeof s = %d u_s = %d\n", sizeof(s), sizeof(s));

	printf("sizeof i = %i u_i = %d\n", sizeof(int), sizeof(unsigned int));
	printf("sizeof I = %d u_I = %d\n", sizeof(long), sizeof(unsigned long));
	printf("sizeof f = %d   d = %d\n", sizeof(float), sizeof(double));
	printf("sizeof s = %d u_s = %d\n", sizeof(short), sizeof(short));

	i = 0.5;
	printf("i = 0.5, 결과값 = %d\n", i); // int형 변수는 소숫점 표기 안됨
	
	i = 10;
	j = 3;
	printf("i / j = %d\n", i / j); // / = 몫
	printf("i % j = %d\n", i % j); // % = 나머지

	printf("|%d| |%5d| |%05d|\n", i, i, i); // 5칸

	f = 3.14;
	printf("|%f| |%5f| |%05f|\n", f, f, f);
	printf("|%d| |%5d| |%05d|\n", (int) f, (int) f, (int) f);

	printf("|%f| |%8.3f| |%.3f|\n", f, f, f); // .3 = 소숫섬 3자리까지 표기

	char c;
	char str[10] = "123456789"; // 10개의 공간


	
	printf("c = %c %d\n", c ,c);
	printf("str = %s\n", str);

	return 0;
}
