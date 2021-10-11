
#include<iostream>
using namespace std;
void PRINTDIGIT (int N)
{
  if (N >= 0 && N <= 9)
    {
      cout << N << "\n";
    }
  else
    {
      int NUMOFDIGIT = N % 10;
      PRINTDIGIT (N / 10);
      cout << NUMOFDIGIT << "\n";

    }
}

int main ()
{
  int n = 0;
  cout << "ENTER THE NUMBER PLEASE" << " " << "=";
  cin >> n;
  PRINTDIGIT (n);
  return 0;
}
