#include <math.h>//математческая библиотека
#include <stdio.h>//библиотека для работ со строками

int main()//функция начало программы
{
	float x = 180;//формат числа вещественный
	float f;
	printf("\n x=%.4f", x);//вывод в командную строку
	f = 1 - (1 / 4) * sin(2 * x) * sin(2 * x) + cos(2 * x);
	printf("\n f=%.4f \n", f);
	scanf_s("%f", &x);//считывание с клавиатуры
	printf("\n x=%.4f", x);
	f = 1 - (1 / 4) * sin(2 * x) * sin(2 * x) + cos(2 * x);
	printf("\n f=%.4f", f);
	return 0;//возврат
}