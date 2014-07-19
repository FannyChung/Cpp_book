//用递归找到最小值
#include<iostream>
using namespace std;

const int SIZE=11;

void exchange(int &i,int &j){
	int temp=i;
	i=j;
	j=temp;
}

int recursiveMin(int a[],int i,int j){
	if(i==j||i>j)
		return a[j];
	else
	{
		if ((a[i]<a[i+1])){
			cout<<"a[i]="<<a[i]<<"   a[i+1]="<<a[i+1]<<endl;
			exchange(a[i],a[i+1]);
			cout<<"a[i]="<<a[i]<<"   a[i+1]="<<a[i+1]<<endl;
		}
		if(a[j]<a[j-1]){
			cout<<"a[j-1]="<<a[j-1]<<"   a[j]="<<a[j]<<endl;
			exchange(a[j-1],a[j]);
			cout<<"a[j-1]="<<a[j-1]<<"   a[j]="<<a[j]<<endl;
		}

		for (int k = i; k <= j; k++)
		{
			cout<<a[k]<<'\t';
		}
		cout<<endl;
		return recursiveMin(a,i+1,j-1);
	}
}

int main(){
	
	int a[SIZE]={4,2,6,8,1,9,5,3,2,5,5};
	for (int i = 0; i < SIZE; i++)
	{
		cout<<a[i]<<'\t';
	}

	cout<<"最小值是："<<recursiveMin(a,0,SIZE-1);
	cin>>a[0];
}