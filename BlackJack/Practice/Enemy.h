//
// Created by User on 2020. 07. 25..
//

#ifndef BLACKJACK_ENEMY_H
#define BLACKJACK_ENEMY_H


class Enemy {
public:
    Enemy();
    explicit Enemy(int damage);
    virtual void Attack() const;
    virtual void Taunt() const;
    virtual ~Enemy();

protected:
    int m_Damage;
    int* m_pDamage;
};


#endif //BLACKJACK_ENEMY_H
