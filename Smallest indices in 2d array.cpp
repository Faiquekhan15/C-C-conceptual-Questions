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

void smallestIndices (int arr[row][col], int rows, int col, int &smallestX,int &smallestY)
{
  int i, j;
  smallestX = 0;
  smallestY = 0;
  for (i = 0; i < rows; ++i)
    {
      for (j = 0; j < col; ++j)
	{
	  if (arr[i][j] <= arr[smallestX][smallestY])
	    {
	      smallestX = i;
	      smallestY = j;
	    }
	  else
	    {
	      continue;
	    }
	}
    }
  cout << "posx=" << smallestX << "\n";
  cout << "posy=" << smallestY << "\n";
}

int main ()
{
  int const size = 16;
  int c[size][size];
  int m = 0;
  int n = 0;
  int x = 0;
  int y = 0;
  int a[size][size];
  cout << "Enter the number of rows:" << endl;
  cin >> m;
  cout << "Enter the number of col:" << endl;
  cin >> n;
  cout << "Enter elements in an Matrix1:" << endl;
  inputarr (a, m, n);
  cout << "Output of 1 matrix:" << endl;
  printarray (a, m, n);
  cout << "Output  of matrix:" << endl;
  printarray (a, m, n);
  smallestIndices (a, m, n, x, y);
  return 0;
}
