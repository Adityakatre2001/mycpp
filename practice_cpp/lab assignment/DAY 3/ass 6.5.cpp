#include <iostream>
#include <string>
using namespace std;
class BankAccount {
protected:
    string account_number;
    double balance;
public:
    BankAccount(string account_number, double balance = 0) : account_number(account_number), balance(balance) {}

    void deposit(double amount) {
        balance += amount;
    }
    virtual void withdraw(double amount) = 0;
    virtual void display() {
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};
class SavingsAccount : public BankAccount {
public:
    SavingsAccount(string account_number, double balance = 0) : BankAccount(account_number, balance) {}
    void withdraw(double amount) override {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient funds" << endl;
        }
    }
    void calculate_interest(double rate) {
        double interest = balance * rate / 100;
        deposit(interest);
    }
    void display() override {
        BankAccount::display();
        cout << "Account Type: Savings" << endl;
    }
};
class CheckingAccount : public BankAccount {
private:
    double overdraft_limit;
public:
    CheckingAccount(string account_number, double balance = 0, double overdraft_limit = 0) : BankAccount(account_number, balance), overdraft_limit(overdraft_limit) {}

    void withdraw(double amount) override {
        if (balance + overdraft_limit >= amount) {
            balance -= amount;
        } else {
            cout << "Transaction denied: Insufficient funds" << endl;
        }
    }

    void display() override {
        BankAccount::display();
        cout << "Account Type: Checking" << endl;
        cout << "Overdraft Limit: " << overdraft_limit << endl;
    }
};

int main() {
    
    SavingsAccount savings_acc("Aditya", 5000);
    savings_acc.display();
    cout<<"--------------"<<endl;
    savings_acc.deposit(1800);
    savings_acc.calculate_interest(10);
    savings_acc.display();
    cout<<"--------------"<<endl;

    CheckingAccount checking_acc("bhavesh", 4000, 1500);
    checking_acc.display();
    cout<<"--------------"<<endl;
    checking_acc.withdraw(2800); // Insufficient funds
    checking_acc.withdraw(500);
    checking_acc.display();
    return 0;
}

