#include <stdio.h>
#include <locale.h>
int task1()
{
	char cha;
	puts("������� char:");
	scanf("%c", &cha);
	puts("������� int:");
	int in, p;
	scanf("%i", &in);
	puts("������� float:");
	float fl;
	scanf("%f", &fl);
	puts("������� double:");
	double dou;
	scanf("%d", &dou);
	printf("%c, %d, %f, %ld", cha, in, fl, dou);
	// ������� 1�
	int fullpart, i;
	fullpart = (int)fl;
	printf("\n ������� 1 �:\n ����� ����� %d, ������� ����� %f", fullpart, fl - (float)fullpart);

	//������� 1�
	printf("\n ������� 1 �\n 16-������ �������: %x, 8-������ �������:%i", cha, cha);

	//������� 1�
	printf("\n ������� 1 C:\n %f", 1 / (float)in);
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
	printf("\n��� ��������� x y z:\n%i, %f, %d\n", x, y, z);

	printf("\n� ���������� x y z: %i,%f,%d\n", (int)a / b, (float)a / b, (double)a / b);

}
int task3()
{

	puts("������� �����");
	int N;
	scanf("%d", &N);
	printf(" \n������� 1 �: ��������� ����� ����� N:%d\n", N % 10);
	printf(" \n������� 1 b: ������ ����� ����� N: %d\n", N / 100);
	printf(" \n������� 1 c: ����� ���� ����� N:%d\n", (N % 10) + (N / 100) + (N - (N / 100 * 100) - (N % 10)) / 10);
}
int task24()
{
	int x = 58;
	int y = 253;
	float z = 1900.0;
	float massa = x * y;
	float raznica = massa / z;
	printf("����� ����� ������ ����� %f �����\n", z);
	printf("�� ������-������� �������� �� ��� %d ���\n", y);
	printf("����� ������ ���� ����� %d �����\n", x);
	printf("����� ��������� ������ �� ��� ����� %f �����\n", massa);
	printf("��������� ������� ����������� �� ����� � %f ���\n",raznica);
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	task1();
	task2();
	task3();
	task24();
}