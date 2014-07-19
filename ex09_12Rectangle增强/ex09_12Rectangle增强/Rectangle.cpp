#include"Rectangle.h"
#include<iostream>
#include<math.h>
using namespace std;
#define INFTY 2147483647

Rectangle::Rectangle(Point p1,Point p2,Point p3,Point p4)
{
	p[0] = p1;
	p[1] = p2;
	p[2] = p3;
	p[3] = p4;
	if (!setRec()){
		cout << "输入不符合长方形和题目要求，重置为（1,1）,(1,2),(2,1),(2,2)" << endl;
		p[0] = Point{ 1, 1 };
		p[1] = Point{ 1, 2 };
		p[2] = Point{ 2, 2 };
		p[3] = Point{ 2, 1 };
	}
}

bool Rectangle::setRec(){
	for (int i = 0; i < 3; i++)
	{
		if (p[i].x<0 || p[i].x>20)
			return false;
		if (p[i].y<0 || p[i].y>20)
			return false;
	}
	double xie = k(p[0], p[1]);
	if (distance(p[0], p[1]) == distance(p[2], p[3])){
		if (xie == k(p[2], p[3])){
			double x = k(p[0], p[3]);
			if ((xie*x == -1 || (xie == 0 && x == INFINITY) || (xie == INFINITY&&x == 0))){
				return true;
			}
		}
	}
	return false;
}

double Rectangle::calLength(){
	double d1 = distance(p[0], p[1]);
	double d2 = distance(p[0], p[3]);
	return (d1>d2)?d1:d2;
}


double Rectangle::calWidth(){
	double d1 = distance(p[0], p[1]);
	double d2 = distance(p[0], p[3]);
	return (d1>d2) ? d2 : d1;
}

double Rectangle::calArea(){
	return distance(p[0], p[1])*distance(p[0], p[3]);
}

double Rectangle::calPerimeter(){
	return 2 * (distance(p[0], p[1]) + distance(p[0], p[3]));
}

bool Rectangle::isSquare(){
	return distance(p[0], p[1])==distance(p[0], p[3]);
}
double Rectangle::distance(Point p1, Point p2){
	int x = (p1.x) - (p2.x);
	int y = (p1.y) - (p2.y);
	return sqrt(x*x+y*y);
}

double Rectangle::k(Point p1, Point p2){
	double c = p1.x - p2.x;
	if (c == 0){
		return INFINITY;
	}
	return (p1.y - p2.y) / c;
}