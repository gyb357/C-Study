#include <stdio.h>

/*
int main() {
	FILE *fp;

	char buffer[100];

	fp = fopen("sample.txt", "wt");
	fputs("ABCDEFGHIJKLMNOPQRSTUVWXYZ", fp);
	fclose(fp);

	fp = fopen("sample.txt", "rt");

	fseek(fp, 3, SEEK_SET);
	printf("fseek(fp, 3, SEEK_SET) = %c\n", fgetc(fp));

	fseek(fp, -1, SEEK_END);
	printf("fseek(fp, -1, SEEK_SET) = %c\n", fgetc(fp));

	fclose(fp);

	return 0;
}
*/

/*
#define AND &&
#define OR ||
#define NOT !
#define IS ==
#define ISNOT !=

int search(int list[], int n, int key) {
	int i = 0;

	while (i < n AND list[i] != key) {
		i++;
		
		if (i IS n) {
			return -1;
		}
		else {
			return i;
		}
	}
}

int main() {
	int m[] = { 1, 2, 3, 4, 5, 6, 7 };
	printf("배열에서 5의 위치=%d\n", search(m, sizeof(m) / sizeof(m[0]), 5));

	return 0;
}
*/

/*
// 중간 점검
#define KEY 1234
#define INPUT scanf
*/

/*
#define SQUARE(x) ((x) * (x))

int main() {
	int x = 2;

	printf("%d\n", SQUARE(x));
	printf("%d\n", SQUARE(3));
	printf("%f\n", SQUARE(1.2)); // 실수에도 적용 가능
	printf("%d\n", SQUARE(x * 3));
	printf("%d\n", 100 / SQUARE(x));

	return 0;
}
*/

/*
#define DELUXE

int main() {
#ifdef DELUXE
	printf("디럭스 버전입니다.\n");
#endif

	return 0;
}
*/

/*
#define TEST

int main() {
#ifdef TEST
	printf("TEST\n");
#endif
}
*/

/*
#define AND &&
#define DEBUG 2
#define LEVEL 3

int main() {
#if (DEBUG == 2)
	printf("DEBUG\n");
#endif

#if (DEBUG == 2 AND LEVEL == 3)
	printf("DEBUG");
#endif
}
*/
