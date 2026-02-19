#include <iostream>
using namespace std;

class Player {
private:
    string name;
    static int totalPlayers;

public:
    Player(string n) {
        name = n;
        totalPlayers++;
    }

    ~Player() {
        totalPlayers--;
    }

    static void showPlayers() {
        cout << "Total Players Online: "<< totalPlayers << endl;
    }
};

int Player::totalPlayers = 0;

int main() {
    {
        Player p1("A");
        Player p2("B");
        Player::showPlayers();
    }
    cout << "Post-Match" << endl;
    Player::showPlayers();

    return 0;
}
