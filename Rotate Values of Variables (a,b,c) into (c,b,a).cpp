#include<iostream>
using namespace std;
void rotate2 (int &a, int &b, int &c) 
{
  int t1, t2, t3;
  t1 = a;
  t2 = b;
  t3 = c;
  a = t3;			//c->a
  b = t1;			//a->b
  c = t2;			//b->c
  cout << "After rotation" << endl;
  cout << a << " " << b << " " << c << " ";
} 
int main () 
{
  int a = 0, b = 0, c = 0;
  cout << "ENTER VALUE OF a" << endl;
  cin >> a;
  cout << "ENTER VALUE OF b" << endl;
  cin >> b;
  cout << "ENTER VALUE OF c" << endl;
  cin >> c;
  cout << "Before rotation" << endl;
  cout << a << " " << b << " " << c << " ";
  cout << endl;
  rotate2 (a, b, c);
  return 0;
}


