/*��a����дһ���ǵݹ麯��fibonacci( n )�����n ��쳲��������е�ֵ��
��b��ȷ���ܴ�ӡ�������ϵͳ�е�����쳲��������е�����ֵ���޸ģ�a�����ֵĳ���
ʹ��double ���͵�ֵ����int �͵�ֵ������ͷ���쳲��������е�ֵ������ʹ�����޸Ĺ���
������ʵ�֣�b�����ֵĹ��ܡ�

int  �����е�48
double 1000����
*/
#include<iostream>
using namespace std;

int fibonacci(int);
double fibonacci(double);

int main(){
	int x;
	do
	{
		cout<<fixed;
	cout<<"�������ֵ��";
	cin>>x;
	for (int i = 0; i <= x; i++)
	{
		double i1=i;
		cout<<"fibonacci("<<i<<")="<<fibonacci(i1)<<endl;
	}
	} while (x!=-1);
	
	cin>>x;
}
int fibonacci(int n){
	int a=0;
	int b=1;
	if(n==0)
		return a;
	else if(n==1)
		return b;
	else
	{
		for (int i = 2; i <= n; i++)
		{
			int temp=a+b;
			b=a;
			a=temp;
		}
		return a;
	}
}

double fibonacci(double n){
	double a=0;
	double b=1;
	if(n==0)
		return a;
	else if(n==1)
		return b;
	else
	{
		for (int i = 2; i <= n; i++)
		{
			double temp=a+b;
			b=a;
			a=temp;
		}
		return a;
	}
}