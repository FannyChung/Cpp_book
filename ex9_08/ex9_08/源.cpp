/*
增强的Date类，对初始化值进行错误检测，递增函数
*/

#include"Date.h"
#include<iostream>
using namespace std;
int main(){
	Date d(1, 28,1900);
	for (int i = 0; i < 90; i++)
	{
		d.print();
		d.nextDay();
		cout << endl;
	}
	Date invaDate(49, 90, -384);
	invaDate.print();
	return 0;
}