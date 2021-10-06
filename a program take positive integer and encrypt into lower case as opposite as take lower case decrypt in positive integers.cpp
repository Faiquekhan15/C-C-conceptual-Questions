#include<iostream>
using namespace std;
int main()
{
	cout<<"//////////////////////**************MAIN MENU*************//////////"<<endl;
	char e=0;
	char d=0;
	cout<<"press e for encryption"<<endl;
	cout<<"press d for decryption"<<endl;
	char input=0;
	cout<<"which operation you want to perform:"<<endl;
	cin>>input;
	//The following program takes any positive integer value and encrypted in small english alphabets
    //example if user enter 1 then this code convert 1 into a similalry if user enter 2 it return b etc 
    //this process goes on till user enter -1
	if(input=='e')
	{
	int n=0;
	char store;
	if (n>=0)
	{  
		while(n!=-1)
		{
			cout<<"Enter number:"<<"\n";
			cin>>n;
			store=96+n;
			if(n!=-1)
			{
				cout<<"The encrypted code is :"<<endl;
				cout<<store;
				cout<<endl<<endl;
			}
			else
			{
				break;
			}
		}
	}
	else 
	{
		cout<<"The number is negative"<<endl;
	}
	}
	
	//The following program takes any small alphabets in english  and decrypted in positive integers
    //example if user enter a then this code convert a into 1 into similalry if user enter b it return 2 etc 
    //this process goes on till user enter #
	else if(input=='d')
	{
		char alphabet='0';
		int store1;
		while(alphabet!=35)
		{
			cout<<"Enter alphabet:"<<"\n";
			cin>>alphabet;
			if(alphabet>=97&&alphabet<=122)
			{
				store1=alphabet-96;
				if(alphabet!=35)
				{
					cout<<"The decrypted code is :"<<endl;
					cout<<store1;
					cout<<endl<<endl;
				}
				else
				{
					break;
				} 
			}
			else 
			{
				cout<<"The alphabet  is not in range of  a-z"<<endl;
			}
		}
	}
	else 
	{
		cout<<"you dont enter e or d "<<endl;
	}
	return 0;
}
