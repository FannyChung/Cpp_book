/*读入20个10-100的数并检查有效性，存入不重复的数。*/
#include<iostream>
using namespace std;
int a[20];
bool findInArray(int x){
	for (int i = 0; i < 20; i++)
	{
		if (x==a[i])
		{
			return true;
		}
	}
	return false;
}
int main(){
	int x;
	
	int i=0;

	cout<<"Enter 20 integers between 10 and 100";
	do
	{
		cin>>x;
		if ((x>=10)&&(x<=100)){
			if (findInArray(x))
			{
				cout<<"重复的数字"<<endl;
			}else
			{
				a[i]=x;
				i++;
			}
		}else
		{
			cout<<"不合法输入"<<endl;
		}
	} while (i<20);
	
	cout<<"不重复的数值是："<<endl;
	for (int i = 0; i < 20; i++)
	{
		cout<<a[i]<<'\t';
	}
	cout<<endl;
	cin>>x;
}