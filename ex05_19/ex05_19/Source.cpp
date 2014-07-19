#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double pi=0;
	cout<<"i\tpi\tx"<<endl;
	double x;
	for (int i = 1; i <= 1000; i++)
	{
		x=1/static_cast<double>(2*i-1);
		pi+=pow(-1,i-1)*4*x;
		cout<<i<<"\t"<<pi<<"\t"<<x<<endl;
	}
}