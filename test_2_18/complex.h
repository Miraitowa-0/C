#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct
{	//�Զ���complex��������
	float Realpart;
	float Imagepart;
}complex;
//����һ������
complex Creat(float x, float y);
//��ø�����ʵ��
float GetReal(complex c);
//������ݵ��鲿
float GetImage(complex c);
//�����������ĺ�sum
complex Add(complex c1, complex c2);
//�����������Ĳ�difference
complex Sub(complex c1, complex c2);

#endif
