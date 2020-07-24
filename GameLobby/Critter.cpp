//
// Created by User on 2020. 07. 24..
//
#include "Critter.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

Critter::Critter(const std::string &name) {
    m_Name = name;
    m_pName = new string(name);
}

std::string Critter::GetName() const {
    return m_Name;
}


void Peek(const Critter &critter) {
    cout << critter.m_Name << endl;
}

std::ostream& operator>>(std::ostream &os, const Critter &critter) {
    os << "Critter Object: \n";
    os << "m_Name: " <<  critter.m_Name;
    return os;
}

Critter::Critter(const string &name, int age) {
    this->age = age;
    m_Name = name;
    m_pName = new string(name);
}

Critter::~Critter() {
    cout << "Destructor is called\n";
    delete m_pName;
}

Critter::Critter(const Critter &c) {
    m_pName = new string(*(c.m_pName));
    this->age = c.age;
}

Critter &Critter::operator=(const Critter &c) {
    if(this != &c){
        delete m_pName;
        m_pName = new string(*(c.m_pName));
        age = c.age;
    }
    return *this;
}

void Critter::Greet() const {
    cout << "I'm " << *m_pName;
    cout << "I'm " << &m_pName;
}
