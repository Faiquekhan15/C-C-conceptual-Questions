#include<iostream>
using namespace std;
void asendingsort (int arr1[10])
{
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr1[j] < arr1[i])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
            
        }
    }
}

void desendingsort (int arr1[10])
{
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr1[j] > arr1[i])
            {
                temp = arr1[j];
                arr1[j] = arr1[i];
                arr1[i] = temp;
            }
	    }
    }
}

void output (int arr[10])
{
  cout << "SORTED LIST IN ASCENDING" << endl;
  for (int i = 0; i < 10; i++)
    {
      cout << arr[i];
    }
}

void output1 (int arr[10])
{
  cout << "SORTED LIST IN DESCENDING" << endl;
  for (int i = 0; i < 10; i++)
    {
      cout << arr[i];
    }
}



int main ()
{
  int arr[10] = { 45, 5, 4, 2, 10, 9, 8, 7, 12, 1 };
  char x;
  char a = { '\0' };
  char d = { '\0' };
  cout <<"/******************************************************************************"<< endl;
  cout <<"/******************************************************************************"<< endl;
  cout << "ENTER WHICH OPERATION YOU WANT TO PERFORM ASSENDING OR DESENDING"<< "\n";
  cout << "PRESS 'a' FOR ASSENDING AND 'd' FOR DESENDING" << "\n";
  cout <<"/******************************************************************************"<< endl;
  cout <<"/******************************************************************************"<< endl;
  cin >> x;
  if (x == 'a')
  {
      asendingsort (arr);
      output(arr);
      
  }
  if (x == 'd')
  {
      desendingsort (arr);
      output1(arr);
      
  }
 
  return 0;
}
