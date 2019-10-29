#include <stdio.h>
#include <string.h>

/*
// 문자 추가
int main() {
	
	char str[80];

	strcpy(str, "hello world from ");
	strcat(str, "strcpy ");
	strcat(str, "and ");
	strcat(str, "strcat! ");
	
	printf("str = %s\n", str);

	return 0;
}
*/

/*
// 문자 순서
int main() {

	char s1[80];
	char s2[80];
	int result;

	printf("첫번째 단어 입력: ");
	scanf("%s", s1);

	printf("두번째 단어 입력: ");
	scanf("%s", s2);

	result = strcmp(s1, s2);

	if (result < 0) {
		printf("%s가 %s보다 앞에 있습니다.", s1, s2);
	} else if (result == 0) {
		printf("%s가 %s와 같습니다", s1, s2);
	} else {
		printf("%s가 %s보다 뒤에 있습니다.", s1, s2);
	}

	return 0;
}
*/

/*
// 문자열 인덱스 주소
int main() {
	char s[] = "language";
	char c = 'g';
	char *p;
	int loc;

	p = strchr(s, c);
	loc = (int)(p - s);
	if (p != NULL) {
		printf("첫번째 %c가 %d에서 발견되었음\n", c, loc);
	} else {
		printf("%c가 발견되지 않았음.\n", c);
	}

	return 0;
}
*/

/*
// sscanf, sprintf
int main() {
	char s[] = "100";
	int value;

	sscanf(s, "%d", &value);
	printf("%d\n", value);
	value++;
	sprintf(s, "%d", value);
	printf("%s\n", s);
	return 0;
}
*/

/*
// 영상 파일 이름 자동 생성
int main() {
	char filename[100];
	char s[100];

	for (int i = 0; i < 6; i++) {
		strcpy(filename, "image");
		sprintf(s, "%d", i);
		strcat(filename, s);
		strcat(filename, ".jpg");
		printf("%s\n", filename);
	}

	return 0;
}
*/

