//有理数类测试文件
#include"Rational.h"
#include<iostream>
using namespace std;

int main(){
	Rational r1(3, 15);
	Rational r2(8,16);

	r1.displayRtn();
	cout << " + ";
	r2.displayRtn();
	cout << " = ";
	r1.add(r2).displayRtn();
	cout << endl;

	r1.displayFloat();
	cout << " - ";
	r2.displayFloat();
	cout << " = ";
	r1.sub(r2).displayFloat();
	cout << endl;


	r1.displayRtn();
	cout << " * ";
	r2.displayRtn();
	cout << " = ";
	r1.times(r2).displayRtn();
	cout << endl;


	r1.displayFloat();
	cout << " / ";
	r2.displayFloat();
	cout << " = ";
	r1.div(r2).displayFloat();
	cout << endl;
	return 0;
}