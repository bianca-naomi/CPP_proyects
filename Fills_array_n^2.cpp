#include <iostream>
using namespase std;
  
void squares(int n, int* result)
{
  for (int i = 0; i < n; i++)
  {  
  result[i] = (i + 1) * (i + 1);
  }
}

int main()
{
  int n; 
  cin >> n;
  int arr[n];

  squares(n, arr);
    for( int i = 0; i < n; i++)
    {
    cout << arr[i] << endl;
    }

  return 0;
}
