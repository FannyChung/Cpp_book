//ººÅµËþ
#include<iostream>
using namespace std;

void moveHanoi(int n,int a,int b,int c){
	if(n==1){
		cout<<a<<"->"<<c<<endl;
		return;
	}
	else{
		moveHanoi(n-1,a,c,b);
		moveHanoi(1,a,b,c);
		moveHanoi(n-1,b,a,c);
	}
}
int main(){
	moveHanoi(5,1,2,3);
	int x;
	cin>>x;
}

