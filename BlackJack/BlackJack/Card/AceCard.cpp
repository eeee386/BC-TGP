//
// Created by User on 2020. 07. 25..
//

#include "AceCard.h"

int AceCard::GetValue() const {
    if(isEleven){
        return Card::GetValue() + 10;
    } else {
        return Card::GetValue();
    }
}

void AceCard::switchValue() {
    isEleven = !isEleven;
}

bool AceCard::GetIsEleven() const {
    return isEleven;
}
