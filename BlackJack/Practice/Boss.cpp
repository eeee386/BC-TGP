//
// Created by User on 2020. 07. 25..
//

#include "Boss.h"
#include <iostream>

Boss::Boss(): m_DamageMultiplier(3) {}

void Boss::SpecialAttack() const {
    std::cout << "Special attack inflicts " << (m_DamageMultiplier*m_Damage);
    std::cout << " damage points!\n";
}

void Boss::Taunt() const {
    std::cout << "The boss says he will end your pitiful existence.\n";
}

void Boss::Attack() const {
    Enemy::Attack();
    std::cout << " And laughs heartily at you.\n";
}

Boss::Boss(int damage, int multiplier) : Enemy(damage) {
    m_pMultiplier = new int(multiplier);
}

Boss::~Boss() {

}
