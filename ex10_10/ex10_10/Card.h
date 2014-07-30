#include<string>
using namespace std;

#ifndef CARD_H
#define CARD_H
class Card
{
public:
	Card(int=0,int=0);
	string toString();
private:
	int suit;
	int face;
	static string faceStr[13];
	static string suitStr[4];
};



#endif