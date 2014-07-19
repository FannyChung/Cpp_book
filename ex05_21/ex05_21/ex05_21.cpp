// ex05_21.cpp : Defines the entry point for the console application.
//用switch语句计算不同类型员工的工资

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int type;
	double salary;
	cout<<"请输入员工类型代码：（1经理，2小时工，3佣金工，4计件工,0结束）：";
	cin>>type;
	while(type!=0){
		switch (type)
		{
		case 1:
			cout<<"请输入经理每周的工资：";
			cin>>salary;
			break;
		case 2:
			cout<<"请输入小时工的每小时工资和工作时间";
			double saPer;
			int hours;
			cin>>saPer>>hours;
			if(hours<=40)
				salary=saPer*hours;
			else
				salary=saPer*40+(hours-40)*saPer*1.5;
			break;
		case 3:
			int maoli;
			cout<<"请输入佣金工的销售毛利：";
			cin>>maoli;
			salary=250+maoli*0.057;
			break;
		case 4:
			int jianshu;
			int perJian;
			cout<<"请输入件数和每件的工资：";
			cin>>jianshu>>perJian;
			salary=jianshu*perJian;
		default:
			break;
		}
		cout<<"工资是："<<salary<<endl;
		cout<<endl;
	    cout<<"请输入员工类型代码：（1经理，2小时工，3佣金工，4计件工,0结束）：";
	    cin>>type;
	}
	return 0;
}

