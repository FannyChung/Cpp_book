#include<iostream>

class Rectangle
{
public:
	Rectangle(double=1,double=1);
	double calPerimeter();//计算周长
	double calArea();//计算面积

	void setLength(double);//setter&getter
	void setWidth(double);
	double getLength();
	double getWidth();
private:
	double length;
	double width;
};
