#include"SavingAccount.h"
#include<iostream>
using namespace std;

int main(){
	SavingAccount saver1(2000);
	SavingAccount saver2(3000);
	saver1.modifyIntrest(0.03);

	cout << "\t������\t�����" << endl;
	cout << "saver1:\t" << saver1.caculateMonthlyIntrest() << "\t";//------------------�ڲ�ͬ����У��µ���������ʾ���������������ʾ�����Ǿ���
	cout<< saver1.getBalance() << endl;
	cout << "saver2:\t" << saver2.caculateMonthlyIntrest() << "\t" << saver2.getBalance() << endl;

	cout << "�޸�����Ϊ4%��" << endl;
	saver1.modifyIntrest(0.04);

	cout << "\t������\t�����" << endl;
	cout << "saver1:\t" << saver1.caculateMonthlyIntrest() << "\t" << saver1.getBalance() << endl;
	cout << "saver2:\t" << saver2.caculateMonthlyIntrest() << "\t" << saver2.getBalance() << endl;

	return 0;
}