//
// Created by User on 2020. 07. 25..
//

#include "Creature.h"
#include <iostream>

Creature::Creature(int health): m_Health(health) {}

void Creature::DisplayHealth() const {
    std::cout << "Health: " << m_Health << std::endl;
}
