#include<iostream>
using namespace std;
int  main()
{
  int x=0;
  cout<<"Enter number:"<<"\n";
  cin>>x;
  int n=x;
  int i=1;
  while(i<=n)
  {
    int j=n-1;
    while(j>=i)
    {
      cout<<" ";
      j--;
    }
    cout<<"*";
    int k=1;
    while(k<(i-1)*2)
    {
      cout<<" ";
      k++;
    }
    if(i>1)
    {
      cout<<"*";
    }
    i++;	
    cout<<endl;
  }
  //Multiple new variable used to aviod redifination error
  int num=x;
  int a=num;
  while(a>=1)
  {
    int b=num-1;
    while(b>=a)
    {
      cout<<" ";
      b--;
    }
    cout<<"*";
    int o=1;
    while(o<(a-1)*2)
    {
      cout<<" ";
      o++;
		}
    if(a>1)
    {
      cout<<"*";
    }
    a--;
    cout<<endl;
  }
  return 0;
}
