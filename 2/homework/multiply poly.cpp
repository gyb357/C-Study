#include <Stdio.h>

#define MAX_DEGREE 50				// 최대 다항식의 길이
#define MAX(a, b) ((a > b) ? a : b)	// a와 b 둘중 더 큰쪽의 값을 가짐


// 구조체 선언
typedef struct poly {
	int deg;				// 최대차수
	float coef[MAX_DEGREE]; // 계수배열
};


// 함수 선언
void draw(int method, poly A, poly B); // 그리기 함수
void printPoly(poly P);				   // 출력 함수
poly sumPoly(poly A, poly B);		   // 덧셈 함수
poly mulPoly(poly A, poly B);		   // 곱셈 함수


// 메인 함수
int main() {
	// 다항식 = { 최대차수, {계수, 계수, ..., 계수} }
	// 계수의 개수는 무조건 최대차수 + 1

	poly A = { 6, {1, 7, 0, 6, 1, 0, 2} }; // 다항식 A
	poly B = { 4, {15, 4, 6, 2, 1} };      // 다항식 B
	poly C;							       // 다항식 C (덧셈, 곱셈한 결과값을 다항식의 형태로 저장함)


	printf("다항식 A: "); printPoly(A);
	printf("다항식 B: "); printPoly(B);
	printf("\n");


	int n;

loop:
	printf("메소드를 선택하세요.(1. 덧셈, 2. 곱셈): ");
	scanf_s("%d", &n);
	printf("\n ");

	switch (n) {
	case 1:								 // 덧샘을 선택한 경우 (1)
		draw(n, A, B);
		C = sumPoly(A, B); printPoly(C); // C = A + B (덧셈 함수 호출)
		break;
	case 2:								 // 곱셈을 선택한 경우 (2)
		draw(n, A, B);
		C = mulPoly(A, B); printPoly(C); // C = A * B (곱셈 함수 호출)
		break;
	default:
		printf("잘못된 값입니다.\n\n");
		goto loop;						 // loop로 이동하여 메소드를 다시 선택
		break;
	}


	return 0;
}


// 그리기 함수
void draw(int method, poly A, poly B) {
	printPoly(A); printf("%c", (method == 1 ? '+' : '*'));
	printPoly(B);

	for (int i = 0; i < MAX(A.deg, B.deg) * 10; i++) {
		printf("-");
	}
	printf("\n");
	printf("=");
}


// 다항식 출력 함수
void printPoly(poly P) {
	int deg = P.deg;							   // 차수를 출력할 때 사용되는 변수

	for (int i = 0; i < P.deg + 1; i++) {
		if (i == P.deg) {						   // 차수가 없는 항을 출력 (다항식의 마지막 항)
			printf("%3.0f\n", P.coef[i]);
		}
		else {
			printf("%3.0fx^%d", P.coef[i], deg--); // 차수가 있는 항을 출력

			if (i < P.deg) {
				printf(" +");
			}
		}
	}
}


// 다항식 덧셈 함수
poly sumPoly(poly A, poly B) {
	poly P;

	int Aidx = 0, Bidx = 0, Pidx = 0;						  // while에서 차수 비교에 쓰일 변수 idx 선언
	int Adeg = A.deg;
	int Bdeg = B.deg;
	int Pdeg = MAX(A.deg, B.deg);							  // A와 B 둘중 더 높은 차수를 P의 최대차수로 정함
	P.deg = Pdeg;

	for (int i = 0; i < Pdeg + 1; i++) { P.coef[i] = 0; }	  // P 계수 초기화


	while (Aidx <= A.deg && Bidx <= B.deg) {				  // 각 다항식의 idx가 최대차수보다 작거나 같아질때까지 반복
		if (Adeg > Bdeg) {									  // A의 차수가 B보다 클때
			P.coef[Pidx++] = A.coef[Aidx++];				  // P = A		(차수가 달라 덧셈을 안함)
			Adeg--;
		}
		else if (Adeg == Bdeg) {							  // A의 차수가 B의 차수와 같을때
			P.coef[Pidx++] = A.coef[Aidx++] + B.coef[Bidx++]; // P = A + B	(차수가 같아 서로 덧셈함)
			Adeg--;
			Bdeg--;
		}
		else {												  // A의 차수가 B의 차수보다 작을때
			P.coef[Pidx++] = B.coef[Bidx++];				  // P = B		(차수가 달라 덧셈을 안함)
			Bdeg--;
		}
	}


	return P;
}


// 다항식 곱셈 함수
poly mulPoly(poly A, poly B) {
	poly P;

	int deg = A.deg + B.deg;							 // P의 최대차수 = A최대차수 + B최대차수
	P.deg = deg;

	for (int i = 0; i < deg + 1; i++) { P.coef[i] = 0; } // P 계수 초기화


	// 반복 횟수: A의 계수 개수 * B의 계수 개수
	for (int i = 0; i < A.deg + 1; i++) {
		for (int j = 0; j < B.deg + 1; j++) {
			P.coef[i + j] += A.coef[i] * B.coef[j];		 // (A계수 * B계수)한 값을 특정 인덱스(i + j)에 (+=)로 계속 증가시킴
		}
	}
	P.coef[P.deg + 1] = A.coef[A.deg] * B.coef[B.deg];	 // 차수가 없는 마지막 항 계산


	return P;
}
