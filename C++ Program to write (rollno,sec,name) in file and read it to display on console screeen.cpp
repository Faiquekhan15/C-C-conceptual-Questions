#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void main()
{
	char name[20];
	char rollno[20];
	char sec[20];
	ofstream fin;
	ifstream fout;
	fin.open("INFO.txt");
	if(fin.is_open())
	{

		cout<<"Enter Name       :";
		cin.getline(name,20);
		cout<<"Enter Roll#      :";
		cin.getline(rollno,20);
		cout<<"Enter Section    :";
		cin.getline(sec,20);
		

		fin<<name<<" "<<endl;
		fin<<rollno<< " "<<endl;
		fin<<sec<<"  "<<endl;
		fin.close();
	}
	else
	{
	cout<<"not opening"<<"\n";
	}
	cout<<"\n";
	cout<<"File has written"<<endl;
	cout<<"\n";
	cout<<"The data in file as"<<endl;
	cout<<"\n";
	string line;
	fout.open("INFO.txt");
	if(fout.is_open())
	{
	while(getline(fout,line))
	{
		cout<<line<<"\n";
	}
	fout.close();
	}
	else
	{
		cout<<"not opening"<<"\n";
	}
	system("pause");
}
