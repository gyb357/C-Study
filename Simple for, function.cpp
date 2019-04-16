#include <stdio.h>
long sum();

int main() {

	printf("sum is %d\n", sum());

	return 0;
}

long sum() {
	int a, i;
	long sum;

	printf("¼ýÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä..");
	scanf("%d", &a);

	sum = 0;

	for (i = 1; i <= a; i++) {
		sum = sum + i;
	}

	return sum;
}
