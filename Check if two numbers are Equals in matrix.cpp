#include<iostream>
using namespace std;

int const col = 16;
int const row = 16;
bool IsEqual (int arr[row][col], int ROW, int i);
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
bool IsEqual (int arr[row][col], int row, int col) 
{
    for (int j = 0; j < col; j++)
    {
        if (arr[col][j] != arr[j][col])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    return true;
}

int main () 
{
    int const size = 16;
    int m = 0;
    int n = 0;
    bool x;
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
    cout << "0 and 1   (0 for false 1 for true)" << "\n";
    x = IsEqual (a, m, n);
    cout << x;
    return 0;
}
