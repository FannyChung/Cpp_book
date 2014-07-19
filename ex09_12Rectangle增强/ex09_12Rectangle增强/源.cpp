#include"Rectangle.h"
#include<iostream>
using namespace std;
int main(){
	Point p1{ 4, 4 };
	Point p2{ 4, 5 };
	Point p3{ 5, 5 };
	Point p4{ 5, 4 };
	Rectangle r(p1, p2, p3, p4);
/*	cout << "是否是正方形:";
	if (r.isSquare())
		cout << "是";
	else
		cout << "否";
	cout << endl;
	cout << "长:" << r.calLength() << "\t" << "宽:" << r.calWidth() << "\t" << "面积" << r.calArea() << "\t周长" << r.calPerimeter() << endl;
	*/
	Point badP1{ -3, 9 };
	Rectangle badR(p1, p2, p3, badP1);
	if (badR.isSquare())
		cout << "是";
	else
		cout << "否";
	cout << endl;
	cout << "长:" << badR.calLength() << "\t" << "宽:" << badR.calWidth() << "\t" << "面积" << badR.calArea() << "\t周长" << badR.calPerimeter() << endl;

	return 0;
}