#include"Rectangle.h"
#include<iostream>
using namespace std;
int main(){
	Point p1{ 4, 4 };
	Point p2{ 4, 5 };
	Point p3{ 5, 5 };
	Point p4{ 5, 4 };
	Rectangle r(p1, p2, p3, p4);
/*	cout << "�Ƿ���������:";
	if (r.isSquare())
		cout << "��";
	else
		cout << "��";
	cout << endl;
	cout << "��:" << r.calLength() << "\t" << "��:" << r.calWidth() << "\t" << "���" << r.calArea() << "\t�ܳ�" << r.calPerimeter() << endl;
	*/
	Point badP1{ -3, 9 };
	Rectangle badR(p1, p2, p3, badP1);
	if (badR.isSquare())
		cout << "��";
	else
		cout << "��";
	cout << endl;
	cout << "��:" << badR.calLength() << "\t" << "��:" << badR.calWidth() << "\t" << "���" << badR.calArea() << "\t�ܳ�" << badR.calPerimeter() << endl;

	return 0;
}