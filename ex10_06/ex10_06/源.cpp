/*
��ǿ��Date�࣬�������������һ���е���������Date
*/

#include"Date.h"
#include<iostream>
using namespace std;
int main(){
	Date d(128, 1900);
	for (int i = 0; i < 90; i++)
	{
		d.print();
		d.nextDay();
		cout << endl;
	}
	Date invaDate(366, 1900);
	invaDate.print();
	return 0;
}