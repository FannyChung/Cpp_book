/*
(1)��дһ��������rand ������������һλ��������Ȼ�������������⣺
How much is 6 times 7?
Ȼ��ѧ������𰸣�������ѧ���Ĵ𰸡������ȷ�����ӡ��very good����Ȼ��
�����һ���˷����⡣�������ȷ�����ӡ"No. Please try again."��Ȼ����
ѧ���ظ��ش�������⣬ֱ�����

��2��CAI �����г��ֵ�һ��������ѧ������ƣ�͡�Ҫ����������⣬
���Ըı������ĶԻ�������ѧ����ע��
�����޸���ϰ(1)�ĳ���ʹÿ��ѧ�����ʱ�ʹ��ʱ��ӡ��ͬ�����ʹ���������switch

��3��ͳ��ѧ����
�Ժʹ��ı�����ÿ�����һ�λش���ᣩ��ѧ������10 ��󣬳����������
�ʡ������������75����������ӡ"Please ask your instructor for extra
help"�����������Nice work!����Ȼ����ֹ��*/
#include<iostream>
#include<ctime>
using namespace std;


int main(){
	int a;
	int b;
	int result;
	int fnum=0;
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
	a=rand()%10;
	b=rand()%10;
	cout<<a<<"����"<<b<<"�Ľ��Ϊ";
	cin>>result;

	if(result==a*b){
		
		int i=rand()%4;
		switch (i)
		{
		case 0:
			cout<< "Very good��";
			break;
		case 1:
			cout<< "Excellent��";
			break;
		case 2:
			cout<< "Nice work��";
			break;
		case 3:
			cout<< "Keep up the good work��";
			break;
		default:
			break;
		}
	}
	else{
		
		int i=rand()%4;
		switch (i){
		case 0:
			cout<< "���ԣ����ٳ��ԣ�";
			break;
		case 1:
			cout<< "���ˣ�����һ�Σ�";
			break;
		case 2:
			cout<< "��Ҫ������";
			break;
		case 3:
			cout<< "������������";
			break;
		}
		fnum++;
	}

	cout<<endl;
	}
	
	if(fnum>=7)
		cout<<"���ú�!"<<endl;
	else
		cout<<"������ʦ��̡�"<<endl;
	cin>>fnum;
}
