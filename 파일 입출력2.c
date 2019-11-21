#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main(void)
{
	FILE *fp = NULL;

	fp = fopen("sample.txt", "w");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fclose(fp);
	return 0;
}
*/

/*
int main(void)
{
	FILE *fp = NULL;
	int c;
	fp = fopen("sample.txt", "r");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	while ((c = fgetc(fp)) != EOF)
		putchar(c);
	fclose(fp);
	return 0;
}
*/

/*
int main() {
	FILE *fp1, *fp2;

	char sample[100], file2[100];
	char buffer[100];

	printf("원본 파일 이름: ");
	scanf("%s", sample);

	printf("복사 파일 이름: ");
	scanf("%s", file2);

	// 첫번째 파일을 읽기 모드로 연다.

	if ((fp1 = fopen(sample, "r")) == NULL) {
		fprintf(stderr, "원본파일 %s을 열 수 없습니다.\n", sample);
		exit(1);
	}

	// 두번째 파일을 쓰기 모드로 연다.

	if ((fp2 = fopen(file2, "w")) == NULL) {
		fprintf(stderr, "복사 파일 %s을 열 수 없습니다.\n", file2);
		exit(1);
	}

	//첫번째 파일을 두번째 파일로 복사한다

	while (fgets(buffer, 100, fp1) != NULL) {
		fputs(buffer, fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
*/

int main() {
	FILE *fp;

	char name[128];
	char buffer[256];
	char word[256];

	int line_num = 0;

	printf("입력파일 이름을 입력하시오: ");
	scanf("%s", name);

	printf("탐색할 단어를 입력하시오: ");
	scanf("%s", word);

	//파일을 읽기 모드로 연다.

	if ((fp = fopen(name, "r")) == NULL) {
		fprintf(stderr, "파일 %s을 열 수 없습니다.\n", name);
		exit(1);
	}

	while (fgets(buffer, 256, fp)) {
		line_num++;

		if (strstr(buffer, word)) {
			printf("%s: %d 단어 %s이 발견되었습니다.\n", name, line_num, word);
		}
	}

	fclose(fp);

	return 0;
}
