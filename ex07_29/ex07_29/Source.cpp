//Ѱ������
#include<iostream>
using namespace std;

int main(){
	const int SIZE=1000;
	int a[SIZE];
	//��ʼ��
	for (int i = 0; i < SIZE; i++)
	{
		a[i]=1;
	}

	for (int i = 2; i <= sqrt(SIZE); i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			int k=j%i;
			if(k);
			else
			{
				a[j]=0;
			}
 		}
	}
	//��ӡ����
	for (int i = 2; i < SIZE; i++)
	{
		if(a[i])
			cout<<i<<'\t';
	}
	cin>>a[0];
}