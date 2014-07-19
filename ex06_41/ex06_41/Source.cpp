/*（a）编写一个非递归函数fibonacci( n )计算第n 项斐波那契数列的值。
（b）确定能打印输出在你系统中的最大的斐波那契数列的整型值。修改（a）部分的程序，
使用double 类型的值代替int 型的值来计算和返回斐波那契数列的值，并且使用这修改过的
程序来实现（b）部分的功能。

int  最多进行到48
double 1000以上
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
	cout<<"输入测试值：";
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