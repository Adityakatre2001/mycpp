#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    int employeeId;
public:
    Employee(string name, int employeeId) : name(name), employeeId(employeeId) {}
    virtual double calculatePay() const = 0;
    virtual void display() const {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
    }
};
class HourlyEmployee : public Employee {
private:
    double hourlyRate;
    double hoursWorked;
public:
    HourlyEmployee(string name, int employeeId, double hourlyRate, double hoursWorked)
        : Employee(name, employeeId), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}
    double calculatePay() const override {
        return hourlyRate * hoursWorked;
    }
    void display() const override {
        Employee::display();
        cout << "Pay: " << calculatePay() << endl;
    }
};
class SalariedEmployee : public Employee {
private:
    double salary;
public:
    SalariedEmployee(string name, int employeeId, double salary)
        : Employee(name, employeeId), salary(salary) {}

    double calculatePay() const override {
        return salary;
    }
    void display() const override {
        Employee::display();
        cout << "Pay: " << calculatePay() << endl;
    }
};
int main() {
    HourlyEmployee hourlyEmp("Keshav", 1500, 15.5, 40);
    SalariedEmployee salariedEmp("Ram", 1501, 500);
    cout << "Hourly Employee:" << endl;
    hourlyEmp.display();
    cout << endl;
    cout << "Salaried Employee:" << endl;
    salariedEmp.display();
    cout << endl;
    return 0;
}

