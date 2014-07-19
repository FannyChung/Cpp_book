//√∞≈›≈≈–Ú
#include<iostream>
using namespace std;

const int SIZE = 10;
void displayArray(int a[]){
	for (int i = 0; i < SIZE; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
}

void sortByBubble(int a[]){
	bool trans = true;

	for (int i = 0; i < SIZE; i++)
	{
		trans = false;
		for (int j = 1; j < SIZE - i; j++)
		{
			if (a[j]<a[j - 1]){
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
				trans = true;
				displayArray(a);
			}
		}
		cout << "--------------------------" << endl;
		if (trans == false)
			break;
	}
}
int main(){
	int a[] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	cout << "‘≠¿¥µƒÀ≥–Ú£∫" << endl;
	displayArray(a);
	sortByBubble(a);
	cout << "√∞≈›≈≈–Ú∫ÛµƒÀ≥–Ú£∫" << endl;
	displayArray(a);
	return 0;
}

