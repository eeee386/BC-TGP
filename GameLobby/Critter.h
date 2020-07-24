//
// Created by User on 2020. 07. 24..
//

#ifndef CRITTERCARETAKER_CRITTER_H
#define CRITTERCARETAKER_CRITTER_H


#include <string>
#include <iostream>

class Critter {
public:
    int age = 0;
    explicit Critter(const std::string & name);
    explicit Critter(const std::string & name  = "", int age = 0);
    Critter(const Critter & c);
    std::string GetName() const;
    friend void Peek(const Critter & critter);
    friend std::ostream& operator>>(std::ostream &os, const Critter & critter);
    Critter& operator=(const Critter& c); // assignemt op overload
    void Greet() const;
    ~Critter(); //destructor
private:
    std::string m_Name;
    std::string* m_pName;
};


#endif //CRITTERCARETAKER_CRITTER_H
