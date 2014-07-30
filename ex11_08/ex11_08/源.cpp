#include"Complex.h"
#include<iostream>
using namespace std;

int main(){
	Complex x;
	Complex y(4.3,8.2);
	Complex z(3.3,1.1);

	cout << "x: ";//输出
	cout << x<<endl;
	cout << "y; ";
	cout << y << endl;
	cout << "z: ";
	cout << z << endl;

	x = y - z;//减
	cout << "x = y - z: " << endl;
	cout << x;
	cout << "=";
	cout << y;
	cout << "- ";
	cout << z;
	cout << endl;

	x = y + z;//加
	cout << "x = y + z: " << endl;
	cout << x;
	cout << "=";
	cout << y;
	cout << "+ ";
	cout << z;
	cout << endl;

	cin >> x;//输入
	cout << x;

	x = y * z;//乘法
	cout << "x = y * z: " << endl;
	cout << x;
	cout << "=";
	cout << y;
	cout << "* ";
	cout << z;
	cout << endl;

	if (x != y){
		cout << "x与y不想等" << endl;
	}
	else
	{
		cout << "x与y想等" << endl;
	}

	x = z;
	if (x != z){
		cout << "x与z不想等" << endl;
	}
	else
	{
		cout << "x与z想等" << endl;
	}

	return 0;
}