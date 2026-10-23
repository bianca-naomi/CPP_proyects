#include <iostream>
using namespace std;

int main() 
{
   int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

   cout << "Month (1 - 12): " << endl;
   int month; 
   cin >> month;
   cout << "Year: " << endl;
   int year; 
   cin >> year;
   
   if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 
   {
      days_in_month[1] = 29; // It's a leap year. Adjust the entry for February
   }

   // Get the number of days in the given month
   int days = days_in_month[month - 1];

   cout << "Number of days: " << days << endl;
   return 0; 
}
