//
// Created by User on 2020. 07. 25..
//

#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

enum Suit {SPADES, HEARTS, CLUBS, DIAMONDS};
enum Type {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

class Card {
protected:
    const int value;
    const Suit suit;
    const Type type;
    bool isEleven = true;
public:
    Card(int value, Suit suit, Type type);
    virtual int GetValue() const;
    void ShowCard() const;
    Type getType() const;
    Suit getSuit() const;
    void switchValue();
    bool GetIsEleven() const;
};


#endif //BLACKJACK_CARD_H
