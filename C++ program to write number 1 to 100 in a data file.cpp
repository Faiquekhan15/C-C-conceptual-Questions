#include<iostream>
#include<fstream>
using namespace std;
void main()
{
   ofstream fin;
   fin.open("NOTES.TXT");
   if(fin.is_open())
   {
	   for(int i=1;i<=100;i++)
	   {
	   fin<<i<<endl;
	   }
	   fin.close();
   }
   else
   {
	   cout<<"not opening"<<"\n";
   }
	system("pause");
}
