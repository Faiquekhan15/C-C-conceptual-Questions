#include<iostream>
using namespace std;
int main()
{
	
	int const size=16;
	int c[size][size];
	int m,n;
	int a[size][size];
	
	cout<<"Enter the number of rows:"<<endl;
	cin>>m;
	cout<<"Enter the number of col:"<<endl;
	cin>>n;
	cout<<"Enter elements in an Matrix1:"<<endl;
	for(int i=0;i<m;i++)
	{
	   for(int j=0;j<n;j++)
	   {
		   cin>>a[i][j];
	   }
	}
	int b[size][size];
	cout<<"Enter elements in an Matrix2:"<<endl;
	for(int i=0;i<m;i++)
	{
	   for(int j=0;j<n;j++)
	   {
		   cin>>b[i][j];
	   }
	}
	cout<<"\n The multiplied value is:"<<"\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=0;
			for(int k=0;k<m;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n" ;
	}
   system("pause");
   return 0;
}
