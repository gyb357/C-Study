#include <stdio.h>
#include <stdlib.h>

/*
int main() {
	int i = 10;
	int *pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	++(*pi); // = (*pi)++;
	printf("i = %d, pi = %p\n", i, pi);

	printf("i = %d, pi = %p\n", i, pi);
	*++pi; // = *pi++;
	printf("i = %d, pi = %p\n", i, pi);

	return 0;
}
*/

/*
int main() {
	int data = 0x0A0B0C0D;
	char *pc;
	pc = (char*)&data;

	for (int i = 0; i < 4; i++) {
		printf("*(pc + %d) = %02X\n", i, *(pc + i));
	}

	return 0;
}
*/

/*
int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept) {
	if (x1 == x2) {
		return -1;
	} else {
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		*yintercept = y1 - (*slope) * x1;

		return 0;
	}
}

int main() {
	float s, y;

	if (get_line_parameter(3, 3, 6, 6, &s, &y) == -1) {
		printf("에러");
	} else {
		printf("기울기는 %f, y절편은 %f\n", s, y);
	}

	return 0;
}
*/

/*
int main() {
	int a[] = { 10, 20, 30, 40, 50 };
	printf("a = %u\n", a); // 배열의 이름 자체가 메모리 주소
	printf("a + 1 = %u\n", a + 1);
	printf("*a = %u\n", *a);
	printf("*(a + 1) = %u\n", *(a + 1));

	return 0;
}
*/
