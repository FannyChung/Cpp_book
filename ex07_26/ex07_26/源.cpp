/*
�˻ʺ����⣬ͨ������ÿ������ġ��ų���������û�н��������������ų����������ڵ���
*/

#include<iostream>
using namespace std;
const int SIZE = 8;

void calRuleOutNum(int a[][SIZE]){
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			int r = SIZE + SIZE - 3;//��ʼ����һ����ռ�úᡢ����15������
			//�������Խǵĸ���____�����
			int q = abs(i - j);
			r += (SIZE - q);
			//������Խ��ߵĸ���____�����
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
		//�ҵ�һ���е���С��ֵ��Ӧ��j
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