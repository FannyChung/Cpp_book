//通过指针排序数组
#include<iostream>
using namespace std;

void sort(int *const,const int);
void swap1(int a,int b){
	int x=a;
	a=b;
	b=x;
}
void swap2(int a,int b){
	int *temp=&a;
	a=b;
	b=*temp;
}
void swap4(int* a,int *b){
	int *temp=a;
	a=b;
	b=temp;
}
void swap5(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void swap3(int *const,int *const);


int main(){
	int a[]={1,4,3,5,7,22,4,5,8};
/*	int size=sizeof a/sizeof(a[0]);
	for (int i = 0; i < size; i++)
	{
		cout<<a[i]<<'\t';
	}
	cout<<endl;

	sort(a,size);
	for (int i = 0; i < size; i++)
	{
		cout<<a[i]<<'\t';
	}
	cout<<endl;
	*/
	int i=1;
	int j=2;
	cout<<"swap1(int,int) temp-----------------"<<endl;
	swap1(i,j);
	cout<<i<<'\t'<<j<<endl;
	i=1;j=2;
	cout<<"swap2(int,int) temp*-----------------"<<endl;
	swap2(i,j);
	cout<<i<<'\t'<<j<<endl;
	i=1;j=2;
	cout<<"swap3(int*,int*) temp-----------------"<<endl;
	swap3(&i,&j);
	cout<<i<<'\t'<<j<<endl;
	i=1;j=2;
	cout<<"swap4(int*,int*) temp*-----------------"<<endl;
	swap4(&i,&j);
	cout<<i<<'\t'<<j<<endl;
	i=1;j=2;
	cout<<"swap5(int&,int&) temp-----------------"<<endl;
	swap5(i,j);
	cout<<i<<'\t'<<j<<endl;
	cin>>a[0];
}

void sort(int *const array,const int size){
	for (int i = 0; i < size; i++)             //冒泡
	{
		for (int j = i; j < size; j++)
		{
			if (*(array+i)>*(array+j))
				swap3(array+i,array+j);
		}
	}
}
void swap3(int *const i,int *const j){
	int temp=*i;
	*i=*j;
	*j=temp;
}