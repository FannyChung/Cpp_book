/*���������������Լ��(The greatest common divisor, GCD)����Ϊ������������
��������������дgcd �������������������������Լ����
*/
#include<iostream>
using namespace std;

void gcd(int,int,int&);

int main(){
	int s;
	int& result=s;
	gcd(44,36,result);
	cout<<"���Լ����"<<s<<endl;
	getchar();
	return 0;
}

void gcd(int a,int b,int& result){
	if(a<b){                //ʹa>b
		int temp=b;
		b=a;
		a=temp;
	}
	int m=1;
	while (m!=0)
	{
		cout<<a<<'\t';
		m=a%b;
		a=b;
		b=m;
		cout<<a<<'\t'<<b<<'\n';
	}
	result=a;
}