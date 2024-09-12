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
	printf("%20s\n", "Ёто текст");
	printf("%-20s\n", "Ёто текст");
	printf("%10.5f\n ", 12.234657);
	printf("ќстаток от делени€ %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("ќстаток от делени€ %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("ќстаток от делени€ %d на %d равен %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n ", 5., 2., 5. / 2);
	printf("%d разделить %d равно %f\n ", 5., 2., 5. / 2); // целое дес€тичное числа
	printf("%f разделить %f равно %f\n ", 5., 2., 5. / 2); // плавающа€ зап€та€ 
	printf("%e разделить %e равно %f\n ", 5., 2., 5. / 2); // дес€тичное число в виде х.хх е+хх
	printf("%g разделить %g равно %f\n ", 5., 2., 5. / 2); // выбор по принципу, что короче
	printf("1%+5d,\n 2%+10d,\n 3%+15d,\n", 1, 2, 3);
	task2();
}


void task2()
{
	int N, K;
	N = 11;
	K = 29;
	printf("—ейчас %d часов %d минут 00 секунд", N, K);
	printf("»дет %d минута суток\n", K);
	printf("ƒо полуночи осталось %d часов и %d минут\n", 23 - N, 60 - K);
	printf("C 8.00 часов прошло %d секунд\n", (N - 8) * 60 * 60 + K * 60);
	printf("“екущий час = %f суток и текуща€ минута = %f\n", N / 24., K / 60.);
	task3();




}

void task3() //homework
{
	float n = 3, L = 33; // вариант 17
	printf("ƒано:\n");
	printf("     %6.0f\n", n);
	printf("     %6.0f\n", L);
	printf("     ________\n");
	printf("ќтвет:\n");
	printf("       %+2.2f\n", n / L);

}