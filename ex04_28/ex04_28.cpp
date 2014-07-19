//”√¿¥œ‘ æ∆Â≈Ã
#include<iostream>
using namespace std;

int main(){
	for(int i=0;i<8;i++)
		if(i%2){
			for(int j=0;j<8;j++)
			cout<<"* ";
			cout<<endl;
		}else{
			cout<<' ';
			for(int j=0;j<8;j++)
				cout<<"* ";
			cout<<endl;
		}
	return 0;
}