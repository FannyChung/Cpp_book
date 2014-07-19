//¥Ú”°¡‚–Œ
#include<iostream>
using namespace std;

int main(){
	int x;
	for (x = 1; x <=15; x+=2)
	{
		for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= abs(x/2+1-i); j++)
		{
			cout<<" ";
		}
		if(i<=x/2+1)
		for (int k = 1; k <= 2*i-1; k++)
		{
			cout<<"*";
		}
		else
		{
			for (int k = 1; k <= (2*x+1)-2*i; k++)
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
		cout<<endl;
	}
}