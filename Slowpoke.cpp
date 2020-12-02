#include "Slowpoke.h"

Slowpoke::Slowpoke(const string &name, int hp, int attack, int defence, int speed, int specialAttack,
                   int specialDefence)
                   : Pokemon(name, hp, attack, defence, speed),
                   special_attack(specialAttack), special_defence(specialDefence) {}

int Slowpoke::getSpecialAttack() const {
    return special_attack;
}

void Slowpoke::setSpecialAttack(int specialAttack) {
    special_attack = specialAttack;
}

int Slowpoke::getSpecialDefence() const {
    return special_defence;
}

void Slowpoke::setSpecialDefence(int specialDefence) {
    special_defence = specialDefence;
}
