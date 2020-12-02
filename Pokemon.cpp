#include "Pokemon.h"

using namespace std;

Pokemon::Pokemon(const string &name_, int HP_, int attack_, int defence_, int speed_)
    : name(name_), HP(HP_), attack(attack_), defence(defence_), speed(speed_) {}

const string &Pokemon::getName() const {
    return name;
}

void Pokemon::setName(const string &name) {
    Pokemon::name = name;
}

int Pokemon::getHp() const {
    return HP;
}

void Pokemon::setHp(int hp) {
    HP = hp;
}

int Pokemon::getAttack() const {
    return attack;
}

void Pokemon::setAttack(int attack) {
    Pokemon::attack = attack;
}

int Pokemon::getDefence() const {
    return defence;
}

void Pokemon::setDefence(int defence) {
    Pokemon::defence = defence;
}

int Pokemon::getSpeed() const {
    return speed;
}

void Pokemon::setSpeed(int speed) {
    Pokemon::speed = speed;
}
