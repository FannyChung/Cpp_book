#include"SavingAccount.h"
#include<iostream>
using namespace std;

int main(){
	SavingAccount saver1(2000);
	SavingAccount saver2(3000);
	saver1.modifyIntrest(0.03);

	cout << "\t月利率\t新余额" << endl;
	cout << "saver1:\t" << saver1.caculateMonthlyIntrest() << "\t";//------------------在不同语句中，新的余额才能显示，否则连续输出显示的仍是旧余额。
	cout<< saver1.getBalance() << endl;
	cout << "saver2:\t" << saver2.caculateMonthlyIntrest() << "\t" << saver2.getBalance() << endl;

	cout << "修改利率为4%后：" << endl;
	saver1.modifyIntrest(0.04);

	cout << "\t月利率\t新余额" << endl;
	cout << "saver1:\t" << saver1.caculateMonthlyIntrest() << "\t" << saver1.getBalance() << endl;
	cout << "saver2:\t" << saver2.caculateMonthlyIntrest() << "\t" << saver2.getBalance() << endl;

	return 0;
}