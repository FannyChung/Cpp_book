/*����дһ���ݹ麯��power ( base, exponent )��������������ʱ������
base exponent
���磬power( 3, 4 ) = 3 * 3 * 3 * 3������ָ��exponent ��һ�����ڻ����0 ����
������ʾ���ݹ鲽��ʹ�ù�ϵʽ
base exponent = base �� base exponent - 1
�͵�ָ�� exponen=1 ʱ���ݹ���ֹ������������Ϊ��ʱbase1 = base
*/
#include<iostream>
using namespace std;

int power(int,int);

int main(){
	int base,exponent;
	cout<<"���������ָ����";
	cin>>base>>exponent;
	cout<<"����ǣ�"<<power(base,exponent)<<endl;
	cin>>base;
	return 0;
}

int power(int base,int exponent){
	if(exponent==1)
		return base;
	else
		return base*power(base,exponent-1);
}