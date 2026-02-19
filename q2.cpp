#include <iostream>
using namespace std;

class Book {
public:
    string title;
    float price;
};

int main() {
    Book books[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter title of book " << i+1 << ": ";
        cin >> books[i].title;
        cout << "Enter price: ";
        cin >> books[i].price;
    }

    cout << "\nBook Details:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Title: " << books[i].title
             << ", Price: " << books[i].price << endl;
    }

    return 0;
}

