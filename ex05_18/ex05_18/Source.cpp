#include<iostream>
#include<bitset>
using namespace std;

int main(){
	int a;
	cout<<"ʮ����\t������\t�˽���\tʮ������"<<endl;
	for (int i = 1; i < 257; i++)
	{
		bitset<sizeof(int)*3>a(i);
		cout<<dec<<i<<"\t"<<a<<"\t"<<oct<<i<<"\t"<<hex<<i<<endl;
	}
}