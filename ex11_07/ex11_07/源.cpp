#include"DoubleScriptedArray.h"
#include<iostream>
using namespace std;

int main(){
	DoubleScriptedArray d1(3,5);//���Գ�ʼ��
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			d1(i, j) = rand() % 100;//���Ը�ֵ,()����
			cout << d1(i, j)<<"\t";
		}
		cout << endl;
	}
	cout << endl << endl;
	DoubleScriptedArray d2(3, 4);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			d2(i, j) = rand() % 100;
			cout << d2(i, j) <<'\t';
		}
		cout << endl;
	}
	cout << d1 << endl << endl << d2 << endl;//�������
	if (d1 == d2){//�������
		cout << "d1 == d2" << endl;
	}
	else
	{
		cout << "d1 != d2" << endl;
	}
	d1 = d2;
	if (d1 != d2){
		cout << "d1 != d2" << endl;
	}
	else
	{
		cout << "d1 == d2" << endl;
	}
	cout << d1 << endl << endl << d2 << endl;
	
	DoubleScriptedArray d3(1,2);
	cin >> d3;//����������������
	
	cout << endl << d3 << endl << endl;
	int c=d3(0, 1);//������ֵ---------------------------------��û��ʹ�ù�����������
	cout << endl << d3 << endl << endl;
	return 0;
}