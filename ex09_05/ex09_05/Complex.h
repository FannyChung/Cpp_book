#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
public:
	Complex(double=0,double=0);
	~Complex();
	void display();
	Complex add(Complex);
	Complex sub(Complex);

private:
	double realPart;
	double imaginaryPart;
};


#endif