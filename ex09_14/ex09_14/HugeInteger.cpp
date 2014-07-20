#include"HugeInteger.h"
#include<iostream>
#include<vector>
using namespace std;

HugeInteger::HugeInteger(int a)
{
	int x=0;

	while (a!=0)
	{
		integer[x]=(a % 10);
		x++;
		a/=10;
	}
	//剩余高位初始化为0
	for (int i = x; i < 40; i++)
	{
		integer[i]=0;
	}
}


HugeInteger::HugeInteger(const char a[])
{
	input(a);
	/*	int len=i-1;
	
	int al = sizeof  a;
	int sil = sizeof a[0];
	int len = al / sil;//--------------------------------当有元素有8个时，len为4？？？？-------------当数组为形参时，其sizeof值相当于指针的sizeof值!!!!
	for (; i <= len; i++)
	{
		integer[i]=a[len-i]-'0';
	}*/
}


void HugeInteger::input(const char a[]){

	int i = 0;
	int len = 0;//数组长度
	while (a[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = 0; i < len; i++)
	{
		integer[len - 1 - i] = a[i] - '0';
	}
	for (i = 0; i < len&&i < 40; i++)
	{
		integer[len - 1 - i] = a[i] - '0';
	}
	//剩余高位初始化为0

	for (; i < 40; i++)
	{
		integer[i] = 0;
	}
}
void HugeInteger::output(){
	if(isZero())
		cout<<"0";
	else
	{
		int i = 39;
		while (integer[i]==0)
		{
			i--;
		}
		for (; i >=0; i--)
		{
			cout<<integer[i];
		}
	}
}

HugeInteger HugeInteger::add(const HugeInteger &a){
	HugeInteger result;
	for (int i = 0; i < 40; i++)
	{
		result.integer[i]=integer[i]+a.integer[i];
		if (integer[i]>9 ){
			result.integer[i] -= 10;
			if (i!=39)
				integer[i + 1]++;
		}
	}
	return result;

}

HugeInteger HugeInteger::add(int a){
	int x = 0;
	HugeInteger result;

	while (a != 0)
	{
		result.integer[x] = integer[x] + (a % 10);
		if (result.integer[x] > 9){
			result.integer[x] -= 10;
			if (x!=39)//如果不是最后一位，就要向高位进位
				integer[x + 1]++;
		}
		x++;
		a /= 10;
	}

	/*
	int temp=a;

	while (a!=0)
	{
		x++;
		a/=10;
	}

	for (int i = 0; i < x; i++)
	{
		result.integer[i]=integer[i]+(temp%(int)pow(10,i+1))/(int)pow(10,i);
		if(result.integer[i]>9)
			integer[i+1]++;
	}*/
	return result;
}

HugeInteger HugeInteger::add(const char * a){
	HugeInteger result;
	int len =0;
	int i = 0;
	while (a[i]!='\0')
	{
		i++;
		len++;
	}
	for (i = 0; i < 40&&i<len; i++)
	{
		result.integer[i]=integer[i]+(a[len-1-i]-'0');
		if (result.integer[i]>9){
			result.integer[i] -= 10;
			if (i != 39)
				integer[i + 1]++;
		}
	}
	return result;
}

HugeInteger HugeInteger::subtract(const HugeInteger &a){
	HugeInteger result;
	for (int i = 0; i < 40; i++)
	{
		result.integer[i]=integer[i]-a.integer[i];
		if (result.integer[i]<0)
		{
			result.integer[i]+=10;
			if (i!=39)
				integer[i+1]--;
		}
	}
	return result;
}

HugeInteger HugeInteger::subtract(int a){
	int x=0;
	HugeInteger result;

	while (a != 0)
	{
		result.integer[x] = integer[x] + (a % 10);
		if (result.integer[x] > 9){
			result.integer[x] -= 10;
			if (x != 39)//如果不是最后一位，就要向高位进位
				integer[x + 1]++;
		}
		x++;
		a /= 10;
	}
	/*
	int temp=a;
	while (a!=0)
	{
		x++;
		a/=10;
	}

	for (int i = 0; i < x; i++)
	{
		result.integer[i]=integer[i]-(temp%(int)pow(10,i+1))/(int)pow(10,i);
		if(result.integer[i]<0){
			integer[i+1]--;
			result.integer[i]+=10;
		}
	}*/
	return result;
}

HugeInteger HugeInteger::subtract(const char *a){
	HugeInteger result;
	int len = 0;
	int i = 0;
	while (a[i]!='\0')
	{
		i++;
		len++;
	}
	for (i = 0; i < 40; i++)
	{
		result.integer[i]=integer[i]-(a[len-i-1]-'0');
		if(result.integer[i]<0){
			if (i!=39)
				integer[i+1]--;
			result.integer[i]+=10;
		}
	}
	return result;
}


bool HugeInteger::isEqualTo(HugeInteger &a){
	for (int i = 0; i < 40; i++)
	{
		if(integer[i]!=a.integer[i])
			return false;
	}
	return true;
}

bool HugeInteger::isNotEqualTo(HugeInteger &a){
	for (int i = 0; i < 40; i++)
	{
		if(integer[i]!=a.integer[i])//只要找到一个不同
			return true;
	}

	return false;
}
bool HugeInteger::isGreaterThan(HugeInteger &a){
	for (int i = 0; i < 40; i++)
	{
		if(integer[39-i]>a.integer[39-i])
			return true;
		else if(integer[39-i]<a.integer[39-i])
			return false;
		else;
	}

	return false;
}

bool HugeInteger::isGreaterThanOrEqualTo(HugeInteger &a){
	for (int i = 0; i < 40; i++)
	{
		if(integer[39-i]<a.integer[39-i])
			return false;
	}
	return true;
}

bool HugeInteger::isLessThan(HugeInteger &a){
	for (int i = 0; i < 40; i++)
	{
		if(integer[39-i]>a.integer[39-i])
			return false;
		else if(integer[39-i]<a.integer[39-i])
			return true;
		else;
	}

	return false;
}

bool HugeInteger::isLessThanOrEqualTo(HugeInteger& a){
	for (int i = 0; i < 40; i++)
	{
		if(integer[39-i]>a.integer[39-i])
			return false;
	}
	return true;
}

bool HugeInteger::isZero(){
	for (int i = 0; i < 40; i++)
	{
		if(integer[i]!=0)
			return false;
	}
	return true;
}