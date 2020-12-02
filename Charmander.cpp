#include "Charmander.h"

int Charmander::getSpecialAttack() const {
    return special_attack;
}

void Charmander::setSpecialAttack(int specialAttack) {
    special_attack = specialAttack;
}

int Charmander::getSpecialDefence() const {
    return special_defence;
}

void Charmander::setSpecialDefence(int specialDefence) {
    special_defence = specialDefence;
}

Charmander::Charmander(const string &name, int hp, int attack, int defence, int speed, int specialAttack,
                       int specialDefence)
                       : Pokemon(name, hp, attack, defence, speed),
                       special_attack(specialAttack), special_defence(specialDefence) {}
