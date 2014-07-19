#include<iostream>
using namespace std;

int main(){
	int n;
	int pro=1;
	cout<<"enter the number:";
	cin>>n;
	do{
		pro*=n;
		cout<<n<<"*";
		n--;
		
	}while(n>0);
	cout<<"\nresult is "<<pro<<endl;
	return 0;
}