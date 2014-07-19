#ifndef RECTANGLE_H
#define RECTANGLE_H
struct Point
{
	double x;
	double y;
};
class Rectangle
{
public:
	Rectangle(Point,Point,Point,Point);
	//计算长和宽、周长和面积
	double calLength();
	double calWidth();
	double calPerimeter();
	double calArea();
	bool isSquare();//是否是正方形
private:
	bool setRec();//设置函数，验证在第一象限且没有坐标>20,且是长方形
	double distance(Point, Point);
	double k(Point, Point);

	Point p[4];
};


#endif