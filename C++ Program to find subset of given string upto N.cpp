#include<iostream>
#include<cstring>
using namespace std;
 

int main()
{
    string s = "AAABBBCCC";
    int N;
    cout<<"Enter the length N ="<<" ";
    cin>>N;
    int size = s.length();
        for (int i = 0; i < size; i++)
        {
            for (int j = 1; j <= size - i; j++)
            {
                if(j==N)
                {
                    cout << s.substr(i, j) << endl;
                }
            }
        }
    return 0;
}
