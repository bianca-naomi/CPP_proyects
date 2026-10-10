// program segment that determines if an arrangement to place two photos on a page, either next to each other or above each other.
#include <iostream>
using namespace std;

int main()
{
	int page_width = 60;
	int page_height = 100;

	int width1; cin >> width1;
	int height1; cin >> height1;

	int width2; cin >> width2;
	int height2; cin >> height2;

	if (width1 + width2 <= page_width && height1 <= page_height && height2 <= page_height)
	{
		cout << "Place photos horizontally" << endl;
	}
	else if (width1 <= page_width && width2 <= page_width && height1 + height2 <= page_height)
	{
		cout << "Place photos vertically" << endl;
	}
	else
	{
		cout << "Cannot place photos on the page" << endl;
	}
	return 0;
}