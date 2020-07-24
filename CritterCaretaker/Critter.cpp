//
// Created by sedon on 2020. 07. 23..
//



#include <iostream>
#include "Critter.h"

using std::cout;
using std::endl;

int Critter::s_Total = 0;

void Critter::Greet() const {
    cout << "Hi. I'm a critter. My hunger level is " << m_Hunger << endl;
}

Critter::Critter(int hunger) {
    m_Hunger = hunger;
    cout << "A new Critter has been born!" << endl;
    ++s_Total;
}

int Critter::GetHunger() const {
    return m_Hunger;
}

void Critter::SetHunger(int hunger) {
    if(hunger < 0){
        cout << "You can't set a critter's hunger to a negative number.\n\n";
    } else {
        m_Hunger = hunger;
    }
}

int Critter::GetTotal() {
    return s_Total;
}


