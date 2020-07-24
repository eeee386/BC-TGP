//
// Created by sedon on 2020. 07. 23..
//
#include <iostream>
#include "Critter.h"

using std::cout;
using std::endl;

Critter::Critter(int hunger, int boredom) {
    m_Hunger = hunger;
    m_Boredom = boredom;
    cout << "A new Critter has been born!" << endl;
}


void Critter::Talk() {
    cout << "I'm a critter and I feel ";
    int mood = GetMood();
    if (mood > 15)
    {
        cout << "mad.\n";
    }
    else if (mood > 10)
    {
        cout << "frustrated.\n";
    }
    else if (mood > 5)
    {
        cout << "okay.\n";
    }
    else
    {
        cout << "happy.\n";
    }
    PassTime();
}

void Critter::Eat(int food) {
    cout << "Brruppp.\n";
    m_Hunger -= food;
    if(m_Hunger < 0){
        m_Hunger = 0;
    }
    PassTime();
}

void Critter::Play(int fun) {
    cout << "Wheee!\n";
    m_Boredom -= fun;
    if(m_Boredom < 0){
        m_Boredom = 0;
    }
    PassTime();
}

int Critter::GetMood() const {
    return (m_Hunger+m_Boredom);
}

void Critter::PassTime(int time) {
    m_Boredom += time;
    m_Hunger += time;
}
