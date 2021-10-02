#include<iostream>
using namespace std;
int const col = 16;
int const row = 16;
void inputarr (int input[row][col], int row, int col)
{
  for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
	{
	  cin >> input[i][j];
	}
    }
}

void printarray (int a[row][col], int row, int col)
{
  for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
	{
	  cout << a[i][j] << "\t";
	}
      cout << endl;
    }

}

void SwapColumns (int list[row][col], int row, int ColNumber1, int ColNumber2)
{

  int temp = 0;
  for (int i = 0; i < row; i++)
    {
      temp = list[i][ColNumber1];
      list[i][ColNumber1] = list[i][ColNumber2];
      list[i][ColNumber2] = temp;
    }
}

int
main ()
{

  int const size = 16;
  int c[size][size];
  int m = 0;
  int n = 0;
  int n1 = 0;
  int n2 = 0;
  int a[size][size];
  cout << "Enter the number of rows:" << endl;
  cin >> m;
  cout << "Enter the number of col:" << endl;
  cin >> n;
  cout << "Enter elements in an Matrix1:" << endl;
  inputarr (a, m, n);
  cout << "Output of 1 matrix:" << endl;
  printarray (a, m, n);
  cout << "enter  swapping col 1 :" << endl;
  cin >> n1;
  cout << "enter  swapping col 2 :" << endl;
  cin >> n2;
  SwapColumns (a, m, n1, n2);
  cout << "Output  of matrix:" << endl;
  printarray (a, m, n);
  system ("pause");
  return 0;
}
