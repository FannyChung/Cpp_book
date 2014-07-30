#include<iostream>
using namespace std;

#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, Complex&);
public:
	Complex(double=0,double=0);//接受实数和虚数来构造新的复数
	Complex operator+(const Complex&)const;//加
	Complex operator-(const Complex&)const;//减

	Complex& operator*(const Complex&)const;//乘法

	bool operator!=(const Complex&)const;//不等于
	bool operator==(const Complex&)const;//等于

private:
	double real;
	double imaginary;
};


#endif