#include <stdio.h>
#include <locale.h>
int task1()
{
	char cha;
	puts("Введите char:");
	scanf("%c", &cha);
	puts("Введите int:");
	int in, p;
	scanf("%i", &in);
	puts("Введите float:");
	float fl;
	scanf("%f", &fl);
	puts("Введите double:");
	double dou;
	scanf("%d", &dou);
	printf("%c, %d, %f, %ld", cha, in, fl, dou);
	// ЗАДАНИЕ 1А
	int fullpart, i;
	fullpart = (int)fl;
	printf("\n Задание 1 А:\n целая часть %d, дробная часть %f", fullpart, fl - (float)fullpart);

	//ЗАДАНИЕ 1Б
	printf("\n Задание 1 Б\n 16-ричная система: %x, 8-ричная система:%i", cha, cha);

	//ЗАДАНИЕ 1В
	printf("\n Задание 1 C:\n %f", 1 / (float)in);
}
int task2()
{
	int a = 11;
	int b = 3;
	int x;
	float y;
	double z;
	x = (int)a / b;
	y = (float)a / b;
	z = (double)a / b;
	printf("\nбез удаленных x y z:\n%i, %f, %d\n", x, y, z);

	printf("\nс удаленными x y z: %i,%f,%d\n", (int)a / b, (float)a / b, (double)a / b);

}
int task3()
{

	puts("Введите число");
	int N;
	scanf("%d", &N);
	printf(" \nЗадание 1 а: последняя цифра числа N:%d\n", N % 10);
	printf(" \nЗадание 1 b: первая цифра числа N: %d\n", N / 100);
	printf(" \nЗадание 1 c: сумма цифр числа N:%d\n", (N % 10) + (N / 100) + (N - (N / 100 * 100) - (N % 10)) / 10);
}
int task24()
{
	int x = 58;
	int y = 253;
	float z = 1900.0;
	float massa = x * y;
	float raznica = massa / z;
	printf("Живая масса курицы равна %f грамм\n", z);
	printf("От курицы-несушки получают за год %d яиц\n", y);
	printf("Масса одного яйца равна %d грамм\n", x);
	printf("Масса продукции курицы за год равна %f грамм\n", massa);
	printf("Продукция несушки превосходит ее массу в %f раз\n",raznica);
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	task1();
	task2();
	task3();
	task24();
}