//
// Created by User on 2020. 07. 24..
//

#ifndef GAMELOBBY_LOBBY_H
#define GAMELOBBY_LOBBY_H
#include <iostream>
#include "Player.h"

class Lobby {
    friend std::ostream & operator<<(std::ostream& os, Lobby& lobby);
public:
    Lobby();
    ~Lobby();
    void AddPlayer();
    void RemovePlayer();
    void Clear();

private:
    Player* m_pHead;
    Player* m_pTail;
};


#endif //GAMELOBBY_LOBBY_H
