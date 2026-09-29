#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
void e1()
{
	char c;
	int i;
	float f;
	double d;
	printf("input c >> ");
	scanf("%c", &c);
	printf("input int >> ");
	scanf("%d", &i);
	printf("input f >> ");
	scanf("%f", &f);
	printf("input d >> ");
	scanf("%le", &d);

	printf("%c %d %f %le", c, i, f, d);
}
void e2()
{
	int a = 11, b = 3;
	int x=a/b; // = 3, так как результат - целое число. Выводится целая часть.
	float y = a / b; // = 0, так как тип результата не совпадает с типом данных. Хотя физически для float результат определён
	double z = a / b; // = 0, так как тип результата не совпадает с типом данных. Хотя физически для double результат определён
	printf("%d %d %d\n", x, y, z);
	printf("%f", (float)a / b);
}
e3()
{
	int a, b;
	printf("input a >> ");
	scanf("%d", &a);
	printf("input b >> ");
	scanf("%d", &b);
}
main()
{
	setlocale(LC_CTYPE, "RUS");
	int a, b;
	printf("Введите уровни голода для Пети и Вани: ");
	scanf("%d %d", &a, &b);
	int c = a + b;
	if (c%2)
	{
		printf("Решение: разрезать на 4 части");
	}
	else 
	{
		printf("Решение: разрезать на 6 частей");
	}
}
	   