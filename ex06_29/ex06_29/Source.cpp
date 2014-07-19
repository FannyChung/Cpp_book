/*一个完全数是这样的一个整数，它的所有因子（包含 1 但不包含该数本身）的和恰
好等于该数本身。举个例子，6 是一个完全数，因为6=1+2+3。编写一个函数perfect(bool
类型返回值)，用它来判断该函数的形式参数是否为一个完全数。在程序中调用该函数，找
出1 至1000 这个范围内所有的完全数并打印出来。并且将这些找出来的完全数的因子打印
出来，用来确认该数确实是一个完全数。你可以通过测试数值在1000 以上的完全数来挑战
你计算机的能力。
*/
#include"iostream"
using namespace std;

bool perfect(int);

int main(){

 	for (int i = 1; i <= 4000; i++)
	{
		if(perfect(i)){
			cout<<i<<"     ";
			for (int j = 1; j < i; j++)
			{
 				if(i%j==0)
					cout<<j<<" ";
			}
			cout<<endl;
		}
		
	}
	getchar();
	return 0;
}

bool perfect(int x){
	int a=x;
	for (int i = 1; i < x; i++)
	{
		if(x%i==0)
			a-=i;
	}
	if(a==0)
		return true;
	else
		return false;
}