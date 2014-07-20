/*
八皇后问题，通过计算每个方格的“排除数”
*/

#include<iostream>
using namespace std;
const int SIZE = 8;

void calRuleOutNum(int a[][SIZE]){
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i == j){//在正对角线上

			}
		}
	}
}
int main(){
	int chess[SIZE][SIZE];
	calRuleOutNum(chess);
	return 0;
}