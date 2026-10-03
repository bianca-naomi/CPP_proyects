#include <iostream>

using namespace std;

int main()
{
    cout << "(Number must be greater than t10) " << "Enter n: " << endl;
    int n;
    cin >> n;

    int i = 10;
    while (i < n)
    {
        cout << i << " ";
        i += 10;

    }
	if (n < 10)
    {
        cout << "The number is less than 10" << endl;
    }
    cout << endl;

    return 0;
}