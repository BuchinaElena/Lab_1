#include <math.h>//�������������� ����������
#include <stdio.h>//���������� ��� ������ �� ��������

void  f();
float x, rezylt;

int main()//������� ������
{
	x = 150;//������ ����� ������������
	f();
	printf("\n x=%.4f", x);//����� � ��������� ������
	printf("\n f=%.4f \n", rezylt);
	scanf_s("%f", &x);//���������� � ����������
	f();
	printf("\n x=%.4f", x);
	printf("\n f=%.4f \n", rezylt);
	return 0;
}

void f()
{
	rezylt = (1 - (1 / 4) * sin(2 * x) * sin(2 * x) + cos(2 * x));
}