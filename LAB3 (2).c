#include <stdio.h>
#include <locale.h>
#include <math.h>
// zadanie1
void main()
{
	setlocale(LC_ALL, "RUS");
	int num;
	printf("������� ������ �����: ");
	scanf("%d", &num);
	printf("������� �����: %d\n", num);

	int num2;
	printf("������� ������ �����: ");
	scanf("%d", &num2);
	printf("������� �����: %d\n", num2);

	printf("����� �����: %d\n", num + num2);
	printf("�������� �����: %d\n", num - num2);
	printf("������������ �����: %d\n", num * num2);
	printf("������� �����: %d\n", num / num2);
	printf("������� �� ������� ������� ����� �� ������: %d\n", num2 % num);
}
// zadanie2
#define D 2.54
#define p 2.32166
#define c 2.7076

float get_dym(int a)
{
	float res;
	res = D * a;
	return res;
}

void main()
{
	setlocale(LC_ALL, "RUS");
	int dym;
	float result, result1, result2;

	printf("������� �����: ");
	scanf("%d", &dym);
	result = get_dym(dym);
	result1 = p * dym;
	result2 = c * dym;

    printf("\n%d ������ - ��� %f �� ", dym, result);
	printf("\n%d ��������� ������ - ��� %f �� ", dym, result1);
	printf("\n%d �������������� ������ - ��� %f �� ", dym, result2);
}

//zadanie3
void main()
{
	setlocale(LC_ALL, "RUS");
	float a, b;
	printf("������� ������ �����: ");
	scanf("%f", &a);
	printf("������� ������ �����: ");
	scanf("%f", &b);
	printf("\t_________________________________________________\n");
	printf("\t|     a * b     |     a + b     |     a - b     |\n");
	printf("\t_________________________________________________\n");
	printf("\t|%7.1g * %4.1g|%7.1g + %4.1g|%7.1g - %4.1g|\n", a, b, a, b, a, b);
	printf("\t_________________________________________________\n");
	printf("\t|   %8.1g    |   %8.1g    |   %8.1g    |", a * b, a + b, a - b);
}
//dz24
void main()
{
	setlocale(LC_ALL, "RUS");
	double w, r;
	double arcLength, sectorArea, chordLength;

	printf("������� ������ ����������:");
	scanf("%lf", &r);
	printf("������� ����:");
	scanf("%lf", &w);

	arcLength = r * w;
	sectorArea = 0.5 * r * r * w;
	chordLength = 2 * r * sin(w / 2);
	printf("����� ����: %.2f\n", arcLength);
	printf("������� �������: %.2f\n", sectorArea);
	printf("����� �����: %.2f\n", chordLength);
}	