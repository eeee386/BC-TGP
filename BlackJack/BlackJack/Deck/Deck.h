//
// Created by User on 2020. 07. 25..
//

#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H


#include "../Card/Card.h"
#include <vector>

class Deck {
private:
    std::vector<Card> cardsInDeck;
    int numberOfCards = 52;
public:
    Card * DrawFromDeck();
    int GetNumberOfCards() const;
    Deck();
    static Card CardCreator(int counter, Suit suit);

};


#endif //BLACKJACK_DECK_H
