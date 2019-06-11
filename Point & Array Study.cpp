#include<stdio.h>

int main() {
	printf("20192718 고영보 C언어 실습 2019.06.11\n");

	/*
	int i = 100, j = 200;
	int *pi = &i, *pj = &j;

	printf("i = %d, j = %d\n", i, j);
	printf("&i = %d, &j = %d\n", pi, pj);
	printf("pi = %d, pj = %d\n", *pi, *pj);
	*/

	/*
	char c = 'A';
	long a = 10000;

	printf("c = %c, a = %d\n", c, a);
	printf("&c = %d, &a = %d\n", &c, &a);
	printf("pc = %c, pa = %d\n", *&c, *&a);
	*/

	/*
	short array[5];
	short *p_a;

	for (int i = 0; i < 5; i++) {
		array[i] = (i + 1) * 100;
		p_a = &array[i];
		printf("%d[%d]\n", array[i], &array[i]);
		printf("**%d[%d]**\n\n", array[i], *p_a);
	}
	*/

	/*
	int a[5];
	int *p_a;

	for (int i = 0; i < 5; i++) {
		a[i] = (i + 1) * 100;
	}

	for (int i = 1; i, 5; i++) {
		printf("%d[%d]", a[i], &a[i]);
	}
	printf("\n");

	p_a = a;
	//배열의 이름은 첫 번째 원소가 저장된 기억장소의 주소
	for (int i = 0; i < 5; i++) {
		printf("**%d[%d]**", p_a + i, *(p_a + i));
	}
	printf("\n");
	*/

	char array[10];
	char p_c;

	for (int i = 0; i < 10; i++) {
		array[i] = 65 + i;
	}

	p_c = *&array[0];

	printf("%c", p_c);

	return 0;
}
