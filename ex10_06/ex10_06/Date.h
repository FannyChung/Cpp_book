/*
��ǿ��date�ࡣ
�ö��ָ�ʽ������ڡ�
*/
#include<string>
class Date
{
public:
	Date();//��ctime��Ļ�ȡϵͳʱ�䣬����date
	Date(int, int);//��������������ʼ��
	void displayDY();//��DDD YYY��ʽ��ӡ
	void displayEDY();//��June 3��1938��ʽ��ӡ
	void print();
	void nextDay();
private:
	static const int limit[12];
	static const string monthE[12];//--------------------- ȱ������˵���� - �ٶ�Ϊ int��ע��:  C++ ��֧��Ĭ�� int
	int year;
	int month;
	int day;
	bool isRunYear();
};
