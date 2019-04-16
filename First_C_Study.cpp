#include <stdio.h>

int main(void) {
	int a, b;

	printf("Hello! World!\n");

	printf("입력값 1:\n");
	scanf("%d", &a);

	printf("입력값 2:\n");
	scanf("%d", &b);

	printf("\n\n");

	printf("입력값(%d) + 입력값(%d) = %d\n", a, b, a + b);

	return 0;
}
