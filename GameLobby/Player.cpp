//
// Created by User on 2020. 07. 24..
//

#include "Player.h"
using std::string;
using std::endl;

Player::Player(string name):
m_Name(std::move(name)),
m_pNext(nullptr)
{}

string Player::GetName() const {
    return m_Name;
}

Player *Player::GetNext() const {
    return m_pNext;
}

void Player::SetNext(Player *next) {
    m_pNext = next;
}

std::ostream &operator<<(std::ostream &os, Player &player) {
    os << "Player name: " << player.GetName() << endl;
    return os;
}


