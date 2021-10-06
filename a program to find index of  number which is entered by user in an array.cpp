#include<iostream>
using namespace std;
int const size = 50;
void input (int arr[size], int &size1) 
{
  cout << "ENTER LIST:" << "\n";
  for (int i = 0; i < size1; i++)
  {
    cin >> arr[i];
  } 
} 
void listop (int arr[size], int &size1) 
{
  cout << "INDEX OF ELEMENT IN LIST:" << "\n";
  for (int i = 0; i < size1; i++)
  {
    if (arr[i] <= 10)
    {
      cout << arr[i] << ":" << i << "\n";
    }
    else
    {
      continue;
    }
  }
  cout << " other position greater then 10" << "\n";
}


int main () 
{
  int arr[size];
  int size1 = 0;
  cout << "Enter size:" << "\n";
  cin >> size1;
  input (arr, size1);
  listop (arr, size1);
} 
