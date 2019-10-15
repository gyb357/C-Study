#include <stdio.h>

/*
int main() {
	char scr[] = "The worst things it eat before you sleep";
	char dst[100];
	int i;

	printf("원본 문자열 = %s\n", scr);

	for (i = 0; scr[i] != '\0'; i++) {
		dst[i] = scr[i];
	}

	dst[i] = '\0';

	printf("복사된 문자열 = %s\n", dst);

	return 0;
}
*/

/*
int main() {
	char str[30] = "C Language is easy";
	int i = 0;

	while (str[i] != 0) {
		i++;
	}

	printf("문자열\"%s\"의 길이는 %d 입니다.", str, i);

	return 0;
}
*/

/*
int main() {
	char scr[] = "The worst things it eat before you sleep";
	char dst[100];
	int i, a = 0;

	printf("정수 입력: ");
	scanf("%d", &a);

	for (i = 0; scr[i] != '\0'; i++) {
		dst[i] = scr[i];

		dst[a] = '\0';
	}

	printf("복사된 문자열 = %s\n", dst);

	return 0;
}
*/

/*
int main() {
	char *p = "HelloWorld";

	printf("%s\n", p);

	p = "Welcome to C World!"; // 가능
	printf("%s\n", p);

	p = "Goodbye"; // 가능
	printf("%s\n", p);

	// p[0] = 'a'; // 오류 발생
	// p에 goodbye라는 것이 할당되어 텍스트 세그먼트에 있어 수정 불가.
	// '' = 문자 (1), "" = 문자열 (2) 왜냐하면 뒤에 NULL이 있기때문

	return 0;
}
*/

int main() {
	int ch;

	while ((ch = _getch()) != EOF) {
		_putch(ch);
	}

	// End OF File을 나타내는 문자.
	// EOF는 정수형이다.

	// getchar, putchar는 버퍼가 있음
	// getch, putch는 버퍼가 없음.

	return 0;
}
