#include <stdio.h>
#include <locale.h>
void task1();
void task2();
void task3();


int main()
{

	setlocale(LC_CTYPE, "RUS");
	task3();
}
void task1()
{
	setlocale(LC_CTYPE, "RUS");
	printf("%20s\n", "��� �����");
	printf("%-20s\n", "��� �����");
	printf("%10.5f\n ", 12.234657);
	printf("������� �� ������� %d �� %d ����� %d\n ", 5, 2, 5 % 2);
	printf("������� �� ������� %d �� %d ����� %d\n ", 7, 5, 7 % 5);
	printf("������� �� ������� %d �� %d ����� %d\n ", 2000, 4, 2000 * 4);
	printf("%g ��������� %e ����� %f\n ", 5., 2., 5. / 2);
	printf("%d ��������� %d ����� %f\n ", 5., 2., 5. / 2); // ����� ���������� �����
	printf("%f ��������� %f ����� %f\n ", 5., 2., 5. / 2); // ��������� ������� 
	printf("%e ��������� %e ����� %f\n ", 5., 2., 5. / 2); // ���������� ����� � ���� �.�� �+��
	printf("%g ��������� %g ����� %f\n ", 5., 2., 5. / 2); // ����� �� ��������, ��� ������
	printf("1%+5d,\n 2%+10d,\n 3%+15d,\n", 1, 2, 3);
	task2();
}


void task2()
{
	int N, K;
	N = 11;
	K = 29;
	printf("������ %d ����� %d ����� 00 ������", N, K);
	printf("���� %d ������ �����\n", K);
	printf("�� �������� �������� %d ����� � %d �����\n", 23 - N, 60 - K);
	printf("C 8.00 ����� ������ %d ������\n", (N - 8) * 60 * 60 + K * 60);
	printf("������� ��� = %f ����� � ������� ������ = %f\n", N / 24., K / 60.);
	task3();




}

void task3() //homework
{
	float n = 3, L = 33; // ������� 17
	printf("����:\n");
	printf("     %6.0f\n", n);
	printf("     %6.0f\n", L);
	printf("     ________\n");
	printf("�����:\n");
	printf("       %+2.2f\n", n / L);

}