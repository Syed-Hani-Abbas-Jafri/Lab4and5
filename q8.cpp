#include <iostream>
using namespace std;

class Weapon {
public:
    string weaponName;
    int damage;

    Weapon(string w = "", int d = 0) {
        weaponName = w;
        damage = d;
    }
};

class Player {
private:
    string playerName;
    int health;
    Weapon weapon;               
    static int activePlayers;

public:
    Player(string name, int h, string wName, int dmg)
        : weapon(wName, dmg) {
        playerName = name;
        health = h;
        activePlayers++;
    }

    ~Player() {
        activePlayers--;
    }

    static void showActivePlayers() {
        cout << "Active Players: " << activePlayers << endl;
    }

    void showStatus() const {
        cout << "Player: " << playerName << "Health: " << health<< " Weapon: " << weapon.weaponName<< " Damage: " << weapon.damage<< endl;
    }
};

int Player::activePlayers = 0;

int main() {
    {
        Player players[2] = {
            Player("Cammens", 100, "Lance", 25),
            Player("RObert", 90, "Pike", 20)
        };

        Player::showActivePlayers();

        for(int i = 0; i < 2; i++) {
            players[i].showStatus();
        }
    }
    cout << "Post Match" << endl;
    Player::showActivePlayers();

    return 0;
}
