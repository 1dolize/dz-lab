#include <stdio.h>
#include<locale.h>
#include <math.h>
int lab6task1()
{
	int year;
	puts("������� ���:\n");
	scanf("%i", &year);
	int d;
	d = year % 4;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) puts("��� ����������\n");
	else printf("\n%i ��� ������������\n", year);
}
int lab6task2(zx)
{
	float F;
	double x;
	scanf("%lf", &x);
	F = x <= 2 ? x*x +4 * x + 5 : 1 / (x * x + 4 * x +5);
	printf("\n%.2f\n\n", F);

	//����������� ������ 
	//��� �<=2 : 10
	//��� �>2  : 17
}
int homework_24()
{
	puts("������� ���-�� ������:\n");
	int x;
	scanf("%d", &x);
	puts("������� ���-�� ������:\n");
	int y;
	scanf("%d", &y);
	if (x % 10 == 1)
	{
		printf("%d �����", x);
	}
	if (x%10>=1 && x%10<=5)
	{
		printf("%d �����", x);
	}
	if (5 <= x % 10 <= 9)
	{
		printf("%d ������", x);
	}
	if (x%10==0)
	{
		printf("%d ������", x);
	}
  

	if (y % 10 == 1)
	{
		printf("%d �������", y);
	}
	if (y%10>=1 && y%10<=5)
	{
		printf("%d �������", y);
	}
	if (5 <= y % 10 <= 9)
	{
		printf("%d ������", y);
	}
	if (x%10==0)
	{
		printf("%d ������", x);
	}
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	lab6task1();
	lab6task2();
	homework_24();
}




