#include <stdio.h>

int main() {
	int a, b;
	a = 0x55;	// 0x55를 10진수로 변환 = 5 x 16 + 5 = 85
	b = 15;

	printf("20192718 고영보\n");

	printf("10 a = %d\n", a);	// d = 10진수, 0101.0101
	printf("16 a = %x\n", a);	// x = 16진수, 0101.0101
	printf("8 a = %o\n", a);	// o = 8 진수, 001.010.101

	printf("\n");

	printf("10 b = %d\n", b);
	printf("16 b = %x\n", b);
	printf("8 b = %o\n", b);

	printf("\n");

	printf("a >> %d %x \n", a >> 2, a >> 2);	// (85) 1010.0101 -> (21) 0001.0101			, 
	printf("a << %d %x \n", a << 3, a << 3);	// (85) 1010.0101 -> (680) 0110.1000.0000	, 

	printf("\n");

	printf("10 a = %d, %u, 16 b = 0x%x\n", ~a, ~a, ~a);
	
	printf("\n");

	printf("a & b = 0x%xn", a & b);		// 같으면 1 다르면 0, 00000101
	printf("a | b = 0x%x\n", a | b);	// 같으면 1 다르면 1, 01011111
	printf("a ^ b = 0x%x\n", a ^ b);	// 같으면 0 다르면 1, 01011010

	return 0;
}
