//判断三个非0double是否可以组成三角形
#include<iostream>
using namespace std;

int main(){
	int i=0;
	int x;
	int a[3];
	int sum=0;
	int largest=0;
	while(i<3){
		cout<<"enter the number:";
		cin>>a[i];
		if(a[i]<0){
			cout<<"erro input!"<<endl;
		}else{
			
			sum+=a[i];
			if(largest<a[i])
				largest=a[i];

			i++;
		}
	}
//	cout<<"largest "<<largest<<" sum "<<sum<<endl;
	if(2*largest-sum<0)
		cout<<"can compose of a traingle"<<endl;
	else
		cout<<"can not compose of a traingle"<<endl;
	return 0;
}