/*һ����ȫ����������һ�������������������ӣ����� 1 �����������������ĺ�ǡ
�õ��ڸ��������ٸ����ӣ�6 ��һ����ȫ������Ϊ6=1+2+3����дһ������perfect(bool
���ͷ���ֵ)���������жϸú�������ʽ�����Ƿ�Ϊһ����ȫ�����ڳ����е��øú�������
��1 ��1000 �����Χ�����е���ȫ������ӡ���������ҽ���Щ�ҳ�������ȫ�������Ӵ�ӡ
����������ȷ�ϸ���ȷʵ��һ����ȫ���������ͨ��������ֵ��1000 ���ϵ���ȫ������ս
��������������
*/
#include"iostream"
using namespace std;

bool perfect(int);

int main(){

 	for (int i = 1; i <= 4000; i++)
	{
		if(perfect(i)){
			cout<<i<<"     ";
			for (int j = 1; j < i; j++)
			{
 				if(i%j==0)
					cout<<j<<" ";
			}
			cout<<endl;
		}
		
	}
	getchar();
	return 0;
}

bool perfect(int x){
	int a=x;
	for (int i = 1; i < x; i++)
	{
		if(x%i==0)
			a-=i;
	}
	if(a==0)
		return true;
	else
		return false;
}