// 20192718 고영보 데이터구조 괴제2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N     1000 // 난수 범위
#define Count 100   // 탐색 횟수


// 순차 탐색 함수
int search (int target) {
	int i = 0;
	do {
		i += 1;            // 1씩 증가
	} while (i != target); // i가 target(난수)와 같을때까지 반복
	return i;
}


int main() {
	int n, s, a = 0;   // 난수, 탐색값, 평균
	int s2 = 0;        // 탐색값 합계
	int arr[N]{};      // 1 ~ N 정수 배열
	int narr[Count]{}; // 난수 배열

	for (int i = 0; i < Count; i++) {
		arr[i] = i; // 1 ~ N 정수 배열 초기화
	}



	srand((unsigned)time(NULL)); // 매번 다르게 난수 생성

	printf("난수: ");
	for (int i = 0; i < Count; i++) {
		n       = rand() % N + 1; // 1 ~ N 난수 생성
		narr[i] = n;			  // 난수 배열 정렬

		printf("%d | ", narr[i]);
	}
	printf("\n\n");



	for (int i = 0; i < Count; i++) {
		s   = search(narr[i]); // 찾은 난수
		s2 += s;			   // (찾은)난수 합계

		printf("찾은 난수: %d\n", s);
	}
	printf("\n\n");



	a = s2/Count; // 탐색값 평균
	printf("탐색 평균: %d\n", a);

	return 0;
}
