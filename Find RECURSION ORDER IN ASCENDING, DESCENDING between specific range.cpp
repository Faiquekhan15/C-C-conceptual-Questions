//******************************************************************************

//                               C++ 
//      Find RECURSION ORDER IN ASCENDING, DESCENDING between specific range
//*******************************************************************************/
#include<iostream>
using namespace std;
void listNumbers (int start, int end)
{
  if (start < end)
  {
    listNumbers (start + 1, end);
  }
  cout << start << " ";
}
void listNumbers1 (int start, int end)
{
  bool flag = true;
  if (start == 1)
  {
    flag = true;
  }
  else
  {
    flag = false;
    cout << start << " ";
    if (start < end)
    {
      listNumbers1 (start + 1, end);
    }
  }
}
int main ()
{
  int s = 0;
  int e = 0;
  cout << "Enter Starting number of list" << endl;
  cin >> s;
  cout << "Enter Ending number of list" << endl;
  cin >> e;
  cout << "RECURSION IN ASCENDING ORDER IS" << endl;
  listNumbers1 (s, e);
  cout << "\n";
  cout << "RECURSION IN DESCENDING ORDER IS" << endl;
  listNumbers (s, e);
  cout << "\n";
  return 0;
}
