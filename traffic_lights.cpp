#include <iostream>
using namespace std;
#include <string>

int main ()
{
	int position;
	cout << "Enter the position of the traffic light (0 for red, 1 for yellow, 2 for green): ";
	cin >> position;
	string color;
	if (position == 0)
	{
		cout << "The traffic light is red. Please stop." << endl;
	}
	else if (position == 1)
	{
		cout << "The traffic light is yellow. Please prepare to stop." << endl;
	}
	else if (position == 2)
	{
		cout << "The traffic light is green. You may go." << endl;
	}
	else
	{
		cout << "Invalid position value." << endl;
	}
}