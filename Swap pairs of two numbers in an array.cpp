//******************************************************************************

//                               C++ 
//      Swap pairs of two numbers in an array 
//*******************************************************************************/
#include <iostream>
using namespace std;
void swap (int arr[], int n, int x, int index)
{
  int temp = arr[index];
  for (int i = index; i > x; i--)
    {
      arr[i] = arr[i - 1];
      arr[x] = temp;
    }
}

void check (int arr[], int n)
{
  int c = -1;
  for (int i = 0; i < n; i++)
  {
    if (c >= 0)
    {
      if (((arr[i] >= 0) && (arr[c] < 0))|| ((arr[i] < 0) && (arr[c] >= 0)))
      {
        swap (arr, n, c, i);
        if (i - c > 2)
        {
          c += 2;
        }
        else
        {
          c = -1;
        }
      }
    }
    else if (c == -1)
    {
      if (((arr[i] >= 0) && (!(i & 1))) || ((arr[i] < 0) && (i & 1)))
      {
        c = i;
      }
    }
  }
}

void outputArray (int a[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

void inputArray (int a[], int size)
{
  cout << "ENTER ELEMENETS IN ARRAY" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> a[i];
  }
}

int main ()
{
  int arr[100];
  int n = 0;
  cout << "ENTER SIZE OF ARRAY" << endl;
  cin >> n;
  inputArray (arr, n);
  cout << "Given array is " << "\n";
  outputArray (arr, n);
  check (arr, n);
  cout << "After rearranging of array " << "\n";
  outputArray (arr, n);
  return 0;
}
