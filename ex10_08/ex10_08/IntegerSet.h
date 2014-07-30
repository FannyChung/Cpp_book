#include<vector>
#include<iostream>
using namespace std;

#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet//使用bool的vector表示的数组
{
public:
	IntegerSet();//将所有元素设置为false
	IntegerSet(int*, int);//接受整数数组及其大小
	IntegerSet unionOfSets(const IntegerSet&)const;//并集，∪
	IntegerSet intersectionOfSets(const IntegerSet&)const;//交集，∩
	bool insertElement(int);
	bool deleteElement(int);
	void printSet()const;
	bool isEqualTo(const IntegerSet&)const;

private:
	vector<int> v1;//vector 除了要头文件还有std
};


#endif