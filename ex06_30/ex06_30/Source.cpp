/*1.��дһ���������ж�һ�����Ƿ�Ϊ������
2.�ڳ����е�������������ҳ�2 ��10000 �����Χ�����е��������Ҵ�ӡ������
����ȷ���ҳ���������֮ǰ������˶��ٴ��أ�
3.������������Ϊ�ж�һ�����Ƿ�Ϊ�����Ĳ��Դ�������Ϊn/2����ʵ������Ҫ�Ĳ��Դ�
��������ֻ��n ��ƽ����������Ϊʲô�أ����±�д������򣬷ֱ��������ַ�ʽ�����У�
���۲�����ܵĸĽ���
*/
#include<iostream>
using namespace std;

bool isPrimeNum(int);

int main(){
	int j=0;
	for (int i = 2; i <= 10000; i++)
	{
		
		if(isPrimeNum(i)){
			cout<<i<<'\t';
			j++;
			if(j%10==0)
			cout<<endl;
		}
	}
	cout<<"�ܹ���"<<j<<"��������\n";
	getchar();
	return 0;
}

bool isPrimeNum(int n){
	for (int i = 2; i <= sqrt(n); i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}