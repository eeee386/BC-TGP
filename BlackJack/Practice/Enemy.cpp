//
// Created by User on 2020. 07. 25..
//

#include "Enemy.h"
#include <iostream>
using std::cout;

Enemy::Enemy(): m_Damage(10) {}

void Enemy::Attack() const {
    cout << "Attack inflicts: " << m_Damage << " damage points.\n";
}

void Enemy::Taunt() const {
    cout <<"The enemy says he will fight you.\n";
}

Enemy::Enemy(int damage): m_Damage(damage) {
    m_pDamage = new int(damage);
}

Enemy::~Enemy() {
    delete m_pDamage;
    m_pDamage = nullptr;
}
