/*�����Ϻͻ����¶ȣ�ʵ�����¹��ܣ����ͣ���
���Ϻ���������һ�������¶ȵ�ֵ����
���¶�ֵ�����Ϻ���������һ�������¶ȵ�ֵ�Ļ����¶�ֵ��
ʹ����Щ������дһ�������ӡ���ͼ��
ͼ����ʾ����������0 ��100 �ȵ�ֵ�Ļ����¶�ֵ�������л���32 ��212 ��
��ֵ�������¶�ֵ����һ���ڱ��ֿɶ��Ե�����¾����ܼ����������������ʽ��ӡ���һ
����������ı��
*/
#include<iostream>
using namespace std;

int getCelsius(int);
int getFahrenheit(int);

int main(){
	cout<<"���ϵ�����\n";
	cout<<"����\t����\t����\t����\t����\t����\t����\t����\n";
	for (int i = 0; i < 25; i++){
		for (int j = 0; j < 4; j++)
		{
			cout<<i+j*25<<'\t'<<getFahrenheit(i+j*25)<<'\t';
		}
		cout<<endl;
	}
	cout<<"���ϵ�����\n";
	cout<<"����\t����\t����\t����\t����\t����\t����\t����\n";
	for (int i = 32; i < 77; i++){
		for (int j = 0; j < 4; j++)
		{
			cout<<i+j*45<<'\t'<<getCelsius(i+j*45)<<'\t';
		}
		cout<<endl;
	}
	int x;
	cin>>x;
}

int getCelsius(int f){
	return (f-32)*5/9;
}

int getFahrenheit(int c){
	return c*9/5+32;
}