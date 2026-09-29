#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
void e1()
{
	int a, b;
	printf("Введите a: ");
	scanf("%d", &a);
	printf("Введите b: ");
	scanf("%d", &b);
	puts("_________________________________________________");
	puts("|     a * b     |     a + b     |     a - b     |");
	puts("-------------------------------------------------");
	printf("| %5d * %-5d | %5d + %-5d | %5d - %-5d |\n", a, b, a, b, a, b);
	puts("-------------------------------------------------");
	printf("|     %5d     |     %5d     |     %5d     |", a * b, a + b, a - b);
}

void e2()
{
	int s, k = 3;
	printf("Введите длину стороны куба: ");
	scanf("%d", &s);
	printf("Найденный объём куба: %d\n", s*s*s);
	printf("Найденная площадь поверхности куба: %d", s * s * 6);
}
void main()
{
	setlocale(LC_CTYPE, "RUS");
	e1();
}