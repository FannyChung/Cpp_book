#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int number;
	cout<<"Enter a number composed by 0 and 1:";
	cin>>number;

	int sum=0;
	int c=number%10;
	int i=0;
	do{
		if(number==0)
			break;
		number=number/10;//quwei
		sum+=c*pow(2,i);
		i++;
		c=number%10;//1 or 0
	}while(c==0||c==1);

	cout<<"Its "<<sum<<endl;
	return 0;
}