/*
八皇后问题，通过计算每个方格的“排除数”——没有解决，最后计算出的排除数从外向内递增
*/

#include<iostream>
using namespace std;
const int SIZE = 8;

void calRuleOutNum(int a[][SIZE]){
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			int r = SIZE + SIZE - 3;//初始化，一定会占用横、竖共15个方格
			//计算正对角的个数____差相等
			int q = abs(i - j);
			r += (SIZE - q);
			//计算逆对角线的个数____和相等
			q = i + j;
			r += (SIZE - abs((SIZE-1) - q));
			a[i][j] = r;
			cout << r << "\t";
		}
		cout << endl;
	}
}
int main(){
	int chess[SIZE][SIZE];
	calRuleOutNum(chess);
	for (int i = 0; i < SIZE; i++)
	{
		//找到一行中的最小的值对应的j
		int min = 0;
		for (int j = 1; j < SIZE; j++)
		{
			if (chess[i][j] < chess[i][min]){
				min = j;
			}
		}
		for (int j = 0; j < SIZE; j++)
		{
			if (j==min){
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}