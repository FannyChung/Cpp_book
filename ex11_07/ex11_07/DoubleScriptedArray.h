#include<iostream>
using namespace std;

#ifndef DoubleScriptedArray_H
#define DoubleScriptedArray_H

class DoubleScriptedArray//双下标 类，用双下标访问数组
{
	friend ostream& operator<<(ostream&, const DoubleScriptedArray&);
	friend istream& operator>>(istream&, DoubleScriptedArray&);
public:
	DoubleScriptedArray(int=1,int=1);
	int& operator()(int, int);//作为左值
	const int&operator()(int, int)const;//作为右值（不被修改）
	bool operator==(const DoubleScriptedArray&)const;//判断相等
	bool operator!=(const DoubleScriptedArray&)const;//判断不相等
	DoubleScriptedArray operator=(const DoubleScriptedArray&);//赋值

private:
	int row;
	int column;
	int *ptr;
};


#endif