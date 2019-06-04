#include<stdio.h>

/*
int main() {
	printf("20192718 고영보 C언어 실습 2019.06.04\n");
	
	int array[4][4] = 
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int g = 0, s = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			array[i][3] += array[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			array[3][j] += array[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\n", array[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

/*
int ten_times(int a);

int main() {
	int variable;
	int ret;

	printf("Input number: ");
	scanf("%d", &variable);

	printf("%d\n", ten_times(variable));

	ret = ten_times(variable);

	printf("%d\n", ret);
	printf("%d\n", ten_times(variable) * 10);
	printf("%d\n", variable);

	return 0;
}

int ten_times(int Int) {
	return Int * 10;
}
*/

void swap(int *x, int *y);

int main() {
	int i = 10, j = 20;

	printf("Before Swap()... i = %d, j = %d\n", i, j);
	swap(&i, &j);
	printf("\n");
	printf("After Swap()...  i = %d, j = %d\n", &i, &j);

	return 0;
}

void swap(int *x, int *y) {
	int space = *x;

	*x = *y;
	*y = space;

	printf("After Swap()...  i = %d, j = %d\n", *x, *y);
}
