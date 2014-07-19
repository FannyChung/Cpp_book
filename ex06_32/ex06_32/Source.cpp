/*两个整型数的最大公约数(The greatest common divisor, GCD)定义为最大的整除这两
个整数的数。编写gcd 函数，返回两个整型数的最大公约数。
*/
#include<iostream>
using namespace std;

void gcd(int,int,int&);

int main(){
	int s;
	int& result=s;
	gcd(44,36,result);
	cout<<"最大公约数是"<<s<<endl;
	getchar();
	return 0;
}

void gcd(int a,int b,int& result){
	if(a<b){                //使a>b
		int temp=b;
		b=a;
		a=temp;
	}
	int m=1;
	while (m!=0)
	{
		cout<<a<<'\t';
		m=a%b;
		a=b;
		b=m;
		cout<<a<<'\t'<<b<<'\n';
	}
	result=a;
}