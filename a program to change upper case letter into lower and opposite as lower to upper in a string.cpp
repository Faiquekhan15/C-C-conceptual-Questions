#include<iostream>
using namespace std;
#include<cstring>
void changecase (char arr[])
{
  int x = 0;
  int temp = 0;
  int temp2 = 0;
  x = strlen (arr);
  for (int i = 0; i <= x; i++)
  {
      if (arr[i] >= 65 && arr[i] <= 90)
      {
        temp = i;
        arr[temp] = arr[temp] + 32;
      }
    else if (arr[i] >= 97 && arr[i] <= 122)
    {
      temp2 = i;
      arr[temp2] = arr[temp2] - 32;
    }
  }
  for (int k = 0; k <= x; k++)
  {
    cout << arr[k];
  }
}

int main ()
{
  char arr1[20];
  cout << "ENTER STRING" << endl;
  cin.getline (arr1, 20);
  changecase (arr1);
  return 0;
}
