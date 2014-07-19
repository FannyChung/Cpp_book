#include"Rectangle.h"

Rectangle::Rectangle(double l,double w)
{
	setLength(l);
	setWidth(w);
}
double Rectangle::calArea(){
	return width*length;
}

double Rectangle::calPerimeter(){
	return (width + length) * 2;
}

void Rectangle::setLength(double l){
	length = (l > 0&&l<20) ? l : 1;
}

void Rectangle::setWidth(double w){
	width = (w > 0&&w<20) ? w : 1;
}

double Rectangle::getLength(){
	return length;
}

double Rectangle::getWidth(){
	return width;
}

