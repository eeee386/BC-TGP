//
// Created by User on 2020. 07. 25..
//

#include "Player.h"
#include "House.h"
#include <iostream>
#include <string>

Player::Player(std::string &name) : GenericPlayer(name) {}

void Player::ShowCards() const {
    for (const auto &i : cardsInHand) {
        i.ShowCard();
    }
    std::cout << std::endl;
}

void Player::play(Deck &deck) {
    Card* dummyCard = new Card(11, SPADES, ACE);
    cardsInHand.push_back(*dummyCard);
    cardsValue += dummyCard->GetValue();
    int in = 0;
    std::cout << "Player: " << name << "\n";
    std::cout << "Choose: \n";
    std::cout << "1 - hit\n";
    std::cout << "2 - stop\n";
    while (true) {
        writeOutCards();
        std::cin >> in;
        if (in == 1) {
            DrawCard(deck);
        } else if (in == 2) {
            break;
        } else {
            std::cout << "This is not a valid choice!";
            continue;
        }
    }
}