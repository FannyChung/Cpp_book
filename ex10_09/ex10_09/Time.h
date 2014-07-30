#ifndef TIME_H
#define TIME_H
class Time//用秒数表示时间，接口保持不变（体会信息隐藏）
{
public:
	Time(int=0,int=0,int=0);
	Time&setTime(int, int, int);
	Time&setHour(int);
	Time&setMin(int);
	Time&setSec(int);

	int getHour()const;
	int getMin()const;
	int getSec()const;

	void printUniversal()const;
	void printStandard()const;

private:
	int sec;
};


#endif