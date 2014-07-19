#include"Time.h"
#include<iostream>
#include<iomanip>
using namespace std;

Time::Time(int h,int m,int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

Time::~Time()
{
}

void Time::setHour(int h){
	hour=(h>=0&&h<24)?h:00;
}

void Time::setMinute(int m){
	minute=(m>=0&&m<60)?m:00;
}

void Time::setSecond(int s){
	second=(s>=0&&s<60)?s:00;
}

int Time::getHour(){
	return hour;
}

int Time::getMinute(){
	return minute;
}

int Time::getSecond(){
	return second;
}

void Time::displayStandard(){
	cout<<((hour==0||hour==12)?12:hour%12)<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setw(2)<<second<<(hour<12?"AM":"PM")<<endl;
}
void Time::tick(){
	int second = this->second;
	int minute = this->minute;
	int hour = this->hour;
	second++;
	if(second>=60){
		minute++;
		second=0;
	}
	
	if(minute>=60){
		hour++;
		minute=0;
	}

	if(hour>=24){
		hour=0;
	}
	setHour(hour);
	setMinute(minute);
	setSecond(second);
}