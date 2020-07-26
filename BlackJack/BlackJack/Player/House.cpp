//
// Created by User on 2020. 07. 25..
//

#include "House.h"
#include <iostream>

void House::ShowCards() const {
    for(int i = 0; i < cardsInHand.size(); i++){
        if(i == 0 && cardsValue < 17){
            std::cout << "XX ";
            continue;
        }
        cardsInHand[i].ShowCard();
    }
    std::cout << std::endl;
}

void House::play(Deck& deck) {
    std::cout << "Player: " << name << "\n";
    while(cardsValue < 17){
        writeOutCards();
        DrawCard(deck);
    }
    if(cardsValue > 21){
        isBust = true;
    }
}

House::House(std::string &name) : GenericPlayer(name) {}
