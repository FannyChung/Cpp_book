#include<iostream>
using namespace std;
//具有有效性确认的考试结果统计（1 pass,2 fail）
int main(){
	int pass=0;
	int fail=0;
	int i=1;
	int result;
	while(i<=10){
		cout<<"Enter the result:(1 = pass, 2 = fail):";
		cin>>result;
		if(result==1||result==2){
			i++;
			if(result==1)
				pass++;
			else
				fail++;
		}else{
			cout<<"Erro input!"<<endl;
		}
	}
	cout<<"Passed:"<<pass<<endl;
	cout<<"Failed:"<<10-pass<<endl;

	if(pass>=8)
		cout<<"Bonus to instructor!"<<endl;
	return 0;
}