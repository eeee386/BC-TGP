//
// Created by User on 2020. 07. 25..
//

#ifndef BLACKJACK_HOUSE_H
#define BLACKJACK_HOUSE_H


#include "GenericPlayer.h"
#include <string>

class House: public GenericPlayer {
private:
    bool isBust = false;
public:
    void ShowCards() const override;
    void play(Deck& deck) override;
    explicit House(std::string& name);
};


#endif //BLACKJACK_HOUSE_H
