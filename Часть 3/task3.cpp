#include <math.h>//������������� ����������
#include <stdio.h>//���������� ��� ����� �� ��������

float f(float x);

int main()//������� ������ ���������
{
	float x = 160;//������ ����� ������������
	printf("\n x=%.4f", x);//����� � ��������� ������
	printf("\n f=%.4f \n", f(x));
	scanf_s("%f", &x);//���������� � ����������
	printf("\n x=%.4f", x);
	printf("\n f=%.4f", f(x));
	return 0;//�������
}

float f(float x)
{
	return (1 - (1 / 4) * sin(2 * x) * sin(2 * x) + cos(2 * x));
}