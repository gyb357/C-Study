#include <stdio.h>

// \0 = 문자열이 어디서 끝나는지 표시해줌. (\0 = NULL)
// 배열에 값이 없을경우 전부다 NULL로 저장됨.

/*
int main() {
	char str[4];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	
	int i = 0;

	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}
}
*/

int main() {
	char str1[6] = "Seoul";
	char str2[3] = { 'i', 's', '\0' };
	char str3[] = "The capital city of korea";

	printf("%s %s %s\n", str1, str2, str3);

	return 0;
}
