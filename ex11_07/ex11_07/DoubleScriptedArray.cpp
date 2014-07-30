#include"DoubleScriptedArray.h"

DoubleScriptedArray::DoubleScriptedArray(int r, int c)//用行数、列数初始化
{
	row = r;
	column = c;
	ptr = new int[c*r];
}

int& DoubleScriptedArray::operator()(int r, int c){//取值（可作为左值）
	//cout << r << " , " << c << "作为左值" << endl;
	if (r >= row || r < 0 || c >= column || c < 0){
		cout << "Error subscripte （" << r << " , " << c << ") out of range( " << row << " , " << column << " )" << endl;
		exit(-1);
	}
	return ptr[c + r*column];
}
const int& DoubleScriptedArray::operator()(int r, int c)const{//取值（只能作为右值）
	//cout << r << " , " << c << "作为右值" << endl;
	if (r >= row || r < 0 || c >= column || c < 0){
		cout << "Error subscripte （" << r << " , " << c << ") out of range( " << row << " , " << column << " )" << endl;
		exit(-1);
	}
	return ptr[c + r*column];
}
bool DoubleScriptedArray::operator == (const DoubleScriptedArray& other)const{//判断相等
	if (row != other.row || column != other.column){
		cout << "行数、列数不同" << endl;
		return false;
	}
	for (int i = 0; i < column*row; i++)
	{
		if (ptr[i] != other.ptr[i]){
			return false;
		}
	}
	return true;
}

bool DoubleScriptedArray::operator != (const DoubleScriptedArray& other)const{//判断不等
	return !operator==(other);
}
DoubleScriptedArray DoubleScriptedArray::operator = (const DoubleScriptedArray& other){//赋值
	if (&other != this){//避免自我赋值
		if (row*column != other.row*other.column){
			delete[]ptr;
			row = other.row;
			column = other.column;
			ptr = new int[row*column];
		}

		for (int i = 0; i < row*column; i++)
		{
			ptr[i] = other.ptr[i];
		}
	}
	return *this;
}
ostream& operator<<(ostream& out, const DoubleScriptedArray& obj){//输出
	for (int i = 0; i < obj.row; i++)
	{
		for (int j = 0; j < obj.column; j++)
		{
			out << obj.ptr[i*obj.column + j] << '\t';
		}
		out << endl;
	}
	return out;
}
istream& operator>>(istream& input, DoubleScriptedArray& obj){//输入
	for (int i = 0; i < obj.row; i++)
	{
		for (int j = 0; j < obj.column; j++)
		{
			input >> obj.ptr[i*obj.column+j];
		}
	}
	return input;
}