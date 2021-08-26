#include<iostream>
using namespace std;
void func(int arr[],int size);
int main()
{
	int arr[20];
	int size=0;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	cout<<"Enter elements of array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"ARRAY IS:";
	for(int j=0;j<size;j++)
	{
		cout<<arr[j]<<" ";
	}
	cout<<"\n";
	func(arr,size);
	system("pause");
}
void func (int arr[],int size)
{
	int min=0;
	int max=0;
	min=max;
	for(int i=0;i<size;i++)
	{
		min+=arr[i];
		{
			if(max<min)
			{
				max=min;
			}
			if(min<0)
			{
				min=0;
			}
		}
	}
	cout<<"Max of subarrays ="<<max<<endl;
}
	
	

	
