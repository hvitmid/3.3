#include <stdio.h>
#include <locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int a, b, result1, result2, result3;
	puts("введите значение a");
	scanf("%d", &a);
	puts("введите значение b");
	scanf("%d", &b);
	result1 = a * b;
	result2 = a + b;
	result3 = a - b;
	printf("-------------------\n");
	printf("| a*b | a+b | a-b |\n");
	printf("-------------------\n");
	printf("|%2d*%2d|%2d+%2d|%2d-%2d|\n", a,b,a,b,a,b);
	printf("-------------------\n");
	printf("|%5d|%5d|%5d|\n", result1, result2, result3);
	printf("-------------------\n");
}
