#include<iostream>
#include<string.h>
using namespace std;
void main()
{
	int count=0;
	char string[50];
	char find;
	char replace;
	cout<<"input string:";
	cin.getline(string,50);
	cout<<"find ch:";
	cin>>find;
	cout<<"replace ch:";
	cin>>replace;
	int x=strlen(string);
	for(int i=0;i<x;i++)
	{
		if(string[i]==find)
		{
			string[i]=replace;
		}
	}
	cout<<"ModifiedString: "<<endl;
	for(int i=0;i<x;i++)
	{
		cout<<string[i];
	}
	cout<<endl;
	system("pause");
}
		
