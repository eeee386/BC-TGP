//
// Created by sedon on 2020. 07. 23..
//

#ifndef CRITTERCARETAKER_CRITTER_H
#define CRITTERCARETAKER_CRITTER_H


class Critter {
public:
    static int s_Total;
    static int GetTotal();
    explicit Critter(int hunger = 0);
    int GetHunger() const;
    void SetHunger(int hunger);
    void Greet() const;

private:
    int m_Hunger;
};


#endif //CRITTERCARETAKER_CRITTER_H
