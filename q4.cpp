#include <iostream>
using namespace std;

class Engine {
public:
    int horsepower;

    Engine(int hp) {
        horsepower = hp;
    }
};

class Car {
public:
    string model;
    Engine engine;

    Car(string k, int hp) : engine(hp) {
        model = k;
    }

    void showDetails() {
        cout << "Model: " << model
             << " Horsepower: " << engine.horsepower << endl;
    }
};

int main() {
    Car c1("Cultus", 67);
    c1.showDetails();

    return 0;
}
