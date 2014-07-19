#ifndef DATEANDTIME_H
#define DATEANDTIME_H
class DateAndTime
{
public:
	DateAndTime(int = 1, int = 1, int = 2000, int = 0, int = 0, int = 0);
	void tick();
	void printStandard();
	void printUniversal();

private:
	int month;
	int day;
	int year;
	int hour;
	int minute;
	int second;
	
	bool isRunYear();
	int getDayLimit();
	void nextDay();
	void print();
	void Date(int = 1, int = 1, int = 2000);

	void setHour(int);
	void setMinute(int);
	void setSecond(int);
	int getHour();
	int getMinute();
	int getSecond();
	void displayStandard();
	void Time(int = 0, int = 0, int = 0);
};

#endif