#include"Card.h"
#include<vector>
using namespace std;

#ifndef DECKOFCARD_H
#define DECKOFCARD_H
class DeckOfCards
{
public:
	DeckOfCards();//��˳���ʼ��
	void shuffle();
	Card dealCard();
	bool moreCard();
private:
	vector<Card> deck;//���е���
	int currentCard;//��ǰ�Ƶı��
};
#endif