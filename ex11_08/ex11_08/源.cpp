#include"Complex.h"
#include<iostream>
using namespace std;

int main(){
	Complex x;
	Complex y(4.3,8.2);
	Complex z(3.3,1.1);

	cout << "x: ";//���
	cout << x<<endl;
	cout << "y; ";
	cout << y << endl;
	cout << "z: ";
	cout << z << endl;

	x = y - z;//��
	cout << "x = y - z: " << endl;
	cout << x;
	cout << "=";
	cout << y;
	cout << "- ";
	cout << z;
	cout << endl;

	x = y + z;//��
	cout << "x = y + z: " << endl;
	cout << x;
	cout << "=";
	cout << y;
	cout << "+ ";
	cout << z;
	cout << endl;

	cin >> x;//����
	cout << x;

	x = y * z;//�˷�
	cout << "x = y * z: " << endl;
	cout << x;
	cout << "=";
	cout << y;
	cout << "* ";
	cout << z;
	cout << endl;

	if (x != y){
		cout << "x��y�����" << endl;
	}
	else
	{
		cout << "x��y���" << endl;
	}

	x = z;
	if (x != z){
		cout << "x��z�����" << endl;
	}
	else
	{
		cout << "x��z���" << endl;
	}

	return 0;
}