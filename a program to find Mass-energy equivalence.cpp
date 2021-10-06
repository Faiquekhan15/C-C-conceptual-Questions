#include<iostream>
using namespace std;
void input(int &mass,int &speed)
{
	cout<<"enter mass:"<<"\n";
	cin>>mass;
	cout<<"enter speed:"<<"\n";
	cin>>speed;
}
void funct(int &mass,int &speed,int &energy)
{
	energy=mass*(speed*speed);
}
void output(int& energy)
{
	cout<<"energy:"<<"\n";
	cout<<energy;
}
void main()
{
	int a=0;
	int b=0;
	int c=0;
	input(a,b);
	funct(a,b,c);
	output(c);
	system("pause");
}
