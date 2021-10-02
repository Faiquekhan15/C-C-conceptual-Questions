//******************************************************************************
//                               C++ 
//      Find Second Minimum number in an Array  
//*******************************************************************************/
#include<iostream>
#include <limits.h> 
using namespace std;
void kthSmallest(int a[],int n)
{
  int min1=0;
  int min2=0;
  min1=min2=INT_MAX;
  for ( int i=0;  i < n;  i++ )
  {
    if (a[i]<min1 )
    {
      min2=min1;
      min1 = a[i];
    }
    else if (a[i]< min2&&a[i]!=min1)
    {
      min2 = a[i] ;
    }
  }
  cout<<"kth smallest element ="<<min2;
}
int main()
{
	int arr[100];
	int n=0;
	cout<<"Enter size of  array"<<endl;
	cin>>n;
	cout<<"Enter elements in array"<<endl;
	for ( int i=0;  i < n;  i++ )
	{
		cin>>arr[i];
	}
	kthSmallest(arr, n);
	cout <<"\n";
	return 0;
}
