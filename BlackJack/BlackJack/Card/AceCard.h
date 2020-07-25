//
// Created by User on 2020. 07. 25..
//

#ifndef BLACKJACK_ACECARD_H
#define BLACKJACK_ACECARD_H


#include "Card.h"

class AceCard : public Card {
private:
    bool isEleven = true;
public:
    int GetValue() const override;
    void switchValue();
    bool GetIsEleven() const;
};


#endif //BLACKJACK_ACECARD_H
