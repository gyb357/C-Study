#include <stdio.h>

#define SOLUTION 2

int fact1(int n);
int fact2(int n);

int main () {
	int num, f;
	
	first:
	
	printf("Input Number: ");
	scanf("%d", &num);
	
	f = SOLUTION == 1 ? fact1(num) : fact2(num);
	
	printf("%d\n", f);
	
	goto first;
	
	return 0;
}	
	
int fact1(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * fact1(n - 1);
	}
}

int fact2 (int n) {
	int fact = n;
	
	for (int i = n; i > 1; i--) {
		fact = fact * (n - i + 1);
	}
	
	return fact;
}
