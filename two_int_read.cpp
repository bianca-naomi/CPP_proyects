#include <iostream>
using namespace std;

int main()
{
	cout << "First Number: ";
	int first; cin >> first;
	if (cin.fail())
	{
		cout << "Error:Not an integer." << endl;
	}
	else {
		cout << "Second number:" << endl;
		int second; cin >> second;

		if (cin.fail())
		{
			cout << "Error:Not an integer." << endl;
		}
		else if (first > second)
		{
			cout << "Difference: " << first - second << endl;
		}
		else {
			cout << "Error: The first input should be larger." << endl;
		}
	}
}
return 0;
}