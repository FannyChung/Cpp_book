//�ݹ��жϻ���
#include<iostream>
#include<ctype.h>
#include<string>
using namespace std;

bool jugdePara(string s,int i,int j){
	if((i==j)||(i>j)){
		return true;
	}else
	{
		while (!isalpha(s[i]))
		{
			i++;
		}
	
		while (!isalpha(s[j]))
		{
			j--;
		}

		if(s[i]!=s[j])
			return false;
		else
		{
			i++;
			j--;
			for (int k = i; k <= j; k++)
			{
				cout<<s[k];
			}
			cout<<endl;
			return jugdePara(s,i,j);
		}
	}
}

int main(){
	
	string s;
	char ctn='y';
	while (ctn=='y')
	{
		cout<<"�����ַ���"<<endl;

		getline(cin,s);
		
		cout<<s<<endl;
		

		if(jugdePara(s,0,s.length()-1))
			cout<<"�ǻ��Ĵ�"<<endl;
		else
			cout<<"���ǻ��Ĵ�"<<endl;
	

		cout<<"�Ƿ������y or n��:";
		cin>>ctn;
	}
	
}