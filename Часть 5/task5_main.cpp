#include <math.h>//математческая библиотека
#include <stdio.h>//библиотека для работ со строками

float f(float x);

int main()//функция начало программы
{
	float x = 140;//формат числа вещественный
	printf("\n x=%.4f", x);//вывод в командную строку
	printf("\n f=%.4f \n", f(x));
	scanf_s("%f", &x);//считывание с клавиатуры
	printf("\n x=%.4f", x);
	printf("\n f=%.4f", f(x));
	return 0;//возврат
}