#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Size 5
#define Students 10

// array[3]이라는 배열이 있다면 array[0], array[1], array[2]처럼 0부터 인덱스가 시작하게 된다.
// array[10]이라는 배열에서 for문으로 0 ~ 5번까지 초기값을 선언했다면 나머지 6 ~ 9번까지는 자동적으로 0으로 초기화가 된다.
// 배열의 모든 인덱스의 값을 초기화 할때 배열이름 뒤에 []에 배열크기를 적지 않아도 된다.

/*
int main() {
	int i;
	int scores[5];

	for (i = 0; i < Size; i++) {
		scores[i] = i * 10 + 10;
		printf("scores[%d] = %d\n", i, scores[i]);
	}
	return 0;
}
*/

/*
int main() {
	
	int i;
	int scores[Size];

	for (i = 0; i < Size; i++) {
		scores[i] = rand() % 100;
		printf("scores[%d] = %d\n", i, scores[i]);
	}

	return 0;
}
*/

/*
int main() {
	int i, score[10];
	int sum = 0;

	printf("10명의 성적을 입력하시오\n");

	for (i = 0; i < Students; i++) {
		printf("%d번째 학생 성적: ", i + 1);
		scanf("%d", &score[i]);
	}

	for (i = 0; i < Students; i++) {
		sum += score[i];
	}

	int asdf = sum / Students;

	printf("성적 평균: %d", asdf);

	return 0;
}
*/

/*
int main() {
	int i;
	int array[5] = { 31, 63, 62, 87, 14 };

	for (i = 0; i < 5; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	return 0;
}
*/

/*
int main() {
	int i, size, realsize;
	int scores[] = { 1,2,3,4,5,6 };

	size = sizeof(scores); // int는 4바이트 이므로 4 * 6 = 24

	realsize = size / sizeof(int); // 4 = sizeof(int)

	printf("int size = %d\n", size);
	printf("realsize = %d\n", realsize);
	
	return 0;
}
*/

/*
int main() {
	int num[6] = { 1, 2, 3, 4, 5, 6 };

	for (int i = 0; i < 10000; i++) {
		++num[rand() % 6];
	}
	
	printf("면:  빈도:  \n");

	for (int i = 0; i < 6; i++) {
		printf(" %3d      %3d\n", i, num[i]);
	}
	
	return 0;
}
*/

/*
int main() {
	int size[10] = { 0 };
	int i, minimum;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		size[i] = (rand() % 100);
		printf("rand size = %d\n", size[i]);
	}

	minimum = size[0];

	for (i = 0; i < 10; i++) {
		if (size[i] < minimum) {
			minimum = size[i];
		}
	}

	printf("minimum = %d", minimum);

	return 0;
}
*/


int main() {
	int size[10] = { 0 };
	int i, maximum;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		size[i] = (rand() % 100);
		printf("rand size = %d\n", size[i]);
	}

	maximum = size[0];

	for (i = 0; i < 10; i++) {
		if (size[i] > maximum) {
			maximum = size[i];
		}
	}

	printf("minimum = %d", maximum);

	return 0;
}
