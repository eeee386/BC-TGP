//
// Created by User on 2020. 07. 25..
//
#include <iostream>

#include "Enemy.h"
#include "Boss.h"
#include "Creature.h"
#include "Orc.h"

using std::cout;

void bossFunction();
void boss2_0Function();
void polymorphicBadGuy();
void orcFunction();


void bossFunction(){
    cout << "Creating an enemy!\n";
    Enemy enemy1;
    enemy1.Attack();

    cout<< "Creating a boss.\n";
    Boss boss1;
    boss1.Attack();
    boss1.SpecialAttack();
}

void boss2_0Function(){
    cout << "Enemy Object: \n";
    Enemy anEnemy;
    anEnemy.Taunt();
    anEnemy.Attack();

    cout<< "Boss Object: \n";
    Boss aBoss;
    aBoss.Taunt();
    aBoss.Attack();
}

void polymorphicBadGuy(){
    cout <<"Calling Attack() on boss object through pointer to Enemy:\n";
    Enemy* pBadGuy = new Boss();
    pBadGuy->Attack();

    cout <<"\n\nDeleting pointer to Enemy:\n";
    delete pBadGuy;
    pBadGuy = nullptr;

}

void orcFunction(){
    Creature* pCreature = new Orc();
    pCreature->Greet();
    pCreature->DisplayHealth();
}