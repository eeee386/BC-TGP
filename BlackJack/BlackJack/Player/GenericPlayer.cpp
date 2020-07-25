//
// Created by User on 2020. 07. 25..
//

#include "GenericPlayer.h"
#include "../Card/AceCard.h"
#include <iostream>
#include <algorithm>

void GenericPlayer::DrawCard(Deck &deck) {
    if (cardsValue >= 21) {
        std::cout << "Cannot draw more";
        return;
    }
    Card *card = deck.DrawFromDeck();
    std::cout << "Here a problem";
    cardsValue += card->GetValue();
    cardsInHand.push_back(*card);
    if (cardsValue > 21) {
        //I am not sure of this
        std::vector<Card> acesCard;
        std::vector<AceCard> aces;
        std::copy_if(
                cardsInHand.begin(),
                cardsInHand.end(),
                std::back_inserter(acesCard),
                [&](Card &c) { return c.getType() == ACE; });
        for(auto & i: acesCard){
            auto* ace = dynamic_cast<AceCard*>(&i);
            aces.push_back(*ace);
        }
        auto iter = std::find_if(aces.begin(),
                                 aces.end(), [&](AceCard &c) { return c.GetIsEleven(); });
        iter->switchValue();
        cardsValue -= 10;
    }
    delete card;
    card = nullptr;
}

int GenericPlayer::GetCardsValue() const {
    return cardsValue;
}

GenericPlayer::GenericPlayer(std::string& name): name(std::move(name)), cardsValue(0) {}

