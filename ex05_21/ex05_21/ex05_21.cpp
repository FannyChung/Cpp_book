// ex05_21.cpp : Defines the entry point for the console application.
//��switch�����㲻ͬ����Ա���Ĺ���

#include "stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int type;
	double salary;
	cout<<"������Ա�����ʹ��룺��1����2Сʱ����3Ӷ�𹤣�4�Ƽ���,0��������";
	cin>>type;
	while(type!=0){
		switch (type)
		{
		case 1:
			cout<<"�����뾭��ÿ�ܵĹ��ʣ�";
			cin>>salary;
			break;
		case 2:
			cout<<"������Сʱ����ÿСʱ���ʺ͹���ʱ��";
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
			cout<<"������Ӷ�𹤵�����ë����";
			cin>>maoli;
			salary=250+maoli*0.057;
			break;
		case 4:
			int jianshu;
			int perJian;
			cout<<"�����������ÿ���Ĺ��ʣ�";
			cin>>jianshu>>perJian;
			salary=jianshu*perJian;
		default:
			break;
		}
		cout<<"�����ǣ�"<<salary<<endl;
		cout<<endl;
	    cout<<"������Ա�����ʹ��룺��1����2Сʱ����3Ӷ�𹤣�4�Ƽ���,0��������";
	    cin>>type;
	}
	return 0;
}

