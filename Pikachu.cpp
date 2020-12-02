#include "Pikachu.h"

Pikachu::Pikachu(const string &name, int hp, int attack, int defence, int speed, int specialAttack,
                 int specialDefence)
                 : Pokemon(name, hp, attack, defence, speed),
                 special_attack(specialAttack), special_defence(specialDefence) {}

int Pikachu::getSpecialAttack() const {
    return special_attack;
}

void Pikachu::setSpecialAttack(int specialAttack) {
    special_attack = specialAttack;
}

int Pikachu::getSpecialDefence() const {
    return special_defence;
}

void Pikachu::setSpecialDefence(int specialDefence) {
    special_defence = specialDefence;
}
