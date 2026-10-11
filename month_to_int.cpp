#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the month as an integer (1=Jan, 2=Feb, etc.): " << endl;
    int month;
    cin >> month;

    if (month != 0 && month <= 12)
    {
        cout << month << " is a valid month." << endl;
    }
    else
    {
        cout << month << " is not a valid month." << endl;
    }

    return 0;
}
//Validates the integer value entered by the user to represent the current month.