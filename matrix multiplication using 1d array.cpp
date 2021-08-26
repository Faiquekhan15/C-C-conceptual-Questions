#include<iostream>
using namespace std;
int main()
{
	int const size=16;
	int a[size];
    int b[size];
    int c[size];
	int m,n;
	cout<<"Enter number of rows"<<endl;
	cin>>m;
	cout<<"Enter number of cols"<<endl;
	cin>>n;
	int mul=0;
	cout<<"Enter which type of matrices you want to multiply 2*2,3*3etc"<<endl;
	cin>>mul;
	cout<<"enter first"<<endl;
	for (int i= 0; i < m*mul; i++)
	{
		cin>>a[i];
	}
	cout<<"enter second"<<endl;
	for (int j= 0; j <n*mul; j++)
	{
		cin>>b[j];
	}
    cout<<"Output of matrix"<<endl;
	for (int i = 0; i < m; i++)
	{
	for (int j = 0; j <n; j++) 
	{
		c[n*i+j] = 0;
		for (int k = 0; k < m; k++)//loop for storing output multiplication as m==n (m or n can be take)
		{ 
			c[m*i+j] += a[m*i+k] * b[m*k+j];
		}
		cout<<c[m*i+j]<<" ";
	}
	cout<<endl;
}
system("pause");
return 0;
}