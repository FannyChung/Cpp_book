/*通过rand置两个色子，36000次，统计和的次数和频率*/
#include<iostream>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));
	int a[13]={0};

	for (int i = 0; i < 36000; i++)
	{
		int i1=1+rand()%6;
		int i2=1+rand()%6;
		
		a[i1+i2]++;
	}
	float expect[13]={0};
	for (int i = 2; i < 13; i++)
	{
		if(i<=7)
			expect[i]=static_cast<float>(i-1)/0.36;
		else
			expect[i]=static_cast<float>(13-i)/0.36;
	}
	cout<<"sum\tTotal\tExpected\tActual"<<endl;
	for (int i = 2; i <= 12; i++)
	{
		cout<<i<<'\t'<<a[i]<<'\t'<<expect[i]<<"%"<<'\t'<<static_cast<float>(a[i])/360<<"%"<<endl;
	}
	cin>>a[0];
}