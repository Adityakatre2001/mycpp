#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int numDigits = 0;
    int sum = 0;

    while (originalNum != 0) {
        originalNum /= 10;
        numDigits++;
    }

    originalNum = num;
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, numDigits);
        originalNum /= 10;
    }
    return (sum == num);
}

int main() {
    int number;


    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." <<endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}

