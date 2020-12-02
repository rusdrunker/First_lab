#pragma once

#include "Pokemon.h"

class Slowpoke : public Pokemon {
public:
    Slowpoke(const string &name, int hp, int attack, int defence, int speed, int specialAttack,
             int specialDefence);

    int getSpecialAttack() const;

    void setSpecialAttack(int specialAttack);

    int getSpecialDefence() const;

    void setSpecialDefence(int specialDefence);

private:
    int special_attack;
    int special_defence;

};


