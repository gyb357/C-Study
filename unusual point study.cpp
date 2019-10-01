#include <stdio.h>

/*
int main() {
	int i = 3000;
	int *p = NULL;

	p = &i;

	printf("i = %d\n", i); // 변수의 값 출력
	printf("&i = %u\n\n", &i); // 변수의 주소 출력

	printf("p = %u\n", p); // 포인터의 겂 츌력
	printf("*p = %d\n", *p); // 포인터를 통한 간접 참조 값 출력

	return 0;
}
*/

/*
int main() {
	int x = 10, y = 20;
	int *p;

	p = &x;
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);

	p = &y;
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);

	return 0;
}
*/

/*
int main() {
	int i = 10;
	int *p;

	p = &i;
	printf("i = %d\n", i);

	*p = 20; // 포인터를 통하여 변수의 값을 변경한다, * = 간접 참조 연산자
	printf("i = %d\n", i);

	return 0;
}
*/

// 포인터 변수 초기화: int *p = NULL;
// 자료형을 맞춰줘야한다.
// char short int float double

int main() {
	char *pc;
	int *pi;
	double *pd;

	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;

	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;

	printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	printf("pc + 2 = %d, pi + 2 = %d, pd + 2 = %d\n", pc + 2, pi + 2, pd + 2);

	return 0;
}
