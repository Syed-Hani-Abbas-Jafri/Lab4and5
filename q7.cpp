#include <iostream>
using namespace std;

class Account {
private:
    string accountHolder;
    float balance;

public:
    static string bankName;
    static float interestRate;

    Account(string name, float bal) {
        accountHolder = name;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void showBalance() const {
        cout << "Account Holder: " << accountHolder<< ", Balance: " << balance << ", Bank: " << bankName<< ", Interest Rate: " << interestRate << "%"<< endl;
    }
};

string Account::bankName = "HBL";
float Account::interestRate = 6.0;

int main() {
    Account a1("Mustafa", 7000);
    Account a2("Sayyar", 2300);
    Account a3("Hozgan", 3000);

    a1.deposit(560);

    a1.showBalance();
    a2.showBalance();
    a3.showBalance();

    return 0;
}
