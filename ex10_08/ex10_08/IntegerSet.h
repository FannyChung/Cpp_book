#include<vector>
#include<iostream>
using namespace std;

#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet//ʹ��bool��vector��ʾ������
{
public:
	IntegerSet();//������Ԫ������Ϊfalse
	IntegerSet(int*, int);//�����������鼰���С
	IntegerSet unionOfSets(const IntegerSet&)const;//��������
	IntegerSet intersectionOfSets(const IntegerSet&)const;//��������
	bool insertElement(int);
	bool deleteElement(int);
	void printSet()const;
	bool isEqualTo(const IntegerSet&)const;

private:
	vector<int> v1;//vector ����Ҫͷ�ļ�����std
};


#endif