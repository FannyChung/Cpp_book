#ifndef SVACT_H
#define SVACT_H
class SavingAccount
{
public:
	SavingAccount(double=0);
	double caculateMonthlyIntrest();//����������
	static void modifyIntrest(double);
	double getBalance();

private:
	static double annualInterestRate;
	double savingBalance;
};
#endif