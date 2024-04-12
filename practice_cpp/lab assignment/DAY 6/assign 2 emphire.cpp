/*

*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Employee {
protected:
    string name;
    double salary;

public:
    Employee(const string& n, double s) : name(n), salary(s) {}

    virtual double computeNetSal() const = 0;

    virtual void displayInfo() const {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }
};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(const string& n, double s, double b) : Employee(n, s), bonus(b) {}

    double computeNetSal() const override {
        return salary + bonus;
    }

    void displayInfo() const override {
        cout << "Manager - ";
        Employee::displayInfo();
    }
};

class Worker : public Employee {
public:
    Worker(const string& n, double s) : Employee(n, s) {}

    double computeNetSal() const override {
        return salary;
    }

    void displayInfo() const override {
        cout << "Worker - ";
        Employee::displayInfo();
    }
};

int main() {
    vector<Employee*> employees; // Array to store employee objects
    int choice;

    do {
        cout << "\nOptions:\n";
        cout << "1. Hire Manager\n";
        cout << "2. Hire Worker\n";
        cout << "3. Display information of all employees net salary\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                double salary, bonus;
                cout << "Enter manager details (name, salary, bonus): ";
                cin >> name >> salary >> bonus;
                employees.push_back(new Manager(name, salary, bonus));
                break;
            }
            case 2: {
                string name;
                double salary;
                cout << "Enter worker details (name, salary): ";
                cin >> name >> salary;
                employees.push_back(new Worker(name, salary));
                break;
            }
            case 3: {
                cout << "\nEmployee Details:\n";
                for (const auto& emp : employees) {
                    emp->displayInfo();
                    cout << "Net Salary: " << emp->computeNetSal() << endl;
                }
                break;
            }
            case 4:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);

    // Free allocated memory
    for (auto emp : employees) {
        delete emp;
    }

    return 0;
}

