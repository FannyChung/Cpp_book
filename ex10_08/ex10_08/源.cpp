#include"IntegerSet.h"

int main(){
	IntegerSet s1;
	cout << "s1:" << endl;
	s1.printSet();
	s1.insertElement(0);
	s1.insertElement(10);
	cout <<"s1 after:"<< endl;
	s1.printSet();
	int a[30];
	for (int  i = 0; i < 30; i++)
	{
		a[i] = rand() % 100;
	}
	IntegerSet s2(a, 30);
	cout << "\ns2:" << endl;
	s2.printSet();
	s2.deleteElement(a[4]);
	s2.deleteElement(a[29]);
	cout << "s2 after:" <<a[4]<<"   "<<a[29]<< endl;
	s2.printSet();
	if (s1.isEqualTo(s2)){
		cout << "s1 equal to s2" << endl;
	}
	else
	{
		cout << "s1 not  equal to s2" << endl;

	}
	cout << "并集：" << endl;
	s1.unionOfSets(s2).printSet();
	cout << "\n交集：" << endl;
	s1.intersectionOfSets(s2).printSet();
	return 0;
}