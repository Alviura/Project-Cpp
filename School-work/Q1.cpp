#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int choice, years;
    double principle, interest_rate = 0.16, accrued_amount, interest_earned;
    char name [20];
    char reg_no [20];
    cout << "Enter your name: ";
    cin >> name;
    cout <<  "Enter your regestration number: ";
    cin >> reg_no;

    cout << "Select an account type:"  <<endl;
    cout << "1. Saving account" << endl;
    cout << "2. Fixed deposit account" << endl;
    cout << "Enter your choice(1 or 2):";
    cin >> choice;

    cout <<"Enter principle amount:";
    cin >> principle;
    cout <<"Enter number of years:";
    cin >> years;

    switch (choice){
        case 1:
              accrued_amount = principle * pow(1 + interest_rate,years);
              interest_earned = accrued_amount - principle;
              break;
        case 2:
             accrued_amount = principle * pow(1 + interest_rate,years);
             interest_earned = accrued_amount - principle;  
             accrued_amount += principle;
             break;
        default:
            cout << "invalid choice.please select either 1 or 2" << endl;
            return 0;        
    }

    cout << "Name:" << name << endl;
    cout << "Registration No: " << reg_no << endl;
    cout << "The Principle:" << principle << endl;
    cout << "Accrued amount:"<< accrued_amount << endl;
    cout << "Interest earned:" << interest_earned << endl;

    return 0;
}