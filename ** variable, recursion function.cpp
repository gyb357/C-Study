// sourcefile1
#include <stdio.h>

// 변수
// auto:     한 블록을 빠져나오면 값이 사라지는 지역 변수, 생략가능
// static:   지역 변수가 정적 변수로 된다.
// resister: 변수의 메모리 주소가 없다, 속도가 빠르고 지역변수에만 사용 가능
// extern:   어느 소스코드 파일의 전역변수를 다른 외부파일에 불러옴 

/*
void sub();

void sub() {
	static int scount = 0;
	int acount = 0;
	printf("scount = %d\t", scount);

	printf("acoujnt = $d\n", acount);
	scount++;
	acount++;
}

int main() {
	sub();
	sub();
	sub();
	return 0;
}
*/

/*
void save(int amount);

void save(int amount) {
	static long balance = 0;

	if (amount >= 0) {
		printf("%d\t\t", amount);
	}
	else {
		printf("\t%d\t", -amount);
	}

	balance += amount;

	printf("%d\n", balance);
}

int main() {
	printf("===================\n");
	printf("입금\t출금\t잔고\n");
	printf("===================\n");

	save(10000);
	save(50000);
	save(-10000);
	save(30000);

	printf("===================\n");

	return 0;
}
*/

/*
int all_files;
static int this_file; // 다른파일에서 불러오는것을 막음, 즉 같은 파일안에서만 호출 가능

extern void sub();

int main() {
	sub();
	printf("%d\n", all_files);
	return 0;
}*/

/*
extern void f2();

int main() {
	f2();

	return 0;
}
*/


long factorial(long num) {
	printf("factorial(%d)\n", num);

	if (num <= 1) {
		return 1;
	} else {
		return num * factorial(num - 1);
	}
}

int main() {
	long num;

	asdf:
	printf("정수를 입력하시오:");
	scanf("%d", &num);

	printf("%d!은 %d입니다. \n", num, factorial(num));

	goto asdf;
	return 0;
}

// sourcefile2
#include <stdio.h>

/*
extern int all_files;

void sub() {
	all_files = 10;
}
*/

/*
static void f1() {
	printf("f1()이 호출되었습니다.\n");
}

void f2() {
	f1();
	printf("f2()가 호출되었습니다.\n");
}
*/
