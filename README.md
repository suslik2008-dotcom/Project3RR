#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
void e1()
{
	setlocale(LC_CTYPE, "RUS");
	int a, b;
	printf("Введите уровни голода для Пети и Вани: ");
	scanf("%d %d", &a, &b);
	int c = a + b;
	printf("разрезать пиццу на 4 части(иначе на 6): %d", c%2);
}
void e2()
{
	int s, k = 3;
	printf("Введите длину стороны куба: ");
	scanf("%d", &s);
	printf("Найденный объём куба: %d\n", s * s * s);
	printf("Найденная площадь поверхности куба: %d", s * s * 6);
}
void main()
{
	e1();
}
