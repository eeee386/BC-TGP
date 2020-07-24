//
// Created by User on 2020. 07. 24..
//
#include <iostream>

#include "Farm.h"

using std::cout;
using std::endl;

Farm::Farm(int spaces) {
    critters.reserve(spaces);
}

void Farm::Add(const Critter &critter) {
    critters.push_back(critter);
}

void Farm::RollCall() const {
    for (const auto &crit: critters) {
        cout << crit.GetName() << endl;
    }}
