//用于判断三个int（500）以内的边能否组成三角形
#include<iostream>
using namespace std;

int main(){
	cout<<"边1\t边2\t直角边"<<endl;
	for (int i = 1; i < 354; i++)
	{
		for (int j = i; j < 500; j++)
		{
			for (int k = j; k <= 500; k++)
			{
				if((k*k==i*i+j*j)&&(k<=500))
				cout<<i<<"\t"<<j<<"\t"<<k<<endl;
			}
		}
	}
}