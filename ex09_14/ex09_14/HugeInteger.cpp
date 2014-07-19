#include"HugeInteger.h"
#include<iostream>
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
	int len = sizeof(a) / sizeof(a[0]);//--------------------------------当有元素有8个时，len为4？？？？
	int i = 0;
	/*	for (i = 0; i < 40; i++)
	{
		int b=(int)*(array+i)-int('0');
		if(b>9||b<0)
			break;
	}
	int len=i-1;*/
	for (; i <= len; i++)
	{
		integer[i]=a[len-i]-'0';
	}

	for (; i < 40; i++)
	{
		integer[i]=0;
	}
}


void HugeInteger::input(const char a[]){
	int len = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < len&&i<40; i++)
	{
		integer[i]=a[i]-'0';
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
		if(integer[i]>9)
			integer[i+1]++;
	}
	return result;

}

HugeInteger HugeInteger::add(int a){
	int x = 0;
	HugeInteger result;

	while (a != 0)
	{
		result.integer[x] = integer[x] + (a % 10);
		if (result.integer[x]>9)
			integer[x + 1]++;
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
	int len = sizeof(a) / sizeof(char);
	for (int i = 0; i < 40&&i<len; i++)
	{
		result.integer[i]=integer[i]+(a[i]-'0');
		if(result.integer[i]>9)
			integer[i+1]++;
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
			integer[i+1]--;
		}
	}
	return result;
}

HugeInteger HugeInteger::subtract(int a){
	int x=0;
	int temp=a;
	HugeInteger result;

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
	}
	return result;
}

HugeInteger HugeInteger::subtract(const char *a){
	HugeInteger result;
	for (int i = 0; i < 40; i++)
	{
		result.integer[i]=integer[i]-(int)a[i];
		if(result.integer[i]<0){
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
		if(integer[i]!=a.integer[i])
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