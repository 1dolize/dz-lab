#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 

#define M_PI 3.14159265358979323846

double GetRad(double number)
{
	return (number * M_PI) / 180;
}

int task1()
{
	setlocale(LC_CTYPE, "RUS");


	double gr;

	scanf("%lf", &gr);

	double rad = GetRad(gr);
	double sinDouble = sin(rad);

	printf("%lf", sinDouble);
}

int task2()
{
	double x;
	double p = 2.6;

	scanf("%lf", &x);
	double b = exp(sqrt(p + x));
	double a = pow(p, 3) + pow(x, 3);
	double y = pow(b, 3) / pow(a, 2);
	printf("Ответ: %lf", y);
	// КОНТРОЛЬНЫЙ ПРИМЕР 
	// ПРИ Х=2*10**-5  0.952157
	// ПРИ У=0.41 0.585031

	int A = a, B = b, C = y;

	puts("");
	if ((A % 2) != (B % 2))
		printf("Условие выпонилось т.к A % 2 = %d B % 2 = %d", A % 2, B % 2);

	else
		printf("Условие невыпонилось т.к A % 2 = %d B % 2 = %d", A % 2, B % 2);

	puts("");
	if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0)
		printf("Условие выпонилось т.к A % 3 = %d, B % 3 = %d, С % 3 = %в", A % 3, B % 3, C % 3);

	else
		printf("Условие невыпонилось т.к A % 3 = %d, B % 3 = %d, С % 3 = %d", A % 3, B % 3, C % 3);


	return 0;
}
int homework_24()
{
	double F;
	double x;
	double y;
	scanf(" %lf", &x);
	scanf("%lf", &y);
	int d = 1;
	F = ((pow(cos(y), 2)) + 2.4 * d) / (exp(y) + log(pow(sin(x), 2) + 6));
	printf("%lf", F);
}
int main()
{
	task1();
	task2();
	homework_24();
}