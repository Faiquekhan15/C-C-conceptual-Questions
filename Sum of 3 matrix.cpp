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

void sumarr (int a[row][col], int b[row][col], int c[row][col], int summ[row][col],
	int row, int col)
{
  for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
	{
	  summ[i][j] = a[i][j] + b[i][j] + c[i][j];
	  cout << summ[i][j] << "\t";
	}
      cout << endl;
    }
}

int main ()
{

  int const size = 16;
  int c[size][size];
  int m = 0;
  int n = 0;
  int a[size][size];
  int b[size][size];
  int sum[size][size];
  cout << "Enter the number of rows:" << endl;
  cin >> m;
  cout << "Enter the number of col:" << endl;
  cin >> n;
  cout << "Enter elements in an Matrix1:" << endl;
  inputarr (a, m, n);
  cout << "Enter elements in an Matrix2:" << endl;
  inputarr (b, m, n);
  cout << "Enter elements in an Matrix3:" << endl;
  inputarr (c, m, n);
  cout << "Output of 1 matrix:" << endl;
  printarray (a, m, n);
  cout << "Output  of 2 matrix:" << endl;
  printarray (b, m, n);
  cout << "Output  of 3 matrix:" << endl;
  printarray (c, m, n);
  cout << "Output sum of  matrix:" << endl;
  sumarr (a, b, c, sum, m, n);
  system ("pause");
  return 0;
}
