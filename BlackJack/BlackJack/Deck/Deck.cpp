//
// Created by User on 2020. 07. 25..
//

#include "Deck.h"
#include <cstdlib>
#include <ctime>
#include <utility>
#include <iostream>
#include <stdexcept>


Card *Deck::DrawFromDeck() {
    if (numberOfCards == 0) {
        std::cout << "No more cards in deck.\n" << std::endl;
    }
    srand(static_cast<unsigned int>(time(nullptr)));
    int randomNumber = rand();
    //get a number between 1 and 100
    int index = (randomNumber % numberOfCards);
    Card *pickedCard = &cardsInDeck[index];
    numberOfCards--;
    cardsInDeck.begin() + index = cardsInDeck.begin() + numberOfCards;
    return pickedCard;
}

int Deck::GetNumberOfCards() const {
    return numberOfCards;
}

Deck::Deck() {
    cardsInDeck.reserve(52);
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j < 14; j++) {
            switch(i){
                case 0:
                    cardsInDeck.emplace_back(CardCreator(j, SPADES));
                    break;
                case 1:
                    cardsInDeck.emplace_back(CardCreator(j, HEARTS));
                    break;
                case 2:
                    cardsInDeck.emplace_back(CardCreator(j, CLUBS));
                    break;
                case 3:
                    cardsInDeck.emplace_back(CardCreator(j, DIAMONDS));
                    break;
                default:
                    throw std::domain_error("Invalid Suite");
            }
        }
    }
}

Card Deck::CardCreator(int counter, Suit suit) {
    switch (counter) {
        case (1):
            return {1, suit, ACE};
        case (2) :
            return {2, suit, TWO};
        case (3) :
            return {3, suit, THREE};
        case (4) :
            return {4, suit, FOUR};
        case (5) :
            return {5, suit, FIVE};
        case (6) :
            return {6, suit, SIX};
        case (7) :
            return {7, suit, SEVEN};
        case (8) :
            return {8, suit, EIGHT};
        case (9) :
            return {9, suit, NINE};
        case (10) :
            return {10, suit, TEN};
        case (11) :
            return {10, suit, JACK};
        case (12) :
            return {10, suit, QUEEN};
        case (13) :
            return {10, suit, KING};
        default:
            throw std::domain_error("Invalid card");
    }
}
