//
// Created by User on 2020. 07. 24..
//

#include "Lobby.h"
#include "Player.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;

Lobby::Lobby():
    m_pHead(nullptr),
    m_pTail(nullptr)
    {}


Lobby::~Lobby() {
    Clear();
}

// This is not efficient
void Lobby::AddPlayer() {
    cout << "Please enter the name of the new player: ";
    string name;
    cin >> name;
    auto* pNewPlayer = new Player(name);

    if(m_pHead == nullptr){
        m_pHead = pNewPlayer;
        m_pTail = pNewPlayer;
    } else {
        Player* tail = m_pTail->GetNext();
        tail->SetNext(pNewPlayer);
    }
}

void Lobby::RemovePlayer() {
    if(m_pHead == nullptr){
        cout << "The game lobby is empty. No one to remove!\n";
    } else {
        Player* pTemp = m_pHead;
        m_pHead = m_pHead->GetNext();
        delete pTemp;
    }
}

void Lobby::Clear() {
    while (m_pHead != nullptr){
        RemovePlayer();
    }
}

std::ostream &operator<<(std::ostream &os, Lobby &alobby) {
    Player* pIter = alobby.m_pHead;
    os << "\nHere’s who’s in the game lobby:\n";
    if (pIter == nullptr)
    {
        os << "The lobby is empty.\n";
    }
    else
    {
        while (pIter != nullptr)
        {
            cout << *pIter;
            pIter = pIter->GetNext();
        }
    }
    return os;

}


