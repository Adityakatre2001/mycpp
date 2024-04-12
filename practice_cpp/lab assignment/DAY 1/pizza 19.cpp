#include <iostream>
#include <iomanip>

using namespace std;

// Function to display menu and return the price of selected pizza
double displayMenu() {
    cout << "Welcome to Pizza Shop!" << endl;
    cout << "Menu:" << endl;
    cout << "1. Margherita Pizza - $8.99" << endl;
    cout << "2. Pepperoni Pizza - $9.99" << endl;
    cout << "3. Hawaiian Pizza - $10.99" << endl;
    cout << "4. Vegetarian Pizza - $11.99" << endl;
    cout << "5. Exit" << endl;
    cout << "------------------------" << endl;
    cout << "Please enter your choice (1-5): ";

    int choice;
    cin >> choice;

    double price = 0.0;

    switch(choice) {
        case 1:
            price = 8.99;
            break;
        case 2:
            price = 9.99;
            break;
        case 3:
            price = 10.99;
            break;
        case 4:
            price = 11.99;
            break;
        case 5:
            cout << "Thank you for visiting!" << endl;
            exit(0);
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

    return price;
}

int main() {
    double totalAmount = 0.0;

    while (true) {
        double pizzaPrice = displayMenu();
        totalAmount += pizzaPrice;
        cout << fixed << setprecision(2);
        cout << "Current total amount: $" << totalAmount << endl;
        cout << "------------------------" << endl;
    }

    return 0;
}

