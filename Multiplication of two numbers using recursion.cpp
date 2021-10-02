//******************************************************************************

//                               C++ 
//              Multiplication of two Numbers using Recursion 
//*******************************************************************************/

#include<iostream>
using namespace std;
int mul (int a, int b)
{
  if (b > 0)
    {
      return a + mul (a, b - 1);

    }
  else
    {
      return 0;
    }
}

int main ()
{
  int a = 0;
  int b = 0;
  cout << "ENTER FIRST NUM" << endl;
  cin >> a;
  cout << "ENTER SECOND NUM" << endl;
  cin >> b;
  cout << "The product = " << mul (a, b) << "\n";
  return 0;
}
