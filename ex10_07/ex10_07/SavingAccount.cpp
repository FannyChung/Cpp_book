#include"SavingAccount.h"

double SavingAccount::annualInterestRate = 0.03;

SavingAccount::SavingAccount(double blc)
{
	savingBalance = blc>0?blc:0;
}


double SavingAccount::caculateMonthlyIntrest(){
	double mI= savingBalance*annualInterestRate / 12;
	savingBalance += mI;
	return mI;
}
void SavingAccount::modifyIntrest(double nInt){
	annualInterestRate = nInt;
}
double SavingAccount::getBalance(){
	return savingBalance;
}