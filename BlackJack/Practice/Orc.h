//
// Created by User on 2020. 07. 25..
//

#ifndef BLACKJACK_ORC_H
#define BLACKJACK_ORC_H

#include "Creature.h"

class Orc: public Creature {
    void Greet() const override;

public:
    explicit Orc(int health = 120);
};


#endif //BLACKJACK_ORC_H
