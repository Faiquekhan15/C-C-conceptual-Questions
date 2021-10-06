#include<iostream>
using namespace std;
void convt(int cel)
{
	cout<<"enter temperature in Celcius :"<<"\n";
	cin>>cel;
	int cont=0;
	cout<<"temperature in Fahrenheit is:"<<"\n";
	cont=(cel * 9/5) + 32;
	cout<<cont<<"\n";
}
int main()
{
	int cel=0;
	convt(cel);
	system("pause");
	return 0;
}
