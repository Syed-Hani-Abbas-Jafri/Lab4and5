#include <iostream>
using namespace std;

class Branch {
public:
    string branchName;
    string city;

    Branch(string n = "", string c = "") {
        branchName = n;
        city = c;
    }
};

class Account {
private:
    string accountHolder;
    float balance;
    Branch* branch;              // Aggregation

public:
    static string bankName;
    static float interestRate;

    Account(string holder, float bal, Branch* b) {
        accountHolder = holder;
        balance = bal;
        branch = b;
    }

    static void updateInterestRate(float rate) {
        interestRate = rate;
    }

    void showBalance() const {
        cout << "Bank: " << bankName<< " Account Holder: " << accountHolder<< " Balance: " << balance<< " Branch: " << branch->branchName << " (" << branch->city << ")"         << " Interest Rate: " << interestRate << "%"<< endl;
    }
};

string Account::bankName = "HBL";
float Account::interestRate = 5.0;

int main() {

    Branch b1("Johar Branch", "Karachi");

    Account accounts[2] = {
        Account("Osama", 100, &b1),
        Account("Saeed", 1500, &b1)
    };

    for(int i = 0; i < 2; i++) {
        accounts[i].showBalance();
    }

    cout << "\nUpdating Interest Rate...\n";
    Account::updateInterestRate(7.5);

    for(int i = 0; i < 2; i++) {
        accounts[i].showBalance();
    }

    return 0;
}
