#include <stdio.h>

double min(double, double);
void chline(char, int, int);
void function3(char, int , int);
double function4(double, double);
void larger_of(double*, double*);

int main(void) {
	/*double x, y;

	printf("输入两个小数：");
	scanf_s("%lf %lf", &x, &y);
	printf("两值中较小的是：%g", min(x, y));*/

	/*char ch;
	int i, j;

	printf("输入要打印的字符：");
	scanf_s("%c", &ch, sizeof(ch));
	printf("输入要打印的行数和列数：");
	scanf_s("%d %d", &j, &i);
	chline(ch, j, i);*/

	/*char ch;
	int col, row;

	printf("输入要打印的字符：");
	scanf_s("%c", &ch, sizeof ch);
	printf("输入要打印的列数和行数：");
	scanf_s("%d %d", &col, &row);
	function3(ch, col, row);*/

	/*double num1, num2;

	printf("输入两个数，求其的调和平均数：");
	scanf_s("%lf %lf", &num1, &num2);
	printf("两数的调和平均数：%g", function4(num1, num2));*/

	double num1, num2;

	printf("输入两个浮点数：");
	scanf_s("%lf %lf", &num1, &num2);
	larger_of(&num1, &num2);
	printf("%g %g", num1, num2);

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

//3.
void function3(char ch, int col, int row) {
	int i, j;

	for (i = 1; i <= row; i++) {
		for (j = 1; j <= col; j++) {
			printf("%c", ch);
		}
		printf("\n");
	}
}

//4.
double function4(double num1, double num2) {
	return 1 / ((1 / num1 + 1 / num2) / 2);
}

//5.
void larger_of(double * num1, double * num2) {
	*num1 = *num2 = *num1 > *num2 ? *num1 : *num2;
}