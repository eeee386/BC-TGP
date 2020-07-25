//
// Created by User on 2020. 07. 25..
//

#ifndef BLACKJACK_BOSS_H
#define BLACKJACK_BOSS_H


#include "Enemy.h"

class Boss: public Enemy {
public:
    int m_DamageMultiplier;
    Boss();
    Boss(int damage, int multiplier);
    void SpecialAttack() const;
    void Taunt() const override;
    void Attack() const override;
    ~Boss() override;

protected:
    int* m_pMultiplier;
};


#endif //BLACKJACK_BOSS_H
