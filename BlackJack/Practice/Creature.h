//
// Created by User on 2020. 07. 25..
//

#ifndef BLACKJACK_CREATURE_H
#define BLACKJACK_CREATURE_H


class Creature {
public:
    explicit Creature(int health = 100);
    virtual void Greet() const = 0;
    virtual void DisplayHealth() const;

protected:
    int m_Health;
};


#endif //BLACKJACK_CREATURE_H
