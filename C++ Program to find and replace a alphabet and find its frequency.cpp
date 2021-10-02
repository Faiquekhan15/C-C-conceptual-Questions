#include<iostream>
using namespace std;
void main()
{
	char str1[100];
	char m=0;
	char n=0;
	int count =0;
	int feq=0;
	int len=0;
	cout<<"enter first string "<<endl;
	cin.getline(str1,100);
	cout<<"find character "<<endl;
	cin>>m;
  	cout<<"replace character  "<<endl;
	cin>>n;
	for(int i=0;str1[i]!='\0';i++)
	{
		count++;
	}
	len=count;
	for(int i=0;i<len;i++)
	{
		if(str1[i]==m)
		{
			str1[i]=n;
			feq++;
		}
	cout<<str1[i];
	}
	cout<<endl;
	cout<<"Total occurrence of "<<feq<<endl;
	system("pause");
}