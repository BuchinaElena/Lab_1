#include <math.h>//математческая библиотека
#include <stdio.h>//библиотека для работ со строками

float f(float x)
{
	return (1 - (1 / 4) * sin(2 * x) * sin(2 * x) + cos(2 * x));
}