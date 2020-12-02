#include <iostream>
#include <fstream>
#include "Pokemon.h"
#include "Pikachu.h"
#include "Charmander.h"
#include "Slowpoke.h"

using namespace std;

void print(Pokemon& pokemon, bool isLast) {
    ofstream json("MyJSON.json", ios::app);

    json << "\t\t{" << endl;
    json << "\t\t\t\"name\": " << "\"" <<pokemon.getName() << "\"" << "," << endl;
    json << "\t\t\t\"HP\": " << pokemon.getHp() << "," << endl;
    json << "\t\t\t\"Attack\": " << pokemon.getAttack() << "," << endl;
    json << "\t\t\t\"Defence\": " << pokemon.getDefence() << "," << endl;
    json << "\t\t\t\"Speed\": " << pokemon.getSpeed() << endl;
    json << "\t\t}";

    if (!isLast) {
        json << ",";
    }

    json << endl;
    json.close();
}

void print(Pikachu& pokemon, bool isLast) {
    ofstream json("MyJSON.json", ios::app);

    json << "\t\t{" << endl;
    json << "\t\t\t\"name\": " << "\"" <<pokemon.getName() << "\"" << "," << endl;
    json << "\t\t\t\"HP\": " << pokemon.getHp() << "," << endl;
    json << "\t\t\t\"Attack\": " << pokemon.getAttack() << "," << endl;
    json << "\t\t\t\"Defence\": " << pokemon.getDefence() << "," << endl;
    json << "\t\t\t\"Speed\": " << pokemon.getSpeed() << endl;
    json << "\t\t}";

    if (!isLast) {
        json << ",";
    }

    json << endl;
    json.close();
}

void print(Charmander& pokemon, bool isLast) {
    ofstream json("MyJSON.json", ios::app);

    json << "\t\t{" << endl;
    json << "\t\t\t\"name\": " << "\"" <<pokemon.getName() << "\"" << "," << endl;
    json << "\t\t\t\"HP\": " << pokemon.getHp() << "," << endl;
    json << "\t\t\t\"Attack\": " << pokemon.getAttack() << "," << endl;
    json << "\t\t\t\"Defence\": " << pokemon.getDefence() << "," << endl;
    json << "\t\t\t\"Speed\": " << pokemon.getSpeed() << endl;
    json << "\t\t}";

    if (!isLast) {
        json << ",";
    }

    json << endl;
    json.close();
}

void print(Slowpoke& pokemon, bool isLast) {
    ofstream json("MyJSON.json", ios::app);

    json << "\t\t{" << endl;
    json << "\t\t\t\"name\": " << "\"" <<pokemon.getName() << "\"" << "," << endl;
    json << "\t\t\t\"HP\": " << pokemon.getHp() << "," << endl;
    json << "\t\t\t\"Attack\": " << pokemon.getAttack() << "," << endl;
    json << "\t\t\t\"Defence\": " << pokemon.getDefence() << "," << endl;
    json << "\t\t\t\"Speed\": " << pokemon.getSpeed() << endl;
    json << "\t\t}";

    if (!isLast) {
        json << ",";
    }

    json << endl;
    json.close();
}




int main() {
    ofstream json("MyJSON.json", ios::app);

    json << "{" << endl;
    json << "\t\"pokemons\": [" << endl;
    json.close();

    Pokemon pokemon("Unknown", 90, 1, 40, 50);
    print(pokemon, false);

    Pikachu pikachu("Pikachu", 1030, 90, 80, 70, 100, 100);
    print(pikachu, false);

    Slowpoke slowpoke("Slowpoke", 40, 20, 30, 22, 10, 5);
    print(slowpoke, false);

    Charmander charmander("Charmander", 40, 22, 33, 77, 100, 55);
    print(charmander, true);

    json.open("MyJSON.json", ios::app);
    json << "\t]" << endl;
    json << "}" << endl;
    json.close();

    return 0;
}
