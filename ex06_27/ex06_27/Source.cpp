/*（摄氏和华氏温度）实现以下功能（整型）：
摄氏函数返回与一个华氏温度等值的摄
氏温度值。华氏函数返回与一个摄氏温度等值的华氏温度值。
使用这些函数编写一个程序打印输出图表，
图表显示与所有摄氏0 到100 度等值的华氏温度值和与所有华氏32 到212 度
等值的摄氏温度值。以一种在保持可读性的情况下尽可能减少输出的行数的形式打印输出一
个排列整齐的表格。
*/
#include<iostream>
using namespace std;

int getCelsius(int);
int getFahrenheit(int);

int main(){
	cout<<"摄氏到华氏\n";
	cout<<"摄氏\t华氏\t摄氏\t华氏\t摄氏\t华氏\t摄氏\t华氏\n";
	for (int i = 0; i < 25; i++){
		for (int j = 0; j < 4; j++)
		{
			cout<<i+j*25<<'\t'<<getFahrenheit(i+j*25)<<'\t';
		}
		cout<<endl;
	}
	cout<<"华氏到摄氏\n";
	cout<<"华氏\t摄氏\t华氏\t摄氏\t华氏\t摄氏\t华氏\t摄氏\n";
	for (int i = 32; i < 77; i++){
		for (int j = 0; j < 4; j++)
		{
			cout<<i+j*45<<'\t'<<getCelsius(i+j*45)<<'\t';
		}
		cout<<endl;
	}
	int x;
	cin>>x;
}

int getCelsius(int f){
	return (f-32)*5/9;
}

int getFahrenheit(int c){
	return c*9/5+32;
}