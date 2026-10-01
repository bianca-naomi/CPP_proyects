#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "First time: " << endl;
    int time1;
    cin >> time1;
    string suffix1;
    cin >> suffix1;
    cout << "Second time: " << endl;
    int time2;
    cin >> time2;
    string suffix2;
    cin >> suffix2;

    if (suffix1 == suffix2)
    {
        if (time1 < time2)
        {
            cout << "Before" << endl;
        }
        else if (time1 > time2)
        {
            cout << "After" << endl;
        }
        else
        {
            cout << "Same" << endl;
        }
    }
    else if (suffix1 == "am" && suffix2 == "pm")
    {
        cout << "Before" << endl;
    }
    else
    {
        cout << "After" << endl;
    }

    return 0;
}