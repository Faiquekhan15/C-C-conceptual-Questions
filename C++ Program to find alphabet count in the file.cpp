#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
void main()
{
	ofstream fin;
	fin.open("OUT.txt");
	if(fin.is_open())
	{
		fin<<'a'<<" "<<'1'<<" "<<'b'<<" "<<'c'<<" "<<'4'<<" " <<endl;
		fin<<'z'<<" "<<'6'<<" "<<'h'<<" "<<'b'<<" "<<'r'<<" " <<endl;
		fin<<'L'<<" "<<'q'<<" "<<'9'<<" "<<'m'<<" "<<'n'<<" " <<endl;
		fin.close();
	}
	else
	{
		cout<<"not opening"<<"\n";
	}
	char var=0;
	int count=0;
	int x=0;
	ifstream fout;
	fout.open("OUT.txt");
	if(fout.is_open())
	{
		while(!fout.eof())
		{
		fout.get(var);
		cout<<var;
		}
		fout.close();
	}
	else
	{
		cout<<"not opening"<<"\n";
	}
	cout<<"THE WORDS in txt file is"<<endl;
	fout.open("OUT.txt");
	if(fout.is_open())
	{
		while(!fout.eof())
		{
		fout.get(var);
		if(var>='A'&&var<='Z'||var>='a'&&var<='z')
		{
			cout<<var<<" "<<"\n";
			x=count++;
		}
		}
		fout.close();

	}
	else
	{
		cout<<"not opening"<<"\n";
	}
	
	cout<<"NUMBER OF WORDS"<<endl;
	cout<<count;
	getch();

}
