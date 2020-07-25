//
// Created by User on 2020. 07. 25..
//

#include "Orc.h"
#include <iostream>

Orc::Orc(int health): Creature(health) {

}

void Orc::Greet() const {
    std::cout << "The orc grunts hello";
}
