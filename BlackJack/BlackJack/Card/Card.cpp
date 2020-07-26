//
// Created by User on 2020. 07. 25..
//

#include "Card.h"
#include <iostream>
#include <string>

Card::Card(int value, Suit suit, Type type):
value(value),
suit(suit),
type(type)
{}

void Card::ShowCard() const {
    std::string charValue;
    std::string shownValue;
    switch (suit) {
        case SPADES:
            charValue = "s";
            break;
        case HEARTS:
            charValue = "h";
            break;
        case CLUBS:
            charValue = "c";
        case DIAMONDS:
            charValue = "d";
    }
    switch (type) {
        case (ACE):
            shownValue = "A";
            break;
        case (TWO) :
            shownValue = "2";
            break;
        case (THREE) :
            shownValue = "3";
            break;
        case (FOUR) :
            shownValue = "4";
            break;
        case (FIVE) :
            shownValue = "5";
            break;
        case (SIX) :
            shownValue = "6";
            break;
        case (SEVEN) :
            shownValue = "7";
            break;
        case (EIGHT) :
            shownValue = "8";
            break;
        case (NINE) :
            shownValue = "9";
            break;
        case (TEN) :
            shownValue = "10";
            break;
        case (JACK) :
            shownValue = "J";
            break;
        case (QUEEN) :
            shownValue = "Q";
            break;
        case (KING) :
            shownValue = "K";
            break;
        }
    std::cout << shownValue << charValue << " ";
}

int Card::GetValue() const {
    if(type == ACE && !isEleven){
        return value - 10;
    }
    return value;
}

Type Card::getType() const {
    return type;
}

Suit Card::getSuit() const {
    return suit;
}

void Card::switchValue() {
    isEleven = !isEleven;
}

bool Card::GetIsEleven() const {
    return isEleven;
}

