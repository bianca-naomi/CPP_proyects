#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double RATE_1_7 = 0.05;
	const double RATE_8_14 = 0.08;
	const double RATE_15_21 = 0.10;
	const double RATE_OVER_21 = 0.12;
	double FEE;
	int DAYS_LATE;
	cout << "Enter the number of days the book is late: ";
	cin >> DAYS_LATE;
	

	if (cin.fail())
		{
			cout << endl << "Error. Input must be an integer. Program will terminate.\n" << endl << "Goodbye!\n";
		}
		
	else if (DAYS_LATE < 1)
		{
			cout << endl << "Number of days late must be 1 or more. Program will terminate.\n" << endl << "Goodbye!\n";
		}
	else
	{

		if (DAYS_LATE <= 7)
		{
			FEE = DAYS_LATE * RATE_1_7;
		}
		else if (DAYS_LATE <= 14)
		{
			FEE = DAYS_LATE * RATE_8_14;
		}
		else if (DAYS_LATE <= 21)
		{
			FEE = DAYS_LATE * RATE_15_21;
		}
		else
		{
			FEE = DAYS_LATE * RATE_OVER_21;
		}
		cout << endl << "The total fee is: $" << fixed << setprecision(2) << FEE << ".\n" << endl << "Goodbye!\n";
	}
			return 0;
}
