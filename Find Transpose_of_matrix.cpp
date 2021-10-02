#include<iostream>
using namespace std;
int const col=16;
int const row =16;
void inputarr(int input[row][col],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>input[i][j];
		}
	}
}
void printarray(int a[row][col],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		   cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void transpose(int tos[row][col],int t[row][col],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		   tos[i][j]=t[j][i];
		   cout<<tos[i][j]<<" ";
	   }
	   cout<<endl;
	}
}
int main()
{
	int const size=16;
	int m=0;
	int n=0;
	int a[size][size];
	int x[size][size];
	cout<<"Enter the number of rows:"<<endl;
	cin>>m;
	cout<<"Enter the number of col:"<<endl;
	cin>>n;
	cout<<"Enter elements in an Matrix1:"<<endl;
	inputarr(a,m,n);
	cout<<"Output of 1 matrix:"<<endl;
	printarray(a,m,n);
	cout<<"transose of  matrix:"<<endl;
	transpose(x,a,m,n);
        return 0;
}
