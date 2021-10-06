#include<iostream>
#include<fstream>
#include <string>
#include <cstring>
using namespace std;

void func()
{
	ofstream(MYFILE);
	MYFILE.open("input.txt");
	if(MYFILE.is_open())
	{
		MYFILE<<"35202-6574321 MUHAMMAD NASIR AGE :50"<<"\n";
		MYFILE<<"35202-6574334 MUHAMMAD IRFAN AGE :38"<<"\n";
		MYFILE<<"35202-6574365 MUHAMMAD USMAN AGE :26"<<"\n";
		MYFILE<<"35202-6574379 MUHAMMAD ASLAM AGE :50"<<"\n";
		MYFILE<<"35202-6574314 MUHAMMAD KAMRAN AGE:50"<<"\n"; 
		MYFILE.close();
	}
	else
	{ 
		cout<<"unable to open file :"<<endl;
	}
}

void func1(char id[])
{
	int len = strlen(id) ;
	int counter = 0 ;
	int j = 0 ;

	string line;
	ifstream fin ("input.txt");
	if (fin.is_open())
	{
		while (getline(fin,line) )
		{
			counter = 0 ;
			j=0;

			for(int i = 0 ; line[i]!='\0' ; i++)
			{
				if(id[j]==line[i])
				{
					counter++ ;
					j++;
					if(counter==len)
					{
						cout<<line <<endl ;
					}
				}
				else
				{
					counter = 0 ;
					j=0;
				}
			}
		}

		fin.close();
	}

	else cout << "Unable to open file"; 
}

void input(string str)
{
    char * temp = new char[str.size() + 1];
    copy(str.begin(), str.end(), temp);
    temp[str.size()] = '\0'; // terminating 0
    func1(temp) ;	
    delete[] temp; //  free the pointer

}

int main()
{
    func();
    string str;
    cout<<"ENTER CNIC or AGE"<<endl;
    cin>>str;
    input(str);
    cout<<endl;
	  return 0;
}
