#include<iostream>
using namespace std;

int getsum1(int a,int b){
	int temp=a+b;
	return temp;
}

int* getsum2(int a,int b){
	int temp=a+b;
	return &temp;
}

int* getsum3(int a,int b){
	int *temp;
	int x=a+b;
	temp=&x;
	return temp;
}

int getsum4(int a,int b){
	int *temp;
	int x=a+b;
	temp=&x;
	return *temp;
}

int getsum5(int a,int b){
	int x=a+b;
	int &temp=x;
	return temp;
}

int main(){
	int i=1;int j=2;
	cout<<"1-------------------------"<<endl;
	cout<<getsum1(i,j)<<endl;
	cout<<"2-------------------------"<<endl;
	cout<<*(getsum2(i,j))<<endl;
	cout<<"3-------------------------"<<endl;
	cout<<*(getsum3(i,j))<<endl;
	cout<<"4-------------------------"<<endl;
	cout<<getsum4(i,j)<<endl;
	cout<<"5-------------------------"<<endl;
	cout<<getsum5(i,j)<<endl;
	cin>>i;
}