#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main() {
	int *list;

	list = (int *)malloc(3 * sizeof(int)); // 동적 메모리 할당

	if (list == NULL) { // 반환값이 NULL인지 검사
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	
	for (int i = 0; i < 3; i++) {
		list[i] = (1 + i) * 10;

		printf("%d\n", list[i]);
	}

	free(list); // 동적메모리 해제
	
	return 0;
}
*/

/*
// 예제


int main() {
	int *list;
	int i, students;

	printf("학생 수: ");
	scanf("%d", &students);

	list = (int *)malloc(students * sizeof(int));

	if (list == NULL) {
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	for (i = 0; i < students; i++) {
		printf("학생 \%d 성적: ", i + 1);
		scanf("%d", &list[i]);
	}
	
	printf("==============\n");

	for (i = 0; i < students; i++) {
		printf("학생 \%d 성적: %d\n", 1 + 1, list[i]);
	}

	printf("==============\n\n");

	free(list);

	return 0;
}
*/

/*
struct Book {
	int number;
	char title[50];
};

int main() {
	struct Book *p;

	p = (struct Book *)malloc(2 * sizeof(struct Book));

	if (p == NULL) {
		printf("메모리 할당 오류\n");
		exit(1);
	}

	p[0].number = 1;
	strcpy(p[0].title, "C programming");

	p[1].number = 2;
	strcpy(p[1].title, "Data Structure");

	free(p);

	return 0;
}
*/

/*
// realloc 예제
int main() {
	printf("정수 2개를 저장할 공간이 필요\n");

	int *list = (int *)malloc(sizeof(int) * 2);
	int i;
	int *list_new;

	list[0] = 10;
	list[1] = 20;

	printf("정수 3개를 저장할 공간으로 확장\n");

	list_new = (int *)realloc(list, sizeof(int) * 3);
	list_new[2] = 30;

	for (i = 0; i < 3; i++) {
		printf("%d\n", list_new[i]);
	}

	printf("\n");

	return 0;
}
*/
