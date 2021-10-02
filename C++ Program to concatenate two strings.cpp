#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    char str1[100];
  	char str2[100];
    int count1=0;
	  int i=0;
	  cout<<"enter first string "<<endl;
	  cin.getline(str1,100);
	  cout<<"enter second string "<<endl;
	  cin.getline(str2,100);
	  for( int i = 0; str1[i] != '\0'; i++)
	    {
		    count1++;
      }
    for(int  j = 0; str2[j] != '\0'; j++, count1++)
      {
          str1[count1] = str2[j];
      }
	  cout<<"After cancatenation is "<<endl;
    str1[count1] = '\0';
    cout<<str1;
	  system("pause");
    return 0;
}
    

