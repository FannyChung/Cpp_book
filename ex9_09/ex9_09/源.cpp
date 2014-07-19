#include"DateAndTime.h"
#include<iostream>
using namespace std;

int main(){
	DateAndTime test1(12, 31, 2000, 23, 59, 59);
	for (int i = 0; i < 50; i++)
	{
		//test1.printStandard();
		test1.printUniversal();
		test1.tick();
	}
	return 0;
}