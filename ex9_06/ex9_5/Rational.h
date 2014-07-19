#ifndef RATIONAL_H
#define RATIONAL_H
class Rational
{
public:
	Rational(int=0,int=1);
	Rational add(Rational);
	Rational sub(Rational);
	Rational times(Rational);
	Rational div(Rational);
	void displayRtn();
	void displayFloat();

private:
	void gcd(int&, int&);
	int n;
	int d;
};

#endif