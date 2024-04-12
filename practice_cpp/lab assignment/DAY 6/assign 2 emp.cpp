#include <iostream>
#include <vector>
#include <string>

// Base class Employee
class Employee {
protected:
    std::string name;
    double salary;

public:
    Employee(const std::string& n, double s) : name(n), salary(s) {}

    virtual double computeNetSal() const = 0;

    virtual void displayInfo() const {
        std::cout << "Name: " << name << ", Salary: " << salary << std::endl;
    }
};

// Derived class Manager
class Manager : public Employee {
private:
    std::string department;

public:
    Manager(const std::string& n, double s, const std::string& d) : Employee(n, s), department(d) {}

    double computeNetSal() const override {
        // Net salary calculation logic for manager
        return salary * 0.9; // For example, 10% deduction for taxes
    }

    void displayInfo() const override {
        std::cout << "Manager - ";
        Employee::displayInfo();
        std::cout << "Department: " << department << std::endl;
    }
};

// Derived class Worker
class Worker : public Employee {
private:
    std::string skill;

public:
    Worker(const std::string& n, double s, const std::string& sk) : Employee(n, s), skill(sk) {}

    double computeNetSal() const override {
        // Net salary calculation logic for worker
        return salary * 0.95; // For example, 5% deduction for taxes
    }

    void displayInfo() const override {
        std::cout << "Worker - ";
        Employee::displayInfo();
        std::cout << "Skill: " << skill << std::endl;
    }
};

int main() {
    std::vector<Employee*> employees;

    int choice;
    do {
        std::cout << "\nOptions:\n";
        std::cout << "1. Hire Manager\n";
        std::cout << "2. Hire Worker\n";
        std::cout << "3. Display information of all employees net salary\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1: {
                std::string name, department;
                double salary;
                std::cout << "Enter Manager name: ";
                std::cin >> name;
                std::cout << "Enter Manager salary: ";
                std::cin >> salary;
                std::cout << "Enter Manager department: ";
                std::cin >> department;
                employees.push_back(new Manager(name, salary, department));
                break;
            }
            case 2: {
                std::string name, skill;
                double salary;
                std::cout << "Enter Worker name: ";
                std::cin >> name;
                std::cout << "Enter Worker salary: ";
                std::cin >> salary;
                std::cout << "Enter Worker skill: ";
                std::cin >> skill;
                employees.push_back(new Worker(name, salary, skill));
                break;
            }
            case 3: {
                std::cout << "\nNet Salary of all employees:\n";
                for (const auto& emp : employees) {
                    std::cout << emp->computeNetSal() << std::endl;
                }
                break;
            }
            case 4:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while(choice != 4);

    // Free memory
    for (auto emp : employees) {
        delete emp;
    }

    return 0;
}

