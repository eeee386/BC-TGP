//
// Created by User on 2020. 07. 25..
//

#ifndef BLACKJACK_GENERICPLAYER_H
#define BLACKJACK_GENERICPLAYER_H

#include <vector>
#include <string>
#include "../Card/Card.h"
#include "../Deck/Deck.h"

class GenericPlayer {
protected:
    std::string name;
    std::vector<Card> cardsInHand;
    int cardsValue;
public:
    int GetCardsValue() const;
    void DrawCard(Deck & deck);
    virtual void ShowCards() const = 0;
    explicit GenericPlayer(std::string& name);
    virtual void play(Deck& deck) = 0;
};


#endif //BLACKJACK_GENERICPLAYER_H
