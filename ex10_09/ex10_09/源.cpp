#include"Time.h"
#include<iostream>
using namespace std;

int main(){
	Time t;
	t.setHour(18).setMin(30).setSec(22);

	cout << "Universal:" << endl;
	t.printUniversal();

	cout << "\nStandard:" << endl;
	t.printStandard();

	cout << "\nNew Standard:" << endl;
	t.setTime(20, 20, 20).printStandard();
	return 0;
}