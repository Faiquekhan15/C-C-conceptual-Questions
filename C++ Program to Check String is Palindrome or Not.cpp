#include <iostream>
#include<string>
using namespace std;
int main()
{
    char str[20];
    int i=0, length=0;
    int flag = 0;
    
    cout << "Enter a string: ";
	cin.getline(str,20);
	for(int i=0;str[i]='\0';i++)
	{
		length++;
	}
    for(i=0;i < length ;i++)
	{
        if(str[i] != str[length-i-1])
		{
            flag = 1;
            break;
	   }
	}
    
    if (flag) 
	{
        cout << str << " is not a palindrome" << endl; 
    }    
    else {
        cout << str << " is a palindrome" << endl; 
    }
    system("pause");
    return 0;
}