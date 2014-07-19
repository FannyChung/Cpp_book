#include<iostream>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));
	int i1;
	int i2;
	int a[7][7]={0};

	for (int i = 0; i < 36000; i++)
	{
		i1=1+rand()%6;
		i2=1+rand()%6;
		a[i1][i2]++;
	}
	cout<<" \t1\t2\t3\t4\t5\t6"<<endl;

	for (int i = 1; i < 7; i++)
	{
		cout<<i;
		for (int j = 1; j < 7; j++)
		{
			cout<<'\t'<<a[i][j];
		}
		cout<<endl;
	}
	cin>>i1;
}