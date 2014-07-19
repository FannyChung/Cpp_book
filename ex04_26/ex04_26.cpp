//回文数的判断
#include<iostream>
using namespace std;

int main(){
	int number;
	cout<<"Enter a five-digit integer:";
	cin>>number;

	if(((number/10000)==(number%10))&&((number%10000/1000)==(number%100/10))){
			cout<<"It is a huiwenshu"<<endl;
	}else
		cout<<"It is not a huiwenshu"<<endl;
	return 0;
}