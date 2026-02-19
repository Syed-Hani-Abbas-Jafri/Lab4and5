#include <iostream>
using namespace std;

class Project {
public:
    string projectTitle;
    int duration;  
    Project(string t = "", int d = 0) {
        projectTitle = t;
        duration = d;
    }
};

class Employee {
private:
    string empName;
    float salary;
    Project* project;         
    static float taxRate;

public:
    Employee(string name, float sal, Project* p) {
        empName = name;
        salary = sal;
        project = p;
    }

    static void changeTaxRate(float rate) {
        taxRate = rate;
    }

    float calculateNetSalary() const {
        return salary - (salary * taxRate / 100);
    }

    void showDetails() const {
        cout << "Employee: " << empName<< " Salary: " << salary << " Net Salary: " << calculateNetSalary() << " Project: " << project->projectTitle<< endl;
    }
};

float Employee::taxRate = 10.0;

int main() {

    Project p1("Server Ltd", 12);

    Employee employees[2] = {
        Employee("Sadiq", 50000, &p1),
        Employee("Alauddin", 60000, &p1)
    };

    for(int i = 0; i < 2; i++) {
        employees[i].showDetails();
    }

    cout << "\nChanging Tax Rate\n";
    Employee::changeTaxRate(15);

    for(int i = 0; i < 2; i++) {
        employees[i].showDetails();
    }

    return 0;
}
