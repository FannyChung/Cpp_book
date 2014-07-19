/*（递归法求最大公约数）编写一个函数gcd（），返回x 和y 的最大公约数，定义递归如下：
假如y=0，gcd( x,y )=x；否则，gcd( x, y )= gcd( y, x % y ).[注：对于
此算法，x 必须大于y。]
*/
#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
	int a,b;
	cout<<"输入两个数：";
	cin>>a>>b;
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	cout<<"结果是："<<gcd(a,b);
	cin>>a;
}

int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}