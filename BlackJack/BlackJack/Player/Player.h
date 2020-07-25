//
// Created by User on 2020. 07. 25..
//

#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H


#include "GenericPlayer.h"
#include "House.h"
#include <string>

class Player: public GenericPlayer {
public:
    explicit Player(std::string & name);
    void ShowCards() const override;
    void play(Deck& deck) override;

};


#endif //BLACKJACK_PLAYER_H
