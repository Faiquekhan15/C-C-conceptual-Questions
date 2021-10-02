//******************************************************************************

//                               C++ 
//      Find Minimum number in an Array with in specific range using Recursion 
//*******************************************************************************/
#include<iostream>
using namespace std;
int min (int a[], int start, int end)
{
  if (end == 1)
    return a[0];

  if (a[start] > a[end])
    a[start] = a[end];

  return min (a, end, start);
}

int main ()
{
  int a[10];
  int size = 0;
  int m = 0;
  int n = 0;
  cout << "Size of Array" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
    {
      cout << "ENTER ELEMENTS IN ARRAY=";
      cin >> a[i];
    }
  cout << "Enter Starting value" << endl;
  cin >> m;
  cout << "Enter Ending value" << endl;
  cin >> n;
  cout << "Minimum Number in a Given range is" << endl;
  cout << min (a, m, n);
  return 0;
}
