#include <math.h>//������������� ����������
#include <stdio.h>//���������� ��� ����� �� ��������

int main()//������� ������ ���������
{
	float x = 180;//������ ����� ������������
	float f;
	printf("\n x=%.4f", x);//����� � ��������� ������
	f = 1 - (1 / 4) * sin(2 * x) * sin(2 * x) + cos(2 * x);
	printf("\n f=%.4f \n", f);
	scanf_s("%f", &x);//���������� � ����������
	printf("\n x=%.4f", x);
	f = 1 - (1 / 4) * sin(2 * x) * sin(2 * x) + cos(2 * x);
	printf("\n f=%.4f", f);
	return 0;//�������
}