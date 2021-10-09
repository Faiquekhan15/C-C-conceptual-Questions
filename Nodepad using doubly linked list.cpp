#include<iostream>
#include<conio.h>
#include "graphics.h"  
#include<fstream>
#include<string>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
using namespace std;
struct textnode
{
	char ch;
	textnode* next ,*prev;
};
void print(textnode*head,textnode* &cursor,char input);
void cursorbackward(textnode * &cursor);
void cursorforward(textnode * &cursor);
void backspace(textnode*& head,textnode * &cursor,int &size);
void Replaceall(textnode * &head,char* string);
void inputfiling(textnode*head);
void loadfile();
void leftcopy(textnode* &head,textnode* &cursor,char key)
{ 
	ofstream fin;
	fin.open("backup.txt");
	key=NULL;
	int count1=0;
	if(cursor!=nullptr)
	{
		cursor=cursor->prev;
	    count1++;
	    char arr[1000];
	//if user press ctrl+c
	if(key==3)
	{
		for(int i=0;i<count1;i++)
		{
			if (cursor->prev!=nullptr)
			{
			arr[i]=(head->ch);
			fin<<arr[i];
			cursor=cursor->prev;
			}
		}
	}
	}
}
void rightcopy(textnode* &head,textnode* &cursor,char key)
{ 
	ofstream fin;
	fin.open("backup.txt");
	key=NULL;
	int count1=0;
	if(cursor!=nullptr)
	{
		cursor=cursor->next;
	    count1++;
	    char arr[1000];
	//if user press ctrl+c
	if(key==3)
	{
		for(int i=0;i<count1;i++)
		{
			if (cursor->next!=nullptr)
			{
			arr[i]=(head->ch);
			fin<<arr[i];
			cursor=cursor->next;
			}
		}
	}
	}

}
void mybackup()
{
	string list;
	ifstream fout;
	fout.open("backup.txt");
	if(fout.is_open())
	{
		while(getline(fout,list))
		{
			 int n = list.length();
			 char arr[1000]; 
			 strcpy(arr, list.c_str()); 
			 for (int i=0; i<n; i++)
			 {
			    outtext(arr);
			 }
		}
		fout.close();
	}
	else
	{
		outtext("not opening");
	}
}
void findsearch(textnode*& head,textnode*& cursor,int &size,char stringfind,char stringreplaced,char key)
{
	int count=0;
	char ch[100]={'\0','\0'};
	textnode*temp=head;
	while(temp!=nullptr)
	{
		for (int i=0;i<size;i++)
		{
			ch[i]=temp->ch;
			if(ch[i]!=' ')
			{				
				count++;
				if(ch[i]==stringfind)
				{
					count++;
				for(int i=0;i<count;i++)
				{
					ch[i]=stringreplaced;
				}
			}
		}
		temp=temp->next;
	}
	}
	print(head,cursor,key);
}
void insertion(textnode* &head,textnode* &cursor,int &size)
{
	char input=NULL;
	while (true )
	{
	print(head,cursor,input);
	input=getch();
	if(input== 8)
	{
		backspace(head,cursor,size); 
	}
	else if(input== 75||input==49)
	{
		cursorbackward(cursor);
	}
	else if(input==77||input==50)
	{
	cursorforward(cursor);
	}
	else if(input=='\r')
	{
		print(head,cursor,input);
	}
	else if(input==16&&input==49)
	{
	   leftcopy(head,cursor,input);
	}
	else if(input==16&&input==50)
	{
	   rightcopy(head,cursor,input);
	}
	else if(input==16)
	{
	   mybackup();
	}
	
	else if (input==24||input==27)
	{
	break;
	}
	else if(input==06)
	{
		char str1[20];
		char str2[20];
		{
			int x=0;
			int y=0;
			outtextxy(x=0,y+=20,"please enter string you want to find");
			cin.getline(str1,20);
			outtextxy(x=0,y+=20,str1);
	        outtextxy(x=0,y+=20,"please enter string you want to replace");
			cout<<"replace with"<<endl;
			cin.getline(str2,20);
			outtextxy(x=0,y+=20,str2);
    	    findsearch(head,cursor,size,str1[20],str2[20],input);
		}
	}
	else if(input==19)
	{ 
	  int x=0,y=0;
	  inputfiling(head);
	  outtextxy(x=0,y+=20,"your file is save");
	  getch();
	}
	else if(input==12)
	{  
	  int x=0,y=0;
	  outtextxy(x=0,y+=20,"your file is load");
	  loadfile();
	  getch();
	}
	else 
	{
	if(head==nullptr)
	{
	head=new textnode;
	head->next=nullptr;
	head->prev=nullptr;
	head->ch=input;
	cursor=head;
	size=1;
	}
	else if(cursor->next==nullptr)
	{
	textnode *temp1=new textnode;
	temp1->ch=input;
	temp1->next=nullptr;
	temp1->prev=cursor;
	cursor->next=temp1;
	cursor=temp1;
	size++;
	}
	else if(cursor->next!=nullptr)
	{
	textnode*temp2=cursor->next;   
	textnode*temp=new textnode;
	temp->ch=input;
	temp->prev=cursor;
	temp->next=temp2;
	temp2->prev=temp;
	cursor->next=temp;
	temp->prev=cursor;
	cursor=temp;
	size++;
	}
    }
}
}
void print(textnode*head,textnode* &cursor,char input)
{
	cleardevice();
	char ch[2]={'\0','\0'};
	
		int x=0,y=0;
		while(head!=nullptr)
		{
			ch[0]=head->ch;
			if(input!='\r')
			{
				if (head==cursor)
				{
					outtext(ch);
					outtext("_");
				}
				else 
				{
					outtext(ch);
				}
			}
			else if(input=='\r')
			{
				if (head==cursor)
				{
					outtextxy(x=0,y+=20,ch);
					outtextxy(x=0,y+=20,"_");
				}
				else
				{
					outtextxy(x=0,y+=20,ch);
				}
			}
			head=head->next;
		}
	
	int m=0,n=0;
	outtextxy( m+=200, n+=480,"_ _ _ _ _ _ _ _ _ _ _ _");
}
void backspace(textnode*& head,textnode * &cursor,int &size)
{
	
	 //else if(size>1)//if there is more then 1 nodes 
	 //{
		//textnode*temp=cursor;
		//textnode*temp2=temp->prev;
		////cursor=temp->next;
		//temp2->next=cursor;
		//cursor->prev=temp2;
		//if(temp!=nullptr)
		//{
		//	delete temp;
		//	temp=nullptr;
		//}
		//size--;	
	/*textnode*temp=cursor;
	cursor->next=temp->next;
	temp->next->prev=cursor;
	delete temp;*/
	//cursor=temp->nexttemp->next=temp->prev=nullptr;

/*
	cursor->next=temp->next;
	delete temp;*/
	if (size==1)// if there is one node only 
	{
	head=cursor=nullptr;
	delete cursor;
	size=1;
	}
    if(size>1&&cursor!=nullptr) //if there are node and cursor is in between data
	{
	textnode*temp=cursor;
	cursor=temp->prev;
	cursor->next=temp->next;
	delete temp;
	size--;
	}
	
	/* if(cursor->next==nullptr)
	{
		textnode*temp=cursor;
		cursor=cursor->prev;
		delete temp;
		temp=nullptr;
	}*/
}
void cursorbackward(textnode * &cursor)
{
	if(cursor->prev!=nullptr)
	{
	cursor=cursor->prev;
	}
	// it will move cursor forward till the bond reach of head
}
void cursorforward(textnode * &cursor)
{
	if(cursor->next!=nullptr)
	{
		cursor=cursor->next;
	}
	//now it will move cusor before end pointreach 
}
void inputfiling(textnode*head)
{
	ofstream fin;
	fin.open("savedata.txt");
	if(fin.is_open())
	{
		while(head!=nullptr)
		{
			fin<<head->ch;
			head=head->next;
		}
		fin.close();
	}
	else 
	{
		outtext("file is not opening");
	}
}
void loadfile()
{
	string list;
	ifstream fout;
	fout.open("savedata.txt");
	if(fout.is_open())
	{
		while(getline(fout,list))
		{
			 int n = list.length();
			 char arr[1000]; 
			 strcpy(arr, list.c_str()); 
			 for (int i=0; i<n; i++)
			 {
			    outtext(arr);
			 }
		}
		fout.close();
	}
	else
	{
		outtext("not opening");
	}
}
int main( ) 
{
	int x=0,y=0;
	initwindow(600, 600, "MY TEXT EDITOR");
	outtextxy(x,y,"The following editor will allow you enter,text");
	outtextxy(x,y+=20,"The following editor will allow you change,edit text");
	outtextxy(x,y+=30,"The following editor will allow you save and load text");
	getch();
	textnode* head=nullptr;
	textnode* cursor=nullptr;
    int size =0;
	setbkcolor(15);
	setcolor(0);
	insertion(head,cursor,size);
	return 0;  
} 