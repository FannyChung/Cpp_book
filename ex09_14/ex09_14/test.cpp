#include<iostream>
#include<ctime>
using namespace std;
#include"HugeInteger.h"

int main(){
	
	int a1=89707;
	HugeInteger h1(a1);
	h1.output();

	char a2[41];
	cout<<"\n输入第一个大整数：";
	cin>>a2;
	HugeInteger h2(a2);
	h2.output();

	char a3[41];
	cout<<"\n输入第二个大整数：";
	cin>>a3;
	HugeInteger h3(a3);
	h3.output();

	cout<<endl;
	h2.output();
	cout<<" - ";
	h1.output();
	cout<<" = ";
	h2.subtract(h1).output();
	cout<<endl;


	cout << endl;
	h2.output();
	cout << " + ";
	h1.output();
	cout << " = ";
	h2.add(h1).output();
	cout << endl;

	cout<<"比较：\n";
	HugeInteger h[6];
	h[0]=h1;
	h[1]=h2;
	h[2]=h3;
	HugeInteger x1(0);
	HugeInteger x3(0);
	HugeInteger x2(5);
	h[3]=x1;
	h[4]=x3;
	
	h[5]=5;

	for (int i = 0; i < 5; i++)
	{
		if(h[i].isEqualTo(h[i+1])){
			h[i].output();
			cout<<" is equal to ";
			h[i+1].output();
			cout<<endl;
			cout<<endl;
		}

		if(h[i].isNotEqualTo(h[i+1])){
			h[i].output();
			cout<<" is not equal to ";
			h[i+1].output();
			cout<<endl;
			cout<<endl;
		}

		if(h[i].isGreaterThan(h[i+1])){
			h[i].output();
			cout<<" is greater than ";
			h[i+1].output();
			cout<<endl;
			cout<<endl;
		}

		if(h[i].isGreaterThanOrEqualTo(h[i+1])){
			h[i].output();
			cout<<" is greater than or equal to ";
			h[i+1].output();
			cout<<endl;
			cout<<endl;
		}

		if(h[i].isLessThan(h[i+1])){
			h[i].output();
			cout<<" is less than ";
			h[i+1].output();
			cout<<endl;
			cout<<endl;
		}

		if(h[i].isLessThanOrEqualTo(h[i+1])){
			h[i].output();
			cout<<" is less than or equal to ";
			h[i+1].output();
			cout<<endl;
			cout<<endl;
		}

		if(h[i].isZero()){
			h[i].output();
			cout<<" is zero \n\n";
		}
	}
	return 0;
}