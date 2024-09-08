#include <stdio.h>
#include <locale.h>
void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts("*********************************************");
	puts("* тема: Разработка консольного приложения   *");
	puts("*                                           *");
	puts("*                                           *");
	puts("* Выполнил Федоров Е. Е.                    *");
	puts("*                                           *");
	puts("*********************************************");

	getchar();
	return 0;
}
void date()
{
setlocale(LC_CTYPE, "RUS");
puts("   __      __      __   __ ");
puts("/|  /  /|   _|    |  | |__ ");
puts(" |  |   |  |__    |__| |__|");
getchar();
return 0;
}
void figures()
{
	puts("         |\                ___                               ")
	puts("         | \               | |               ___                ")
	puts("_________|_/______       __|_|__            |   |              ")
	puts("\                /      /   +   \      _____|___|__________                   ")
	puts(" \______________/      /_________\     \                   /  ")
	puts("                      |           |     \_________________/    ")
	puts("                      |     __    |                          ")
	puts("                      |    |* |   |                          ")
	puts("                      |____|__|___|                          ")


}
void main()
{
	name();
	date();
	setlocale(LC_CTYPE, "RUS");
	puts("Hello World!");
	getchar();
	return 0;
}