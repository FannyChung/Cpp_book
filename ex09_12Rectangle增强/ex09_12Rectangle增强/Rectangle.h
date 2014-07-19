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
	//���㳤�Ϳ��ܳ������
	double calLength();
	double calWidth();
	double calPerimeter();
	double calArea();
	bool isSquare();//�Ƿ���������
private:
	bool setRec();//���ú�������֤�ڵ�һ������û������>20,���ǳ�����
	double distance(Point, Point);
	double k(Point, Point);

	Point p[4];
};


#endif