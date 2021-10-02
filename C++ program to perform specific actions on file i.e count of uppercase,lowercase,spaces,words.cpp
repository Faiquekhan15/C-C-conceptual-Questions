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
		fin<<"Hello, I am a stu dent ofFAST University" <<endl;
		fin.close();
	}
	else
	{
		cout<<"not opening"<<"\n";
	}
	char var=0;
	int count=0;
	int count1=0;
	int count2=0;
	cout<<"INPUT:"<<endl;
	cout<<endl;
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
	fout.open("OUT.txt");
	if(fout.is_open())
	{
		while(!fout.eof())
		{
		fout.get(var);
		if(var>='A'&&var<='Z')
		{
			count++;
		}
		if	(var>='a'&&var<='z')
		{
			count1++;
		}
		if	(var==32)
		{
			count2++;
		}
		}
		fout.close();

	}
	else
	{
		cout<<"not opening"<<"\n";
	}
	cout<<"OUTPUT:"<<endl;
	cout<<endl;
	cout<<"NUMBER OF WORDS="<<count1+count<<endl;
	cout<<"NUMBER OF upper case letter="<<count<<endl;
	cout<<"NUMBER OF lower case letter="<<count1<<endl;
	cout<<"NUMBER OF spaces="<<count2<<endl;
	getch();
}
