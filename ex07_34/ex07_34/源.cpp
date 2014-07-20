/*
递归调用，解决八皇后问题
*/

#include<iostream>
using namespace std;

const int SIZE = 8;
bool IsSafe(int col, int row, int queenList[])
{
	//只检查当前列前面的列
	for (int tempCol = 0; tempCol < col; tempCol++)
	{
		int tempRow = queenList[tempCol];
		if (tempRow == row)
		{
			//同一行
			return false;
		}
		if (tempCol == col)
		{
			//同一列
			return false;
		}
		if (tempRow - tempCol == row - col || tempRow + tempCol == row + col)
		{
			return false;
		}
	}
	return true;
}

bool PlaceQueue(int queenList[], int col)//从第col列开始放queen
{
	int row = 0;
	bool foundSafePos = false;
	if (col == SIZE) //结束标志
	{
		//当处理完第SIZE列的完成
		foundSafePos = true;
	}
	else
	{
		while (row < SIZE && !foundSafePos)
		{
			if (IsSafe(col, row, queenList))
			{
				//找到安全位置
				queenList[col] = row;
				//找下一列的安全位置
				foundSafePos = PlaceQueue(queenList, col + 1);
				if (!foundSafePos)//找不到下一列的安全位置
				{
					row++;
				}
			}
			else//不安全，找下一行
			{
				row++;
			}
		}
	}
	return foundSafePos;
}
int main(){
	int queenList[SIZE];
	for (int j = 0; j < SIZE; j++)
	{
		//当第一列放在位置j时
		queenList[0] = j;
		bool res = PlaceQueue(queenList, 1);
		if (res)//显示棋盘
		{
			cout << " ";
			for (int i = 0; i < 8; i++)
			{
				cout << " " << i << " ";
			}
			cout << endl;
			for (int i = 0; i < 8; i++)
			{
				cout << " " << i << " ";
				for (int a = 0; a < 8; a++)
				{
					if (i == queenList[a])
					{
						cout << " q ";
					}
					else
					{
						cout << " * ";
					}
				}
				cout << endl;
			}
		}
		else
		{
			cout<<("不能完成棋局，棋局失败！");
		}

		cout << endl << endl;
	}
	return 0;
}