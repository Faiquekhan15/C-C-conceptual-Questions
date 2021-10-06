#include<iostream>
using namespace std;
int const size=10;
void funct(int arr[size],int arr1[size],int sum[size])
{
	for(int i=0;i<5;i++)
	{
	sum[i]=arr[i]+arr1[i];
	}

}
void input(int arr[size],int arr1[size])
{
	cout<<"Enter element in 1 array:"<<"\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element in 2 array:"<<"\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr1[i];
	}

}
void output(int sum[size])
{
	cout<<"sum of the array is :"<<"\n";
	for(int i=0;i<5;i++)
	{
	cout<<sum[i];
	}

}
void main()
{
	int arr[size];
	int arr1[size];
	int sum[size];
	input(arr,arr1);
	funct(arr,arr1,sum);
	output(sum);
	system("pause");
}
