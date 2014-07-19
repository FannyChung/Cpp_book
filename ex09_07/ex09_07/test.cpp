#include"Time.h"
#include<iostream>
using namespace std;

int main(){
	Time t1(23,58,58);
	
	for (int i = 0; i < 150; i++)
	{
		t1.displayStandard();
		t1.tick();
	}
	return 0;
}