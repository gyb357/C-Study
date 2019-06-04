#include<stdio.h>
#include<memory.h> // memset을 사용하려면 memory.h 헤더파일을 정의해야함.

/*
void print_array(int array[]);

int main() {
	printf("20192718 고영보 C언어 실습 2019.05.30\n");

	int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // 0, 1, 2, 3, .... 8, 9

	printf("array[%d] = %d\n\n", 3, array[3]);

	print_array(array);

	return 0;
}

void print_array(int array[]) {
	for (int i = 0; i < 10; i++) {
		array[i] = i;

		printf("array[%d] = %d\n", i, array[i]);
	}
}
*/

/*
int main() {
	printf("20192718 고영보 C언어 실습 2019.05.30\n");

	
	int array[10][5] = { {1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3}, {4, 4}, {5} }; // 행렬에서의 초기값 정의 = { {}, {}, {}, {} ... }

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			array[i][j] = 0;
			printf("array[%d][%d] = %d\n",i, j, array[i][j]);
			
			//if (j == 4) {
			//	puts("");
			//}
			
		}
		printf("\n");
	}
	
	return 0;
}
*/

/*
int main() {
	printf("20192718 고영보 C언어 실습 2019.05.30\n");

	int array[10][3] = {
		{100, 100, 90},
		{100, 90, 80},
		{90, 80, 70},
		{80, 70, 60},
		{70, 60, 50},
		{60, 50, 40},
		{50, 40, 30},
		{40, 30, 20},
		{40, 30, 20},
		{30, 20, 10}
	};

	for (int i = 0; i < 10; i++) {
		int 합 = 0;
		for (int j = 0; j < 3; j++) {
			
			합 += array[i][j];
		}

		int 평균 = 합 / 3;

		array[i][3] = 합;
		array[i][4] = 합 / 3;

		printf("mean = %d", 평균);
	}
}
*/

/*
int main() {
	printf("20192718 고영보 C언어 실습 2019.05.30\n");

	int i = 100;

	printf("[1] = %d\n", i);

	{
		i -= 100;
		printf("[2] = %d\n", i);
	}

	printf("[3] = %d\n", i);
}
*/

/*
int main() {
	printf("20192718 고영보 C언어 실습 2019.05.30\n");

	int i = 10;
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		sum += 1;
	}

	printf("i = %d", i);
}
*/

int main() {
	printf("20192718 고영보 C언어 실습 2019.05.30\n");
	int x, y;
	int tmp;

	x = 100;
	y = 200;

	printf("x = %d, y = %d\n", x, y);

	tmp = x;

	{
		x = y;
		y = x;

		printf("x = %d, y = %d", x, tmp);
	}

	return 0;
}
