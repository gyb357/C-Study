#include<stdio.h>
#include<memory.h>

void print_char(char *s, int index);

int main() {
	printf("20192718 고영보 C언어 실습 2019.05.28\n");

	/*
	int Array[100];

	printf("%d\n", sizeof(Array));
	printf("%d\n", Array[0]);

	// memset(Array, 0, sizeof(Array));

	for (int i = 1; i <= 99; ++i) {
		Array[i] = i * 2;
	}
	printf("%d\n", Array[99]);
	printf("%d\n", Array[100]);
	*/

	/*
	char c_arr[26];

	printf("c_arr[0] = %c\n", c_arr[0]);

	// memset(c_arr, 0, sizeof(c_arr));
	// printf("c_arr[0] = %c\n", c_arr[0]);

	for (int i = 0; i < 26; i++) {
		c_arr[i] = 97 + i;					// 65 = A, 97 = a
		// printf("c_arr[%d] = %c\n",i, c_arr[i]);

		if (i % 5 != 1) {
			puts("");
		}
		print_char(c_arr, i);
	}
	*/

	// 행렬: 3 = 행, 7 = 열

	int ary[3][7];
	
	// 청소

	// memset(ary, 0, sizeof(ary));

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 7; j++) {
			ary[i][j] = 0;
		}
	}

	printf("ary[3][7] = %d", ary[3][7]);

	return 0;
}

void print_char(char *s, int index) {
	printf("%c", s[index]);
}
