//142536
//Course DBIT Sep-Dec 2023
//Strathmore university

//check for leap year
#include<iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if(year %4==0){
        if(year %100==0){
            if(year%400==0){
                cout<<"Is a leap year";
            }
            else{
                cout<<"Not a leap year";
            }

            }
        }
    return 0;
    }

