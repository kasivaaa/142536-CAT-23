//142536
//Course DBIT Sep-Dec 2023
//Strathmore university
#include <iostream>
using namespace std;
int main() {
    //a program that takes characters and determines whether vowel or cononant
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << "The entered character is a vowel.";
        } else {
            cout << "The entered character is not a vowel.";
        }
        return 0;

