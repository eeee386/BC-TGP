//
// Created by User on 2020. 07. 25..
//

#include "GenericPlayer.h"
#include <iostream>
#include <algorithm>

void GenericPlayer::DrawCard(Deck &deck) {
    if (cardsValue >= 21) {
        std::cout << "Cannot draw more.\n";
        return;
    }
    Card *card = deck.DrawFromDeck();
    cardsValue += card->GetValue();
    cardsInHand.push_back(*card);
    if (cardsValue > 21) {
        for (auto & c : cardsInHand){
            if(c.getType() == ACE){
                if(c.GetIsEleven()){
                    c.switchValue();
                    cardsValue -=10;
                    break;
                }
            }
        }
    }
}

int GenericPlayer::GetCardsValue() const {
    return cardsValue;
}

GenericPlayer::GenericPlayer(std::string& name): name(std::move(name)), cardsValue(0) {}

void GenericPlayer::writeOutCards() const {
    std::cout << "Cards: ";
    ShowCards();
    std::cout << "Cards' value: " << GetCardsValue() << "\n";
}

std::string GenericPlayer::GetName() const {
    return name;
}

