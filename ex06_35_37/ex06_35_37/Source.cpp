/*
(1)编写一个程序，用rand 函数产生两个一位正整数，然后输入下列问题：
How much is 6 times 7?
然后学生输入答案，程序检查学生的答案。如果正确，则打印”very good”。然后
提出另一个乘法问题。如果不正确，则打印"No. Please try again."，然后让
学生重复回答这个问题，直到答对

（2）CAI 环境中出现的一个问题是学生容易疲劳。要消除这个问题，
可以改变计算机的对话来保持学生的注意
力。修改练习(1)的程序，使每次学生答对时和答错时打印不同的评语。使用随机数和switch

（3）统计学生答
对和答错的比例（每题仅给一次回答机会）。学生答完10 题后，程序计算其答对
率。如果比例不到75％，则程序打印"Please ask your instructor for extra
help"，否则输出“Nice work!”．然后终止。*/
#include<iostream>
#include<ctime>
using namespace std;


int main(){
	int a;
	int b;
	int result;
	int fnum=0;
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
	a=rand()%10;
	b=rand()%10;
	cout<<a<<"乘以"<<b<<"的结果为";
	cin>>result;

	if(result==a*b){
		
		int i=rand()%4;
		switch (i)
		{
		case 0:
			cout<< "Very good！";
			break;
		case 1:
			cout<< "Excellent！";
			break;
		case 2:
			cout<< "Nice work！";
			break;
		case 3:
			cout<< "Keep up the good work！";
			break;
		default:
			break;
		}
	}
	else{
		
		int i=rand()%4;
		switch (i){
		case 0:
			cout<< "不对，请再尝试！";
			break;
		case 1:
			cout<< "错了，再试一次！";
			break;
		case 2:
			cout<< "不要放弃！";
			break;
		case 3:
			cout<< "不，继续尝试";
			break;
		}
		fnum++;
	}

	cout<<endl;
	}
	
	if(fnum>=7)
		cout<<"做得好!"<<endl;
	else
		cout<<"请向老师请教。"<<endl;
	cin>>fnum;
}
