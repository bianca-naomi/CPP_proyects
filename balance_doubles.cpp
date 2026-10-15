#include <iostream>
using namespace std;

int main()
{
	const double RATE = 5;
	const double INITIAL_BALANCE = 10000;
	const double TARGET = 2 * INITIAL_BALANCE;

	cout << "Annual contribution: " << endl;
	double contribution;
	cin >> contribution;

	double balance = INITIAL_BALANCE;
	int year = 0;

	while (balance < TARGET)
	{
		year++;

		//Add annual contribution in year 1 and later ( not year 0)
		if (year > 1)
		{
			balance = balance += contribution;
		}

		// Add interest earned during the year
		double interest = balance * RATE / 100.0;
		balance = balance += interest;

	}
	cout << "Year: " << year << endl;
	cout << "Balance: " << balance << endl;
	return 0;
}

//we add a fixed amount of money into our bank account at the beginning of every year. 
// The program shows how many years it takes for the balance to double, given the annual contributions and the interest.