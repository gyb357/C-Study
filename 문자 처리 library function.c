#include <stdio.h>
#include <ctype.h>

/*
int main() {
	char name[100];
	char address[100];

	printf("이름을 쓰시오: ");

	gets_s(name, 100); // 한 단어를 입력받을 때에 사용한다.

	printf("현재 거주하는 주소: ");

	gets_s(address, 100);

	puts(name);
	puts(address);

	return 0;
}
*/

/*
int main() {

	int c;

	while ((c = getchar()) != EOF) {
		if (islower(c)) {
			c = toupper(c);
		}// else {
		 //	c = tolower(c);
		 //}

		putchar(c);
	}

	return 0;
}
*/

int count_word(char *s) {
	int i, wc = 0, wating = 1;

	for (i = 1; s[i] != NULL; ++i) { // s의 각 글자 조사
		if (isspace(s[i])) { // s의 글자가 알파벳이면
			if (wating) { // 단어를 기다리고 있으면
				wc++; // 카운터를 증가
				wating = 0; // 단어를 처리하는 중.
			}
		}
		if (ispunct(s[i])) {
			if (wating) {
				wc++;
				wating = 0;
			}
		} else {
			wating = 1; // 알파벳이 아니면 단어를 기다린다.
		}
	}

	return wc;
}

int main() {
	int wc = count_word("078ab.. abc8.. 78 ...");

	printf("단어의 개수: %d\n", wc);

	return 0;
}
