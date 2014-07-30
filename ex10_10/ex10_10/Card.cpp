#include"Card.h"

string Card::suitStr[4] = { "Spade","Heart","Club","Diamond" };
string Card::faceStr[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };

Card::Card(int s,int f)
{
	suit = s;
	face = f;
}

string Card::toString(){
	return faceStr[face] + " of " + suitStr[suit];
}