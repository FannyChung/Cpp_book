/*
Rectangle�࣬ʵ�ּ���������ܳ�
*/

#include"Rectangle.h"
#include<iostream>
using namespace std;
int main(){
	Rectangle bad1(-5, 3);
	Rectangle bad2(50, 3);
	Rectangle good(4.2, 8.7);
	cout << "bad1 test �ܳ�&���" << bad1.calPerimeter() << "\t" << bad1.calArea() << endl;
	cout << "bad2 test �ܳ�&���" << bad2.calPerimeter() << "\t" << bad2.calArea() << endl;
	cout << "good:" << good.calPerimeter() << "\t" << good.calArea() << endl;
	return 0;
}