/*
增强的date类。
用多种格式输出日期。
*/
#include<string>
class Date
{
public:
	Date();//用ctime里的获取系统时间，赋给date
	Date(int, int);//用天数和年来初始化
	void displayDY();//用DDD YYY格式打印
	void displayEDY();//用June 3，1938格式打印
	void print();
	void nextDay();
private:
	static const int limit[12];
	static const string monthE[12];//--------------------- 缺少类型说明符 - 假定为 int。注意:  C++ 不支持默认 int
	int year;
	int month;
	int day;
	bool isRunYear();
};
