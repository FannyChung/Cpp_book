#include"Rational.h"
#include<iostream>
using namespace std;

Rational::Rational(int num,int den)
{
	gcd(num, den);
	n = num;
	d = den;
}

Rational Rational::add(Rational x){
	int a = n* x.d + d * x.n;//·Ö×Ó
	int b = d * x.d;//·ÖÄ¸
	Rational result(a, b);
	return result;
}

Rational Rational::sub(Rational x){
	int a = n*x.d - d*x.n;
	int b = d * x.d;
	Rational result(a, b);
	return result;
}

Rational Rational::times(Rational x){
	int a = n*x.n;
	int b = d * x.d;
	Rational result(a, b);
	return result;
}

Rational Rational::div(Rational x){
	int a = n*x.d;
	int b = d * x.n;
	Rational result(a, b);
	return result;
}

void Rational::displayRtn(){
	cout << n <<"/" << d ;
}

void Rational::displayFloat(){
	float f= static_cast<float>(n) / d ;
	cout << f;
}

void Rational::gcd(int &a, int &b){
	int m =(a>b)?b:a;
	int i = 2;
	while (i<=m)
	{
		if (a%i == 0 && b%i == 0){
			a /= i;
			b /= i;
			m = (a>b) ? b : a;
		}
		i++;
	}
}