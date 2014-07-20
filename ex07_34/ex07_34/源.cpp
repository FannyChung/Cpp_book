/*
�ݹ���ã�����˻ʺ�����
*/

#include<iostream>
using namespace std;

const int SIZE = 8;
bool IsSafe(int col, int row, int queenList[])
{
	//ֻ��鵱ǰ��ǰ�����
	for (int tempCol = 0; tempCol < col; tempCol++)
	{
		int tempRow = queenList[tempCol];
		if (tempRow == row)
		{
			//ͬһ��
			return false;
		}
		if (tempCol == col)
		{
			//ͬһ��
			return false;
		}
		if (tempRow - tempCol == row - col || tempRow + tempCol == row + col)
		{
			return false;
		}
	}
	return true;
}

bool PlaceQueue(int queenList[], int col)//�ӵ�col�п�ʼ��queen
{
	int row = 0;
	bool foundSafePos = false;
	if (col == SIZE) //������־
	{
		//���������SIZE�е����
		foundSafePos = true;
	}
	else
	{
		while (row < SIZE && !foundSafePos)
		{
			if (IsSafe(col, row, queenList))
			{
				//�ҵ���ȫλ��
				queenList[col] = row;
				//����һ�еİ�ȫλ��
				foundSafePos = PlaceQueue(queenList, col + 1);
				if (!foundSafePos)//�Ҳ�����һ�еİ�ȫλ��
				{
					row++;
				}
			}
			else//����ȫ������һ��
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
		//����һ�з���λ��jʱ
		queenList[0] = j;
		bool res = PlaceQueue(queenList, 1);
		if (res)//��ʾ����
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
			cout<<("���������֣����ʧ�ܣ�");
		}

		cout << endl << endl;
	}
	return 0;
}