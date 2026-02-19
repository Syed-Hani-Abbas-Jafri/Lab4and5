#include <iostream>
using namespace std;

class BankAccount {
private:
    static float interestRate;

public:
    static void changeRate(float r) {
        interestRate = r;
    }
    void showRate() {
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

float BankAccount::interestRate = 5.0; 
int main() {
    BankAccount a1, a2;
    a1.showRate();
    a2.showRate();
    BankAccount::changeRate(7.5);
    cout << "\nAfter Change:\n";
    a1.showRate();
    a2.showRate();
    return 0;
}
