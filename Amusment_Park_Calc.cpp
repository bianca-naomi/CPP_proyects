#include <iostream>
using namespace std;

int main()
{
	int adults;
	int children;
	cout << "Enter the number of adults and children: ";
	cin >> adults;
	cin >> children;

	if (adults + children >= 10)
	{
		cout << "Buy group pass" << endl;
	}
	else if (adults >= 2)
	{
		if (children >= 3)
		{
			cout << "Buy family pass" << endl;
		}
		else
		{
			cout << "Buy individual tickets" << endl;
		}
	}
	else if (children >= 4)
	{
	cout << "Buy family pass" << endl;
}
else
{
	cout << "Buy individual tickets" << endl;
}
	return 0;
}