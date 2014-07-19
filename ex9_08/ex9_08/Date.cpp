#include"Date.h"
#include<iostream>
using namespace std;

Date::Date(int m,int d,int y)
{
	year = y;
	month = (m > 0 && m<13) ? m : 1;
	int l = getDayLimit();
	day = (d > 0 && d <= l) ? d : 1;
}


bool Date::isRunYear(){
	if (year % 400 == 0){
		return true;
	}
	else if (year % 100 == 0){
		return false;
	}
	else if (year % 4 == 0){
		return true;
	}
	else
	{
		return false;
	}
}

int Date::getDayLimit(){
	int l;
	switch (month)//根据不同月份计算day的最大值
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12://大月
		l = 31;
		break;
	case 4:case 6:case 9:case 11://小月
		l = 30;
		break;
	case 2://二月
		if (isRunYear()){//闰年
			l = 29;
		}
		else
		{
			l = 28;
		}
		break;
	default:
		break;
	}
	return l;
}
void Date::print(){
	cout << month << '/' << day << '/' << year;
}

void Date::nextDay(){
	day++;
	if (day > getDayLimit()){
		day = 1;
		month++;
		if (month > 12){
			month = 1;
			year++;
		}
	}
}