/*1.编写一个函数来判断一个数是否为质数。
2.在程序中调用这个函数，找出2 至10000 这个范围内所有的质数并且打印出来。
在你确认找出所有质数之前你测试了多少次呢？
3.最初，你可能认为判断一个数是否为质数的测试次数上限为n/2，但实际你需要的测试次
数的上限只是n 的平方根。这是为什么呢？重新编写这个程序，分别在这两种方式下运行，
并观察出性能的改进。
*/
#include<iostream>
using namespace std;

bool isPrimeNum(int);

int main(){
	int j=0;
	for (int i = 2; i <= 10000; i++)
	{
		
		if(isPrimeNum(i)){
			cout<<i<<'\t';
			j++;
			if(j%10==0)
			cout<<endl;
		}
	}
	cout<<"总共有"<<j<<"个质数。\n";
	getchar();
	return 0;
}

bool isPrimeNum(int n){
	for (int i = 2; i <= sqrt(n); i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}