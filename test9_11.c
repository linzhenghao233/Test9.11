#include <stdio.h>

double min(double, double);
void chline(char, int, int);

int main(void) {
	/*double x, y;

	printf("��������С����");
	scanf_s("%lf %lf", &x, &y);
	printf("��ֵ�н�С���ǣ�%g", min(x, y));*/

	char ch;
	int i, j;

	printf("����Ҫ��ӡ���ַ���");
	scanf_s("%c", &ch, sizeof(ch));
	printf("����Ҫ��ӡ��������������");
	scanf_s("%d %d", &j, &i);
	chline(ch, j, i);

	return 0;
}

//1.
double min(double x, double y) {
	double min;

	min = x > y ? y : x;

	return min;
}

//2.
void chline(char ch, int j, int i) {
	int row, col;

	for (row = 1; row <= j; row++) {
		for (col = 1; col <= i; col++) {
			printf("%c", ch);
		}
		printf("\n");
	}
}