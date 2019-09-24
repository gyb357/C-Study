#include <stdio.h>
#include <stdlib.h>

// 함수에서 호출할땐 배열의 원본이 간다.
// 콜바이 벨류, 콜바이 레퍼런스
// 배열 자료형 앞에다 const를 붙히면 전달받은 배열을 수정하지 못하게 된다.

/*
#define STUDENTS 5
int get_average(int score[], int n);

int main() {
	int scores[STUDENTS] = { 1, 2, 3, 4, 5 };
	int avg;

	avg = get_average(scores, STUDENTS);

	printf("평균은 %d 입니다.\n", avg);

	return 0;
}

int get_average(int score[], int n) {
	int i;
	int sum = 0;

	for (i = 0; i < n; i++) {
		sum += score[i];
	}

	return sum / n;
}
*/

/*
#define SIZE 7

void square(int a[], int size);
void print_array(int a[], int size);

int main() {
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7 };

	print_array(list, SIZE);
	square(list, SIZE); // 배열은 원본이 저장된다. (인수: 배열)
	print_array(list, SIZE);

	return 0;
}

void square(int a[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		a[i] = a[i] * a[i];
	}
}

void print_array(int a[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");
}
*/

/*
#define SIZE 10

int main() {
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	int i, j, temp, least;

	for (i = 0; i < SIZE - 1; i++) {
		least = i;

		for (j = i + 1; j < SIZE; j++) {
			if (list[j] < list[least]) {
				least = j;
			}
		}
		// 내부 for 루프로서 (i+1)번째 원소부터 배열의 마지막 원소 중에서 최소값을 찾는다.
		// 현재의 최소값과 비교하여 더 작은 정수가 발견되면 그 정수가 들어 있는 인덱스를 least에 저장한다. 

		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
		// list[i] 와 list[least]를 서로 교환
		// 여유 변수가 사이에 있어야한다. 그렇지 않으면 값이 날라감.
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d", list[i]);
	}
	printf("\n");

	return 0;
}
*/

/*
#define ROWS 3
#define COLS 5

int main() {
	int s[ROWS][COLS]; //2차원 배열 선언
	int i, j; //2개의 인덱스 변수

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			s[i][j] = rand() % 100;

			printf("%02d\n", s[i][j]);
		}

		printf("\n");
	}

	return 0;
}
*/

/*
#define ROWS 3
#define COLS 5

int main() {
	int score[ROWS][COLS] = {
		{ 87, 98, 80, 76, 3 },
		{ 99, 89, 90, 90, 0 },
		{ 65, 68, 50, 49, 0 }
	};
	int i, j;


	for (i = 0; i < ROWS; i++) {
		double final_score = 
			score[i][0] * 0.3 + score[i][1] * 0.3 + score[i][2] * 0.2 + score[i][3] * 0.1 - score[i][4];

		printf("학생 #%i 의 최종 성적 = %10.2f\n", i + 1, final_score);
	}

	return 0;
}
*/

#define YEARS 3
#define PRODUCTS 5

int sum(int grade[][PRODUCTS]);

int main() {
	int sales[YEARS][PRODUCTS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int total_sale;

	total_sale = sum(sales);

	printf("총 매출은 %d 입니다.\n", total_sale);

	return 0;
}

int sum(int grade[][PRODUCTS]) {
	int y, p;
	int total = 0;

	for (y = 0; y < YEARS; y++) {
		for (p = 0; p < PRODUCTS; p++) {
			total += grade[y][p];
		}
	}

	return total;
}
