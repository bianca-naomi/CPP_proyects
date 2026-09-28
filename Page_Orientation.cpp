#include <iostream>

using namespace std;

int main()
{
	cout << "Width: " << endl;
	int width;
	cin >> width;
	cout << "Height: " << endl;
	int height;
	cin >> height;

	if (width > height)// Use an if/else if/else statement to print
		cout << "Landscape\n";// Portrait, Landscape, or Square

	else if (height > width)
		cout << "Portrait\n";

	else if (height == width)
		cout << "Square\n";// Your code goes here

	return 0;
}