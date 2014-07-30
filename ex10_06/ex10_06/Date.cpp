#include"Date.h"
#include<iostream>
#include<iomanip>
#include<ctime>
#include<string>//-----------------ע��Ҫ����stringͷ�ļ������򣬿���<<string����
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
	bool isRun = isRunYear();//�Ƿ�������
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
		cout << "�����������󣬳�ʼ��ΪĬ��ֵ��1,1" << endl;
	}
	else
	{
		for (int  i = 0; i < 11; i++)
		{
			int li = limit[i];
			if (i == 1){//���·�
				if (isRun)//��������꣬��li��Ϊ29
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
		if (i == 1){//���·�
			if (isRunYear())//��������꣬��li��Ϊ29
				li++;
		}
		ds += li;
	}
	ds += day;
	cout << setfill('0') << setw(3) <<ds<< setw(4) << year<<endl;
}

void Date::displayEDY(){//��June 3��1938��ʽ��ӡ
	cout << monthE[month - 1] << " " << setfill('0') << setw(2) << day << setw(4) << year << endl;
}

void Date::print(){
	cout << month << '/' << day << '/' << year;
}

void Date::nextDay(){
	day++;
	int li = limit[month-1];
	if (month == 1){//���·�
		if (isRunYear())//��������꣬��li��Ϊ29
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