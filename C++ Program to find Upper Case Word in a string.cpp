#include<iostream>
using namespace std;
void main()
{
	char str[100];
	int count = 0;
	cout << "Enter array :" << endl;
	cin.getline(str, 100);
	cout << "input" << endl;
	cout << str << endl;
	for (int i = 0; str[i]!= '\0';i++)
	{
		count++;
	}
	cout << "word is" << endl;
	for (int i = 0;i<count;i++)
	{
		if (str[i] >= 'A' &&str[i] <= 'Z')

		{
			cout << str[i];
		}

	}
	system("pause");
}
