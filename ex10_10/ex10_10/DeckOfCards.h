#include"Card.h"
#include<vector>
using namespace std;

#ifndef DECKOFCARD_H
#define DECKOFCARD_H
class DeckOfCards
{
public:
	DeckOfCards();//按顺序初始化
	void shuffle();
	Card dealCard();
	bool moreCard();
private:
	vector<Card> deck;//所有的牌
	int currentCard;//当前牌的编号
};
#endif