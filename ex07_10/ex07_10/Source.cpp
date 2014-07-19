#include<iostream>
using namespace std;

int main(){
	double sales;
	cout<<"输入销售人员的销售额：(-1 to end)";
	cin>>sales;
	double salary;
	int salaryRage[9]={0};

	while (sales!=-1)
	{
		salary=200+sales*0.09;
		cout<<"工资是："<<salary<<endl;
		if(salary<1000)
			salaryRage[static_cast<int>(sales*0.09/100)]++;
		else
			salaryRage[8]++;
		cout<<"输入销售人员的销售额：(-1 to end)";
		cin>>sales;
	}
	for (int i = 0; i < 9; i++)
	{
		if(i<=7)
		cout<<200+100*i<<"-"<<299+i*100<<":"<<salaryRage[i]<<endl;
		else
			cout<<"Over 1000:"<<salaryRage[i]<<endl;
	}
	cin>>salary;
}