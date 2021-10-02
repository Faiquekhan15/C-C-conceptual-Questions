//******************************************************************************
//                               C++ 
//      Find Pairs of two numbers in an Array whose sum is equal to number which provided by user   
//*******************************************************************************/
#include<iostream>
using namespace std;
void Count(int arr[], int n, int sum)
{
  cout<<"The pairs is :"<<endl;
  for (int i = 0; i < n; i++) 
  {
    int first = arr[i]; 
    for (int j = i + 1; j < n; j++) 
    {
      int second = arr[j]; 
      if ((first + second) == sum)
      {
        cout<< first<<" "<< second<<endl;
      }
    }
  }
}
int main()
{
	int arr[100];
	int sum=0;
	int size=0;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	cout<<"Enter elements in array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"value of sum in array"<<endl;
	cin>>sum;
	Count(arr, size, sum);
  return 0;
}
