/*���ݹ鷨�����Լ������дһ������gcd����������x ��y �����Լ��������ݹ����£�
����y=0��gcd( x,y )=x������gcd( x, y )= gcd( y, x % y ).[ע������
���㷨��x �������y��]
*/
#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
	int a,b;
	cout<<"������������";
	cin>>a>>b;
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	cout<<"����ǣ�"<<gcd(a,b);
	cin>>a;
}

int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}