//
// Created by User on 2020. 07. 24..
//

#ifndef CRITTERCARETAKER_FARM_H
#define CRITTERCARETAKER_FARM_H

#include <vector>
#include "Critter.h"

class Farm {
public:
    explicit Farm(int spaces = 1);
    void Add(const Critter & critter);
    void RollCall() const;

private:
    std::vector<Critter> critters;
};


#endif //CRITTERCARETAKER_FARM_H
