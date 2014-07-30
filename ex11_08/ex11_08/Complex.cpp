#include"Complex.h"
#include<iostream>
using namespace std;
Complex::Complex(double r, double i) :real(r), imaginary(i)
{
}

Complex Complex::operator + (const Complex& other)const{
	return Complex(real + other.real, imaginary + other.imaginary);
}
Complex Complex::operator - (const Complex& other)const{
	return Complex(real - other.real, imaginary - other.imaginary);
}



ostream& operator<<(ostream& out, const Complex& cpl){
	out << "( " << cpl.real << " , " << cpl.imaginary << " ) ";
	return out;
}
istream& operator>>(istream& in, Complex& cpl){
	in >> cpl.real >> cpl.imaginary;
	return in;
}

Complex &Complex::operator*(const Complex& other)const{
	Complex result(real*other.real - imaginary*other.imaginary, real*other.imaginary + imaginary*other.real);
	return result;
}

bool Complex::operator != (const Complex& other)const{
	return !operator==(other);
}
bool Complex::operator == (const Complex&other)const{
	return (real == other.real&&imaginary == other.imaginary);
}