#include <iostream>
using namespace std;

class Department {
public:
    string name;
    string code;

    Department(string n = "", string c = "") {
        name = n;
        code = c;
    }
};

class Student {
public:
    string name;
    int age;
    Department dept;

    Student(string n, int a, Department d) : dept(d) {
        name = n;
        age = a;
    }

    void show() {
        cout << "Name: " << name << " Age: " << age << " Department: " << dept.name << " (" << dept.code << ")" << endl;
    }
};

int main() {
    Department d1("Artificial Intelligence", "AI");

    Student students[3] = {
        Student("Ali", 19, d1),
        Student("Ahmed", 21, d1),
        Student("Mu'ammal'", 20, d1)
    };

    for(int i = 0; i < 3; i++) {
        students[i].show();
    }

    return 0;
}
