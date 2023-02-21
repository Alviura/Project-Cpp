#include <iostream>

using namespace std;
int main()
{
    char name [20];
    int units;
    double charges;
    cout << "Enter user name: ";
    cin >> name;
    cout << "Enter number of units: ";
    cin >> units;
    if (units <= 100)
    {
        charges = units * 60.0;
    }
    else if (units <= 300)
    {
        charges = 100 * 60.0 + (units - 100) * 80.0;
    }
    else
    {
        charges = 100 * 60.0 + 200 * 80.0 + (units - 300) * 90.0;
    }

    charges = max(charges, 50.0);

    if (charges > 300.0)
    {
        charges *= 1.15;
    }

    cout << "Name: " << name << endl;
    cout << "Units consumed: " << units << endl;
    cout << "Charges: KES " << charges << endl;
    return 0;
}