#include<iostream>
using namespace std;
int main () 
{
  
    //multiple new variables are used to avoi redifination error
   int var = 0;			//new variable for outer loop
   int num = 0;			//Num from user
   cout << "please enter number=";
  cin >> num;
  int q = num;
  int space = num;
  int e = 1;
  while (var < num)		//Controlling loop
  {
      int i = 0;
      while (i < e)
      {
        cout << "*";
        i++;
      }
    int j = 1;		//print spaces triangle
    while (j <= space)
    {
      cout << " ";
      j++;
    }
    int p = num;
    while (p >= e)
    {
      cout << "*";
      p--;
    }
    int z = num;		//print spaces triangle
    while (z >= space)
    {
      cout << "  ";
      z--;
    }
    int n = num;		//print triangle
    while (n >= e)
    {
      cout << "*";
      n--;
    }
    int l = 1;		//print spaces triangle
    while (l <= space)
    {
      cout << " ";
      l++;
    }
    int m = 0;
    while (m < e)
    {
      cout << "*";
      m++;
    }
    cout << "\n";
    var++;
    e++;
    space--;
  }
  return 0;
}
