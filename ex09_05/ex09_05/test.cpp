#include<iostream>
#include"Complex.h"
using namespace std;

int main(){
	Complex c1(4.2);
	Complex c2(8.32,9.32);
	c1.display();
	c2.display();

	cout<<'\n';
	c1.display();
	cout<<" + ";
	c2.display();
	cout<<" = ";
	c1.add(c2).display();

	cout<<'\n';
	c1.display();
	cout<<" - ";
	c2.display();
	cout<<" = ";
	c1.sub(c2).display();
	
	return 0;
}