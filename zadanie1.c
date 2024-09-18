#include <stdio.h>
#include <locale.h>
int nomer1()
{
	setlocale(LC_CTYPE, "RUS");
	int N = 7, K = 50;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K);
	printf("До полуночи осталось %d часов и %d минут\n ", N, K);
	printf("С 8.00 прошло %d секунд\n", K * 60);
	printf("Текущий час = %f суток и текущая минута = %f часа\n ", (double)N / 24, (double)K / 60);
	return 0;
}
int nomer2()
{
	setlocale(LC_CTYPE, "RUS");
	printf("%20s\n", "Это текст");
	printf("\tЭто текст\n");

	printf("%10.3f\n", 12.34657);
	printf("%10.5f\n", 12.234657);

	printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
	printf("Остаток от деления %d на %d равен %d\n", 7, 5, 7 % 5);
	printf("Остаток от деления %d на %d равен %d\n", 2000, 4, 2000 * 4);

	printf("%g разделить %e равно %f\n", 5., 2., 5. / 2);

	printf("%d разделить %d равно %d\n", 5, 2, 5 / 2);
	printf("%f разделить %f равно %f\n", 5, 2, 5 % 2);
	printf("%g разделить %g равно %g\n", 5., 2., 5. / 2);
	printf("%f разделить %f равно %f\n", 5., 2., 5. / 2);
	printf("%e разделить %e равно %e\n", 5., 2., 5. / 2);
	return 0;
}
int task3()
{
	int n = 4;
	printf("Дано:\n");
	printf("\t\%d\n", n);
	printf("\t\%d\n", 337);

	printf("Ответ:\n");
	printf("%09.5", (n/ 337.));
	return 0;
}

int main()
{
	setlocale(LC_CTYPE, "RUS");
	nomer1();
	nomer2();
	task3();
	return 0;
}
