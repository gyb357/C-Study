#include <stdio.h>

/*
int main() {
	int a[] = { 10, 20, 30, 40, 50 };
	int *p;

	p = a;

	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", p[0], p[1], p[2]);

	p[0] = 60;
	p[1] = 70;
	p[2] = 80;

	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", p[0], p[1], p[2]);

	return 0;
}
*/

/*
#define SIZE 5

void print_image(int image[][SIZE]) {
	int r, c;

	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++) {
			printf("%03d", image[r][c]);
		}

		printf("\n");
	}

	printf("\n");
}

void brighten_image(int image[][SIZE]) {
	int r, c;
	int *p;

	p = &image[0][0];

	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++) {
			*p += 10; // = image[r][c] += 10;

			p++;
		}
	}
}

int main(void) {
	int image[5][5] = {
		{10, 20, 30, 40, 50},
		{10, 20, 30, 40, 50},
		{10, 20, 30, 40, 50},
		{10, 20, 30, 40, 50},
		{10, 20, 30, 40, 50}
	};

	print_image(image);
	brighten_image(image);
	print_image(image);
	return 0;
}
*/
