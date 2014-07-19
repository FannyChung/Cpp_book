//判断是否能组成一个直角三角形
#include<iostream>
using namespace std;

int main(){
	int a[3];
	int i=0;
	int largest=0;
	int sum=0;
	while(i<3){
		cout<<"enter the integer:";
		cin>>a[i];
		if(a[i]<0){
			cout<<"erro input!"<<endl;
		}else{
			if(a[i]>largest)
				largest=a[i];

			sum+=a[i]*a[i];
			i++;
		}
	}

	if(sum-largest*largest*2==0){
		cout<<"can compose a zhijiao traingle"<<endl;
	}else
		cout<<"can not"<<endl;
	return 0;
}