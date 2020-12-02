#pragma once
#include <string>


using namespace std;

class Pokemon {
public:
    Pokemon(const string &name_, int HP_, int attack_, int defence_, int speed_);

    const string &getName() const;

    void setName(const string &name);

    int getHp() const;

    void setHp(int hp);

    int getAttack() const;

    void setAttack(int attack);

    int getDefence() const;

    void setDefence(int defence);

    int getSpeed() const;

    void setSpeed(int speed);

private:
    string name;
    int HP;
    int attack;
    int defence;
    int speed;
};


