#include <stdio.h>
#include <string.h>

/*
// 공용체에 타입 필드 사용
#define STU_NUMBER 1
#define REG_NUMBER 2

void print(struct student s);

struct student {
	int type;

	union {
		int stu_number;
		char reg_number[15];
	} id;

	char name[20];
};

void print(struct student s)
{
	switch(s.type)
	{
		case STU_NUMBER:
			printf("학번 %d\n", s.id.stu_number);
			printf("이름: %s\n", s.name);
			break;
		case REG_NUMBER:
			printf("주민등록번호: %s\n", s.id.reg_number);
			printf("이름: %s\n", s.name);
			break;
		default:
			printf("타입오류\n");
			break;
	}
}


int main() {
	struct student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.stu_number = 20190001;
	strcpy(s1.name, "홍길동");

	s2.type = REG_NUMBER;
	strcpy(s2.id.reg_number, "260101-1056076");
	strcpy(s2.name, "김철수");

	print(s1);
	print(s2);

	return 0;
}
*/

/*
// 열거형
enum days{SUN, MON, TUE, WED, THU, FRI, SAT};

char *days_name[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday",
"saturday"};


int main() {
	enum days d;

	d = WED;

	printf("%d 번째 요일은 %s 입니다.\n", d, days_name[d]);

	return 0;
}
*/

/*
// 평점이 높은 학생 찾기
struct student {
	int number;
	char name[20];
	double grade;
};

struct student list[] = {
	{20120001, "홍길동", 4.2},
	{20120002, "김철수", 3.2},
	{20120003, "김영희", 3.9}
};

int main() {
	struct student super_stu;
	int i, size;

	size = sizeof(list) / sizeof(list[0]);
	super_stu = list[0];

	for (int i = 1; i < size; i++) {
		if (list[i].grade > super_stu.grade) {
			super_stu = list[i];
		}
	}

	printf("평점이 가장 높은 학생은 (이름%s, gkrqjs%ㅇ, 평점%f)입니다.\n", super_stu.name, super_stu.number, super_stu.grade);
}
*/
