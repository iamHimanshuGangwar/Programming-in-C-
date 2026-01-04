#include<iostream>
using namespace std;

int main() {
    int num, rev = 0, original;
    cin >> num;
    original = num;

    
    while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (original == rev) {
        cout << "Palindrome";
    } else {
        cout << "Not a Palindrome";
    }

    return 0;
}
