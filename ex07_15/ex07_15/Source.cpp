/*����20��10-100�����������Ч�ԣ����벻�ظ�������*/
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
				cout<<"�ظ�������"<<endl;
			}else
			{
				a[i]=x;
				i++;
			}
		}else
		{
			cout<<"���Ϸ�����"<<endl;
		}
	} while (i<20);
	
	cout<<"���ظ�����ֵ�ǣ�"<<endl;
	for (int i = 0; i < 20; i++)
	{
		cout<<a[i]<<'\t';
	}
	cout<<endl;
	cin>>x;
}