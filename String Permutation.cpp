#include<iostream>
#include<string>
using namespace std;
int fact(int n)
{
     int fact = 1;
     for (int counter = 1; counter <= n; counter++)
     {
         fact = fact * counter;
     }
     return fact;
}
void Permutation(string s)
{
	int n=0;
	n=s.length();
        int len = fact(n);
        int k = 1;
        int m = 0;
        for (int i = 0; i < len; )
        {
         string perm = s;
         int j = 0;
         while (j != len/n)
         {
             while (k != n-1)
             {
                cout << perm << "\n";
                swap(perm[k], perm[k+1]);
                k++;
                i++;
                j++;
             }
            k = 1;
        }
        m++;
        if (m == n)
           break;
		   swap(s[0], s[m]);
	}
}
int main()
{
	string a;
	cout<<"Enter a string you want to permutate "<<endl;
	cin>>a;
	cout<<"\n";
	cout<<"Permuatation is"<<endl;
        Permutation(a);
	system("pause");
    return 0;
}

