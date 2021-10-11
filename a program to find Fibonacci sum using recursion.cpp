#include<iostream>
using namespace std;
int fib (int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return fib (n - 1) + fib (n - 2);
  }
}
int main ()
{
  int n;
  cout<<"ENTER HOW MANY FIBONACCI NUMBERS SUM YOU WANT=";
  cin>>n;
  cout<<"YOU ENTERED="<<n<<"\n";
  cout <<"SUM OF FIBONACCI NUMBERS ARE=" <<fib (n);
  return 0;
}
