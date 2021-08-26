#include<iostream>
#include<cmath>
using namespace std;
int input(int &a,int &b)
{
	a=0;
	b=0;
	cout<<"Enter Value Of First Number"<<endl;
	cin>>a;
	cout<<"Enter Value Of Second Number"<<endl;
	cin>>b;
	return a;
	return b;
}
int add(int a,int b)
{
	int c=a+b;
	return c;
}
int subs(int a,int b)
{
	int c=a-b;
	return c;
}
int mul(int a,int b)
{
	int c=a*b;
	return c;
}
float divn(float a,float b)
{
	
	if(a<0&&b<0)
	{
	float c=a/b;
	return c;
	}
	else if(a>0&&b!=0)
	{
	float c=a/b;
	return c;
	}
	else if(a<0&&b!=0)
	{
	float c=a/b;
	return c;
	}
	if(a>0&&b==0)
	{
	cout<<"denominator should be greater then zero"<<endl;
	}
}
float Power(float a, int b)
{
	float c = 1;
	if ( Power > 0)
	{
		for (int n = 0; n < b; n++)
		{
			c *= a;
		}
	}
	else
	{
		for (int n = 0; n > b; n--)
		{
			c /= a;
		}
	}
	return c;
}

void main()
{
	int a=0;
	int b=0;
	int c=0,d=0,e=0;
	float f=0;
	float g=0;
	char m;
	cout<<"#################CALCULATOR##########"<<endl;
	cout<<"ENTER WHICH OPERATION YOU WANT TO PERFORM"<<endl;
	cout<<"Press 1 for addition "<<endl;
	cout<<"Press 2 for substraction "<<endl;
	cout<<"Press 3 for multiplication "<<endl;
	cout<<"Press 4 for division "<<endl;
	cout<<"Press 5 for power "<<endl;
	cout<<"press only small alphabet  t ########for termination of calculator "<<endl;
	cout<<endl;
	m='\0';
	input(a,b);
	while(m!='t')
	{
	cout<<"Enter operation"<<endl;
	cin>>m;
	if(m=='1')
	{
	c=add(a,b);
	cout<<"addition="<<c<<endl;
	}
	if(m=='2')
	{
	d=subs(a,b);
	cout<<"substraction="<<d<<endl;
	}
	if(m=='3')
	{
	e=mul(a,b);
	cout<<"multiplication="<<e<<endl;
	}
	if(m=='4')
	{
	f=divn(a,b);
	cout<<"division="<<f<<endl;
	}
	if(m=='5')
	{
	g=Power(a,b);
	cout<<"power="<<g<<endl;
	}
	}
    system("pause");
}