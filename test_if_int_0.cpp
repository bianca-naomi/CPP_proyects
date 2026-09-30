#include <iostream>
using namespace std;

int main()
{
    cout << "Enter x: " << endl;
    int x;
    cin >> x;
    cout << "Enter y: " << endl;
    int y;
    cin >> y;
    if ((x == 0 && y != 0) || (x != 0 && y == 0))
    {
        cout << "Exactly one of " << x << " and " << y << " is zero.";
    }
    else
    {
        cout << "Neither or both of " << x << " and " << y << " are zero.";
    }
    return 0;
}