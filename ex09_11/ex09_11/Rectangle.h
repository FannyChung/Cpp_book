#include<iostream>

class Rectangle
{
public:
	Rectangle(double=1,double=1);
	double calPerimeter();//�����ܳ�
	double calArea();//�������

	void setLength(double);//setter&getter
	void setWidth(double);
	double getLength();
	double getWidth();
private:
	double length;
	double width;
};
