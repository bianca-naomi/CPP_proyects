//Make_copy of first half of an array of strings

#include <iostream>
#include <string>
using namespace std;

/**
   Copies the first half of an array.
   @param values an array
   @param size the number of elements in values
   @param half the array holding the first half
   @return the number of elements in half
*/
int copy_half(string values[], int size, string half[])
{
   for (int i = 0; i < size/2; i++)
   {
      half[i] = values[i];
   }
   return size/2;
}

void print_array(string a[], int size)
{
   cout << "[";
   if (size > 0)
   {
      cout << "\"" << a[0] << "\"";
      for (int i = 1; i < size; i++)
      {
         cout << ", \"" << a[i] << "\"";
      }
   }
   cout << "]" << endl;
}

int main()
{
   string copy[10];
   string a[] = { "Mary", "had", "a", "little", "lamb" };
   cout << "a = "; print_array(a, 5);  
   int copy_size = copy_half(a, 5, copy);
   cout << "first_half"; 
   print_array(copy, copy_size);
   cout << endl;
   
   string b[] = { "its", "fleece", "was", "white", "as", "snow" };
   cout << "b = "; print_array(b, 6);  
   copy_size = copy_half(b, 6, copy);
   cout << "first_half"; 
   print_array(copy, copy_size);
   
   return 0;
}
