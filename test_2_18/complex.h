#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct
{	//自定义complex数据类型
	float Realpart;
	float Imagepart;
}complex;
//创建一个复数
complex Creat(float x, float y);
//获得复数的实部
float GetReal(complex c);
//获得数据的虚部
float GetImage(complex c);
//求两个复数的和sum
complex Add(complex c1, complex c2);
//求两个复数的差difference
complex Sub(complex c1, complex c2);

#endif
