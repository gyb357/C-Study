#include <stdio.h>

void abs();
void vowel();
void quardrant();
void size();
void bodymass();

int main() {
	puts("20192718 고영보 C언어 실습 2019.04.18");
	bodymass();
	return 0;
}

void abs() {
	int a;

	printf("Input Number: ");
	scanf("%d", &a);

	printf("Number = %d", a < 0 ? a * -1 : a);

}

void vowel() {
	char Char;

	printf("Input Char: ");
	scanf("%c", &Char);

	if (Char == 'a' || Char == 'e' || Char == 'i' || Char == 'o' || Char == 'u' || Char == 'A' || Char == 'E' || Char == 'I' || Char == 'O' || Char == 'U') {
		puts("모음");
	} else if (Char >= 'A' && Char <= 'Z' || Char >= 'a' && Char <= 'z') {
		puts("자음");
	} else {
		if (Char < 0 || Char > 0 || Char == 0) {
			puts("Error: Char Is Wrong");
		}
	}
}

void quardrant() {

	int x, y;

	x = 0, y = 0;

	printf("Input x Number (x) : ");
	scanf("%d", &x);
	printf("Input y Number (y) : ");
	scanf("%d",&y);

	printf("Coordinate: (%d, %d)\n", x, y);

	if (x == 0 && y == 0) {
		puts("place: Center");
	} else if (x == 0 && y != 0) {
		puts("place: Y Line");
	} else if (x != 0 && y == 0) {
		puts("place: X Line");
	}
	//------------------------//
	else if (x < 0 && y < 0) {
		puts("place: 1");
	}
	else if (x > 0 && y > 0) {
		puts("place: 3");
	}
	else if (x < 0 && y > 0) {
		puts("place: 4");
	}
	else if (x > 0 && y < 0) {
		puts("place: 2");
	}
}

void size() {
	int a, b, c;

	printf("Input First Number: ");
	scanf("%d", &a);
	printf("Input Second Number: ");
	scanf("%d", &b);
	printf("Input Thrd Number: ");
	scanf("%d", &c);

	if(a > b && a > c) {
		printf("Max Number = %d\n", a);
		printf("Min Number = %d\n", b > c ? c : b);
	}
	 
	if (b > a && b > c) {
		printf("Max Number = %d\n", b);
		printf("Min Number = %d\n", a > c ? c : a);
	}

	if (c > b && c > a) {
		printf("Max Number = %d\n", c);
		printf("Min Number = %d\n", b > a ? a : b);
	}
}

void bodymass() {
	float mass, high, bmi;

	printf("Input Your Body Mass: ");
	scanf("%f", &mass);
	printf("Input Your Tall(m Unit): ");
	scanf("%f", &high);

	bmi = mass / high * high;

	printf("Your BMI: 17.9%d\n");

		printf("to low\n");
}
