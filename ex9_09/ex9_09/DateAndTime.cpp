#include"DateAndTime.h"
#include<iostream>
#include<iomanip>

using namespace std;
DateAndTime::DateAndTime(int m, int d, int y, int h, int min, int s)
{
	Date(m, d,y);
	Time(h, min, s);
}
void DateAndTime::printStandard(){
	print();
	cout << "\t";
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour<12 ? "AM" : "PM") << endl;
}
void DateAndTime::printUniversal(){
	print();
	cout << "\t";
	cout << hour << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << endl;
}

void DateAndTime::tick(){
	int second = this->second;
	int minute = this->minute;
	int hour = this->hour;
	second++;
	if (second >= 60){
		minute++;
		second = 0;
	}

	if (minute >= 60){
		hour++;
		minute = 0;
	}

	if (hour >= 24){
		hour = 0;
		nextDay();
	}
	setHour(hour);
	setMinute(minute);
	setSecond(second);
}
void DateAndTime::print(){
	cout << month << '/' << day << '/' << year;
}

void DateAndTime::Date(int m, int d, int y)
{
	year = y;
	month = (m > 0 && m<13) ? m : 1;
	int l = getDayLimit();
	day = (d > 0 && d <= l) ? d : 1;
}


bool DateAndTime::isRunYear(){
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

int DateAndTime::getDayLimit(){
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


void DateAndTime::nextDay(){
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

void DateAndTime::Time(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}


void DateAndTime::setHour(int h){
	hour = (h >= 0 && h<24) ? h : 00;
}

void DateAndTime::setMinute(int m){
	minute = (m >= 0 && m<60) ? m : 00;
}

void DateAndTime::setSecond(int s){
	second = (s >= 0 && s<60) ? s : 00;
}

int DateAndTime::getHour(){
	return hour;
}

int DateAndTime::getMinute(){
	return minute;
}

int DateAndTime::getSecond(){
	return second;
}

void DateAndTime::displayStandard(){
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour<12 ? "AM" : "PM") << endl;
}
