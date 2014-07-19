//连续打印整数2的幂,当条件为true不停执行时，输出变为0
#include<iostream>
using namespace std;

int main(){
	int i=1;
	int k=1;
	while(i<1000){
		i*=2;
		cout<<i<<"\t";
		if(k%5==0)
			cout<<endl;
		k++;
	}
	return 0;
}