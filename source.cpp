// 20190404 ����
#include <stdio.h>
#include <string.h>			// memset

void �ǽ�1(), �ǽ�2(), �ǽ�3(), �ǽ�4(), �ǽ�5();

int main() {

	�ǽ�4();

	return 0;
}

void �ǽ�1() {
	char s[100];			// �������� = �Լ� �ȿ����� ��� ����, �������� = ��ü���� ��� ����.

	memset(s, 0, 100);		// �������� ����

	printf("�Է�: ");
	scanf("%[^\n]", &s);	// [^\n] �� ����ڰ� ���� ġ�� �������� ��� �����͸� �޾Ƶ���. (���� �Է� ����)
	printf("s = [%s]", s);	// ���������� �ʱ�ȭ������, ���������� �ʱ�ȭ���� ����. -> �̻��� �����Ⱚ ��µ�.
}

void �ǽ�2() {
	int i, j;

	puts("20192718 ����");
	printf("Enter first number  :  ");
	scanf("%d", &i);
	printf("Enter second number :  ");
	scanf("%d", &j);

	printf("i < j : %d \n", i < j);		// j �� i ���� ū ���
	printf("i <= j : %d \n", i <= j);	// j �� i ���� ũ�ų� ���� ���
	printf("i > j : %d \n", i > j);		// i �� j ���� �� ū ���
	printf("i >= j : %d \n", i >= j);	// i �� j ���� ũ�ų� ���� ���
	printf("i == j : %d \n", i == j);	// i �� j �� ���� ���� ���
	printf("i != j : %d \n", i != j);	// i �� j �� ���� �ٸ� ���
}

void �ǽ�3() {
	int i, j;

	printf("ù��° ���� �Է�: ");
	scanf("%d", &i);
	printf("�ι�° ���� �Է�: ");
	scanf("%d", &j);

	printf("(0�� ����, 1�� ��)\n");
	printf("\n ��ȣ�Ǻ� \n");
	printf("ù��° ���ڴ� �����̴�: %d\n", i < 0);
	printf("ù��° ���ڴ� ����̴�: %d\n", i > 0);
	printf("ù��° ���ڴ� 0�̴�: %d\n", i == 0);
	printf("�ι�° ���ڴ� �����̴�: %d\n", j < 0);
	printf("�ι�° ���ڴ´� ����̴�: %d\n", j > 0);
	printf("�ι�° ���ڴ´� 0�̴�: %d\n", j == 0);
}

void �ǽ�4() {
	int i, j;

	printf("Enter first number   :  ");
	scanf("%d", &i);
	printf("Enter Second number  :  ");
	scanf("%d", &j);

	printf("i >= 100 && j >= 100: %d\n", i >= 100 && j >= 100);
	printf("i >= 100 || j >= 100: %d\n", i >= 100 || j >= 100);

	//i = 0;
	printf("i && j: %d\n", i && j);
	printf("i || j: %d\n", i || j);
	printf("!i :%d !j: %d\n", !i, !j);
}\

void �ǽ�5() {
	char flag;

	flag = 0x50;

	// flag = [0101] [0000]
	// 0x01 = [0000] [0001]
	// 0x10 = [0001] [0000]
	// 0x40 = [0100] [0000]

	printf("1�� ������ %s�� �ֽ��ϴ�.\n", (flag & 0x01 != 0) ? "��" : "��");
	printf("5�� ������ %s�� �ֽ��ϴ�.\n", (flag & 0x10 != 0) ? "��" : "��");
	printf("7�� ������ %s�� �ֽ��ϴ�.\n", (flag & 0x40 != 0) ? "��" : "��");
}
