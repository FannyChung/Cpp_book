#include<iostream>
using namespace std;

#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, Complex&);
public:
	Complex(double=0,double=0);//����ʵ���������������µĸ���
	Complex operator+(const Complex&)const;//��
	Complex operator-(const Complex&)const;//��

	Complex& operator*(const Complex&)const;//�˷�

	bool operator!=(const Complex&)const;//������
	bool operator==(const Complex&)const;//����

private:
	double real;
	double imaginary;
};


#endif