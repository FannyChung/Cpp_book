#include "Complex.h"
#include<iostream>
using namespace std;

Complex::Complex(double real,double imagine)
{
	realPart=real;
	imaginaryPart=imagine;
}

Complex::~Complex()
{
}

void Complex::display(){
	cout<<"<"<<realPart<<" , "<<imaginaryPart<<" > ";
}

Complex Complex::add(Complex x){
	Complex c(x.realPart+realPart, x.imaginaryPart+imaginaryPart);
	return c;
}

Complex Complex::sub(Complex y){
	Complex c(realPart-y.realPart, imaginaryPart-y.imaginaryPart);
	return c;
}