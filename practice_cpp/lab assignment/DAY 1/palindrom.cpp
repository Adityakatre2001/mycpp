#include <iostream>

using namespace std;

bool isPalindrome(int number) {
    int reversedNumber = 0;
    int originalNumber = number;

    // Reverse the number
    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    // Check if the original number is equal to its reverse
    return originalNumber == reversedNumber;
}

int main() {
    int number;
    cout << "Enter a number to check if it's a palindrome: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}

