#include<iostream>
using namespace std;

int main(){
	int count=0;
	while(count<=10){
		cout<<(count%2?"****":"++++++++")<<endl;
		count++;
	}
	return 0;
}