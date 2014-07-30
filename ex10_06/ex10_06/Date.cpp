#include"Date.h"
#include<iostream>
#include<iomanip>
#include<ctime>
#include<string>//-----------------注意要包含string头文件（否则，可能<<string出错）
using namespace std;

const int Date::limit[12] = { 31, 28,31,30,31,30,31,31,30,31,30,31 };
const string Date::monthE[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

Date::Date()
{
	time_t t = time(NULL);
	tm* pt = localtime(&t);
	day = pt->tm_mday;
	month = (pt->tm_mon) + 1;
	year = pt->tm_year;
}

Date::Date(int ds, int y){
	year = y;
	int dlimit;
	bool isRun = isRunYear();//是否是闰年
	if (isRun){
		dlimit = 366;
	}
	else
	{
		dlimit = 365;
	}
	if (ds <= 0 && ds > dlimit){
		day = 1;
		month = 1;
		cout << "输入天数错误，初始化为默认值：1,1" << endl;
	}
	else
	{
		for (int  i = 0; i < 11; i++)
		{
			int li = limit[i];
			if (i == 1){//二月份
				if (isRun)//如果是闰年，则li变为29
					li++;
			}
			if (ds>li){
				ds -= li;
			}
			else
			{
				month = i + 1;
				day = ds;
				break;
			}
		}
	}
}

void Date::displayDY(){
	int ds = 0;
	for (int i = 0; i < month-1; i++)
	{
		int li = limit[i];
		if (i == 1){//二月份
			if (isRunYear())//如果是闰年，则li变为29
				li++;
		}
		ds += li;
	}
	ds += day;
	cout << setfill('0') << setw(3) <<ds<< setw(4) << year<<endl;
}

void Date::displayEDY(){//用June 3，1938格式打印
	cout << monthE[month - 1] << " " << setfill('0') << setw(2) << day << setw(4) << year << endl;
}

void Date::print(){
	cout << month << '/' << day << '/' << year;
}

void Date::nextDay(){
	day++;
	int li = limit[month-1];
	if (month == 1){//二月份
		if (isRunYear())//如果是闰年，则li变为29
			li++;
	}
	if (day > li){
		day = 1;
		month++;
		if (month > 12){
			month = 1;
			year++;
		}
	}
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