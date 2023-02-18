#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

//����һ������
complex Creat(float x, float y)
{
	complex c;
	c.Realpart = x;
	c.Imagepart = y;
	return c;
}
//��ø�����ʵ��
float GetReal(complex c)
{
	return c.Realpart;
}
//��ø������鲿
float GetImage(complex c)
{
	return c.Imagepart;
}
//�����������ĺ�sum
complex Add(complex c1, complex c2)
{
	complex sum;
	sum.Realpart = c1.Realpart + c2.Realpart;
	sum.Imagepart = c1.Imagepart + c2.Imagepart;
	return sum;
}
//�����������Ĳ�difference
complex Sub(complex c1, complex c2)
{
	complex difference;
	difference.Realpart = c1.Realpart - c2.Realpart;
	difference.Imagepart = c1.Imagepart - c2.Imagepart;
	return difference;
}
int main()
{
	complex c1, c2, add, sub;
	c1 = Creat(1, 1);
	c2 = Creat(2, 2);
	GetReal(c1);
	GetImage(c2);
	add = Add(c1, c2);
	sub = Sub(c1, c2);
	printf("c1=%.2f+(%.2f)i\n", c1.Realpart, c1.Imagepart);
	printf("c2=%.2f+(%.2f)i\n", c2.Realpart, c2.Imagepart);
	printf("add=%.2f+(%.2f)i\n", add.Realpart, add.Imagepart);
	printf("sub=%.2f+(%.2f)i\n", sub.Realpart, sub.Imagepart);
	return 0;
}