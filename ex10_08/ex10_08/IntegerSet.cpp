#include"IntegerSet.h"

IntegerSet::IntegerSet()
{
	for (int i = 0; i < 100; i++)
	{
		v1.push_back(false);
	}
}
IntegerSet::IntegerSet(int a[], int size){
	
	for (int i = 0; i < 100; i++)
	{
		v1.push_back(false);
	}
	for (int i = 0; i < size; i++)
	{
		v1[a[i]] = true;
	}
}
IntegerSet IntegerSet::unionOfSets(const IntegerSet &other)const{
	IntegerSet result;
	for (int i = 0; i < 100; i++)
	{
		if (v1[i] || other.v1[i]){
			result.v1[i] = true;
		}
		else{
			result.v1[i] = false;
		}
	}
	return result;
}
IntegerSet IntegerSet::intersectionOfSets(const IntegerSet&other)const{
	IntegerSet result;
	for (int i = 0; i < 100; i++)
	{
		if (v1[i] && other.v1[i]){
			result.v1[i] = true;
		}
		else{
			result.v1[i] = false;
		}
	}
	return result;
}
bool IntegerSet::insertElement(int x){
	if (x < 0 || x >= 100){
		cout << "插入元素的范围要求在0-99之间" << endl;
		return false;
	}else{
		if (v1[x]){
			cout << "原来已经存在元素: " << x << endl;
			return false;
		}
		v1[x] = true;
	}
	return true;
}
bool IntegerSet::deleteElement(int x){
	if (x < 0 || x >= 100){
		cout << "删除元素的范围要求在0-99之间" << endl;
		return false;
	}
	else{
		if (!v1[x]){
			cout << "原来不存在元素: " << x << endl;
			return false;
		}
		v1[x] = false;
	}
	return true;
}
void IntegerSet::printSet()const{
	int exitNum = 0;
	for (int i = 0; i < 100; i++)
	{
		if (v1[i]){
			cout << i<<'\t';
			if ((1+exitNum) % 5 == 0){
				cout << endl;
			}
			exitNum++;
		}
	}
	if (exitNum == 0){
		cout << "---";
	}
	cout<< endl;
}
bool IntegerSet::isEqualTo(const IntegerSet&other)const{
	for (int i = 0; i < 100; i++)
	{
		if (v1[i] != other.v1[i]){
			return false;
		}
	}
	return true;
}