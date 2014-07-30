#include"DeckOfCards.h"

DeckOfCards::DeckOfCards()
{
	for (int suit = 0; suit < 4; suit++)
	{
		for (int face = 0; face < 13; face++)
		{
			deck.push_back(Card(suit, face));
		}
	}
	currentCard = 0;
}

void DeckOfCards::shuffle(){
	for (int i = 0; i < 52; i++)
	{
		int r = rand() % 52;
		//½»»»
		Card tmpCard = deck[i];
		deck[i] = deck[r];
		deck[r] = tmpCard;
	}
}

Card DeckOfCards::dealCard(){
	return deck[currentCard++];
}

bool DeckOfCards::moreCard(){
	return currentCard < 52;
}