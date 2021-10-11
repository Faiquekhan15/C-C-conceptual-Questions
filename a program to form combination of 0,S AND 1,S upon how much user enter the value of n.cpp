#include<iostream>
#include<vector>
using namespace std;
void printarray(vector<int>&comb)
{
	for(int i=0;i<comb.size();i++)
	{
		cout<<comb[i];
	}
	cout<<endl;
}
void printallcomb(int n,vector<int>&comb)
{
	if(n==0)
	{
	    printarray(comb);
	}
	else
	{
		comb.push_back(0);
		printallcomb(n-1,comb);
		comb.pop_back();
        comb.push_back(1);
		printallcomb(n-1,comb);
		comb.pop_back();
	}

}
void printallcomb(int n)
{
	vector<int>comb;
	printallcomb(n,comb);
}

int main()
{
    int n;
    cout<<"PLEASE ENTER A NUMBER YOU WANT TO FORM A COMBINATION"<<endl;
	cin>>n;
	printallcomb(n);
}
