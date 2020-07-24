//
// Created by User on 2020. 07. 24..
//

#ifndef GAMELOBBY_PLAYER_H
#define GAMELOBBY_PLAYER_H
#include <iostream>
#include <string>

class Player {
    friend std::ostream& operator<<(std::ostream & os, Player& player);
public:
    explicit Player(std::string  name = "");
    std::string GetName() const;
    Player* GetNext() const;
    void SetNext(Player* next);
private:
    std::string m_Name;
    Player* m_pNext;
};


#endif //GAMELOBBY_PLAYER_H
