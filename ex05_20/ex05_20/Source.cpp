//�����ж�����int��500�����ڵı��ܷ����������
#include<iostream>
using namespace std;

int main(){
	cout<<"��1\t��2\tֱ�Ǳ�"<<endl;
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