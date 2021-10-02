#include<iostream>
#include<string.h>
using namespace std;
void main()
{
	int count=0;
	char string[50];
	char ch;
	cout<<"my string:";
	cin.getline(string,50);
	cout<<"ch:";
	cin>>ch;
	int x=strlen(string);
	for(int i=0;i<x;i++)
	{
		if(string[i]==ch)
		{
			count++;
		}
	}
	cout<<"Total number of occurence is"<<count<<endl;
	system("pause");
}
