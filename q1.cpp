#include <iostream>
using namespace std;

class Car {
private:
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }

    void showSpeed() const {
        cout << "Car Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car c1;
    c1.setSpeed(120);
    c1.showSpeed();

    return 0;
}
