#ifndef TIME_H
#define TIME_H
class Time
{
public:
	Time(int=0,int=0,int=0);
	~Time();
	void setHour(int);
	void setMinute(int);
	void setSecond(int);
	int getHour();
	int getMinute();
	int getSecond();
	void displayStandard();
	void tick();

private:
	int hour;
	int minute;
	int second;
};

#endif