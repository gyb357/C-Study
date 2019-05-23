#include<stdio.h>

int main() {
	printf("20192718 고영보 C언어 실습 2019.05.23\n");

	/*
	int a, b, c, d, e, Calc;
	float mean;

	printf("Input Number\n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	Calc = a + b + c + d + e;
	mean = Calc / 5;

	printf("Mean = %.3f\n", mean);
	*/


	//int array[10];
	// 4byte
	//   ㅁ     ㅁ     ㅁ     ㅁ     ㅁ     ㅁ     ㅁ     ㅁ     ㅁ     ㅁ
	// array[0] ...													 array[9]

	int i_a[5] = { 1, 2, 3, 4, 5 };

	/*
	int a, b;

	printf("int    :: %d\n", sizeof(int));
	printf("float  :: %d\n", sizeof(float));
	printf("double :: %d\n", sizeof(double));
	printf("long   :: %d\n", sizeof(long));
	printf("short  :: %d\n", sizeof(short));
	printf("char   :: %d\n\n", sizeof(char));

	printf("int a  :: %d\n", sizeof(a));
	printf("int b  :: %d\n\n", sizeof(b));

	printf("array  :: %d\n", sizeof(array[10]));
	*/

	int i, Calc;
	for (i = 0; i <= 4; i++) {
		printf("%d\n", i_a[i]);

		Calc = i_a[i] + i_a[i];
	}
	printf("All i_a's number add = %d\n", Calc);

	return 0;
}
