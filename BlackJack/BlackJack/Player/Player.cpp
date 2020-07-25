//
// Created by User on 2020. 07. 25..
//

#include "Player.h"
#include "House.h"
#include <iostream>
#include <string>


Player::Player(std::string & name) : GenericPlayer(name) {}

void Player::ShowCards() const {
    for(const auto & i : cardsInHand){
        i.ShowCard();
        std::cout << std::endl;
    }
}

void Player::play(Deck &deck) {
    int in;
    std::cout << "Choose: \n";
    std::cout << "0 - hit\n";
    std::cout << "1 - stop\n";
    while(true){
        if(std::cin >> in){
            if(in == 0){
                DrawCard(deck);
            } else if(in == 1){
                break;
            } else {
                std::cout << "This is not a valid choice!";
                continue;
            }
        } else {
            std::cout << "This is not a valid choice!";
            std::cin.ignore();
            std::cin.clear();
            continue;
        }
    }
}