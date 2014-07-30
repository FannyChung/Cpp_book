#include<iostream>
using namespace std;

#ifndef DoubleScriptedArray_H
#define DoubleScriptedArray_H

class DoubleScriptedArray//˫�±� �࣬��˫�±��������
{
	friend ostream& operator<<(ostream&, const DoubleScriptedArray&);
	friend istream& operator>>(istream&, DoubleScriptedArray&);
public:
	DoubleScriptedArray(int=1,int=1);
	int& operator()(int, int);//��Ϊ��ֵ
	const int&operator()(int, int)const;//��Ϊ��ֵ�������޸ģ�
	bool operator==(const DoubleScriptedArray&)const;//�ж����
	bool operator!=(const DoubleScriptedArray&)const;//�жϲ����
	DoubleScriptedArray operator=(const DoubleScriptedArray&);//��ֵ

private:
	int row;
	int column;
	int *ptr;
};


#endif