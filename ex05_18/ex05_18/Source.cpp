#include<iostream>
#include<bitset>
using namespace std;

int main(){
	int a;
	cout<<"十进制\t二进制\t八进制\t十六进制"<<endl;
	for (int i = 1; i < 257; i++)
	{
		bitset<sizeof(int)*3>a(i);
		cout<<dec<<i<<"\t"<<a<<"\t"<<oct<<i<<"\t"<<hex<<i<<endl;
	}
}