//
// Created by sedon on 2020. 07. 23..
//

#ifndef CRITTERCARETAKER_CRITTER_H
#define CRITTERCARETAKER_CRITTER_H


class Critter {
public:
    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);
    explicit Critter(int hunger = 0, int boredom = 0);
private:
    int m_Hunger;
    int m_Boredom;
    void PassTime(int time = 1);
    int GetMood() const;
};


#endif //CRITTERCARETAKER_CRITTER_H
