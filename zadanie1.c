#include <stdio.h>
#include <locale.h>
int nomer1()
{
	setlocale(LC_CTYPE, "RUS");
	int N = 7, K = 50;
	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", K);
	printf("�� �������� �������� %d ����� � %d �����\n ", N, K);
	printf("� 8.00 ������ %d ������\n", K * 60);
	printf("������� ��� = %f ����� � ������� ������ = %f ����\n ", (double)N / 24, (double)K / 60);
	return 0;
}
int nomer2()
{
	setlocale(LC_CTYPE, "RUS");
	printf("%20s\n", "��� �����");
	printf("\t��� �����\n");

	printf("%10.3f\n", 12.34657);
	printf("%10.5f\n", 12.234657);

	printf("������� �� ������� %d �� %d ����� %d\n", 5, 2, 5 % 2);
	printf("������� �� ������� %d �� %d ����� %d\n", 7, 5, 7 % 5);
	printf("������� �� ������� %d �� %d ����� %d\n", 2000, 4, 2000 * 4);

	printf("%g ��������� %e ����� %f\n", 5., 2., 5. / 2);

	printf("%d ��������� %d ����� %d\n", 5, 2, 5 / 2);
	printf("%f ��������� %f ����� %f\n", 5, 2, 5 % 2);
	printf("%g ��������� %g ����� %g\n", 5., 2., 5. / 2);
	printf("%f ��������� %f ����� %f\n", 5., 2., 5. / 2);
	printf("%e ��������� %e ����� %e\n", 5., 2., 5. / 2);
	return 0;
}
int task3()
{
	int n = 4;
	printf("����:\n");
	printf("\t\%d\n", n);
	printf("\t\%d\n", 337);

	printf("�����:\n");
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
