#include"Time.h"
#include<iomanip>
#include<iostream>
using namespace std;


Time::Time(int h, int m, int s)
{
	setTime(h, m, s);
}

Time& Time::setTime(int h, int m, int s){
	sec = 0;
	setHour(h);
	setMin(m);
	setSec(s);
	return *this;
}

Time& Time::setHour(int h){
	h = h<24 && h > 0 ? h : 0;
	sec += (h-sec/3600)*3600;
	return *this;
}

Time& Time::setMin(int m){
	m = m<60 && m > 0 ? m : 0;
	sec += (m - sec % 3600/60) * 60;
	return *this;
}
Time& Time::setSec(int s){
	s = s<60 && s > 0 ? s : 0;
	sec += (s - sec % 60);
	return *this;
}

int Time::getHour()const{
	return sec / 3600;
}
int Time::getMin()const{
	return sec % 3600 / 60;
}
int Time::getSec()const{
	return sec % 60;
}

void Time::printUniversal()const{
	cout << setfill('0') << setw(2) << sec / 3600 << " : " << setw(2) << sec % 3600 / 60 << " : " << sec % 60;
}
void Time::printStandard()const{
	int h = sec / 3600;
	cout << setfill('0') << setw(2) << (h==12||h==0?0:h%12) << " : " << setw(2) << sec % 3600 / 60 << " : " << sec % 60<<(h<12?" AM":" PM");
}