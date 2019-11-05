#include <stdio.h>

/*
// 구조체의 배열을 활용한 학생의 정보 입력
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
	int phone;
};

int main() {

	struct student list[SIZE];

	for (int i = 0; i < SIZE; i++) {
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &list[i].grade);
		printf("전화번호를 입력하시오: ");
		scanf("%d", list[i].phone);
	}

	for (int i = 0; i < SIZE; i++) {
		printf("학번: %d, 이름: %s, 학점: %f, 전화번호: %d\n", list[i].number, list[i].name, list[i].grade, list[i].phone);
	}

	return 0;
}
*/

/*
// 중간점검
#define SIZE 5

struct product {
	int number;
	char name;
	int price;
};

int main() {

	struct product list[SIZE];

	return 0;
}
*/

/*
// 포인터 참조연산자를 활용한 구조체
struct student {
	int number;
	char name[20];
	double grade;
};

int main() {
	
	struct student s = { 20070001, "홍길동", 4.3 };
	struct student *p;

	p = &s;

	printf("학번 = %d, 이름 = %s, 학점 = %f\n", s.number, s.name, s.grade);
	printf("학번 = %d, 이름 = %s, 학점 = %f\n", (*p).number, (*p).name, (*p).grade);
	printf("학번 = %d, 이름 = %s, 학점 = %f\n", p->number, p->name, p->grade);

	return 0;
}
*/

/*
// 포인터를 멤버로 가지는 구조체
struct date {
	int month;
	int day;
	int year;
};

struct student {
	int number;;
	char name[20];
	double grade;
	struct date *dob;
};

int main() {



	struct date d = { 3, 20, 1980 };
	struct student s = { 20190001, "kim", 4.3 };

	s.dob = &d;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);
	printf("생년월일: %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}
*/

#include <stdio.h>

struct vector {
	float x;
	float y;
};
struct vector get_vector_sum(struct vector *a, struct vector *b);

int main(void)
{
	struct vector a = { 2.0, 3.0 };
	struct vector b = { 5.0, 6.0 };
	struct vector sum;

	sum = get_vector_sum(&a, &b);
	printf("벡터의 합은 (%f, %f)입니다.\n", sum.x, sum.y);

	return 0;
}

struct vector get_vector_sum(struct vector *a, struct vector *b)
{
	struct vector result;
	
	result.x = a->x + b->x;
	result.y = a->y + b->y;

	return result;
}

