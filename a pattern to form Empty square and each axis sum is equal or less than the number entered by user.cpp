#include<iostream>
using namespace std;

int main () 
{
  int s = 1;
  int x = 0;
  {
    int y = 0;
    cout << "Enter size:" << "\n";
    cin >> x;
    x = x / 2;
    y = x;
    while (x >= 1)
    {
	 int i = 1;
	 while (i <= x)
	 {
	    cout << i;
	    i++;
	 }
	int j = s;
	while (j > 1)
	{
	    cout << "  ";
	    j--;
	 }
	 int k = x;
	while (k >= 1)
	{
	   cout << k;
	   k--;
	 }
	x--;
	cout << endl;
	s++;
        
    }
    int space = y;
    int m = 1;
    while (m <= y)
    {
        int i = 1;
        while (i <= m)
        {
	      cout << i;
	      i++;
            
        }
        int j = space;
        while (j > 1)
        {
            cout << "  ";
            j--;
            
        }
        int f = m;
        while (f >= 1)
        {
            cout << f;
            f--;
            
        }
        m++;
        cout << endl;
        space--;
        
    }
    return 0;
  }
}
