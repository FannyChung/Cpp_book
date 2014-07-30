#include"DoubleScriptedArray.h"

DoubleScriptedArray::DoubleScriptedArray(int r, int c)//��������������ʼ��
{
	row = r;
	column = c;
	ptr = new int[c*r];
}

int& DoubleScriptedArray::operator()(int r, int c){//ȡֵ������Ϊ��ֵ��
	//cout << r << " , " << c << "��Ϊ��ֵ" << endl;
	if (r >= row || r < 0 || c >= column || c < 0){
		cout << "Error subscripte ��" << r << " , " << c << ") out of range( " << row << " , " << column << " )" << endl;
		exit(-1);
	}
	return ptr[c + r*column];
}
const int& DoubleScriptedArray::operator()(int r, int c)const{//ȡֵ��ֻ����Ϊ��ֵ��
	//cout << r << " , " << c << "��Ϊ��ֵ" << endl;
	if (r >= row || r < 0 || c >= column || c < 0){
		cout << "Error subscripte ��" << r << " , " << c << ") out of range( " << row << " , " << column << " )" << endl;
		exit(-1);
	}
	return ptr[c + r*column];
}
bool DoubleScriptedArray::operator == (const DoubleScriptedArray& other)const{//�ж����
	if (row != other.row || column != other.column){
		cout << "������������ͬ" << endl;
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

bool DoubleScriptedArray::operator != (const DoubleScriptedArray& other)const{//�жϲ���
	return !operator==(other);
}
DoubleScriptedArray DoubleScriptedArray::operator = (const DoubleScriptedArray& other){//��ֵ
	if (&other != this){//�������Ҹ�ֵ
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
ostream& operator<<(ostream& out, const DoubleScriptedArray& obj){//���
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
istream& operator>>(istream& input, DoubleScriptedArray& obj){//����
	for (int i = 0; i < obj.row; i++)
	{
		for (int j = 0; j < obj.column; j++)
		{
			input >> obj.ptr[i*obj.column+j];
		}
	}
	return input;
}