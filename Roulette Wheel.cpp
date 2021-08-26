#include<iostream>
#include<time.h>
#include<ctime>
#include<fstream>
#include<string>
using namespace std; 
int main()
{
	char M;
	char BET;
    int BET_AMOUNT=5;
    int MoneyRemaining=100;
    int ZERO_WIN_AMOUNT=50;
    int NumberofWins=0;
    int NumberofLosses=0;
	int WheelNumber=0;
	time_t t;
	srand((unsigned)time(&t));
	ofstream fout;
    string filename;
	cout<<"Enter your name i.e lastname_firstname_roulette.extension"<<endl;
	cin>>filename;
	fout.open(filename.c_str());
	system("cls");
	system("Color 4F");
	cout << "\n\n\WELCOME TO ROULETTE wheel Game\n\n";
	cout<<"           *01 02*           "<<endl;
	cout<<"       *22<       >08*          "<<endl;
	cout<<"     *19<           >12*            "<<endl;
	cout<<"    *34<     _!_     >14*           "<<endl;
	cout<<"    *27<      |      >17*            "<<endl;
	cout<<"    *42<             >16*            "<<endl;
	cout<<"     *34<           >04*            "<<endl;
	cout<<"       *43<       >01*            "<<endl;
	cout<<"           *15 09*           "<<endl;
	
	
	cout<<"\n"<<"\n";
	cout<<"ENTER M or m for main menu"<<endl;
	cin>>M;
	if (M=='M'||M=='m')
	{
		cout<<"\n";
		cout<<"Enter e or E for Even"<<endl;
		cout<<"Enter o or O for Odd"<<endl;
		cout<<"Enter z or Z for Zero "<<endl;
		cout<<"Enter q or Q for Quit"<<endl;
		cout<<"\n"<<"\n";
		while (MoneyRemaining>0) 
		{ 
			WheelNumber=rand()%36;
			cout<<"Enter Type of Bet"<<endl;
			cin>>BET;
			if(BET=='E'||BET=='e'||BET=='O'||BET=='o'||BET=='Z'||BET=='z'||BET=='q' || BET=='Q')
			{
			if(BET=='E'||BET=='e'&&WheelNumber%2==0)
			{
				cout<<"Wheel Number="<<WheelNumber<<endl;
                MoneyRemaining=MoneyRemaining+BET_AMOUNT;
			    NumberofWins =NumberofWins+1;    
			    cout<<"Congratulation"<<endl; 
		 	    cout<< "Money Remaining="<<MoneyRemaining<<endl;
				cout<<"\n"<<"\n";
			}
			else if(BET=='E'||BET=='e'&&WheelNumber%2!=0)
			{
				cout<<"Wheel Number="<<WheelNumber<<endl;
				MoneyRemaining=MoneyRemaining-BET_AMOUNT;        
				NumberofLosses=NumberofLosses+1; 
				cout<< "sorry you lost" <<endl;
				cout<< "Money Remaining="<<MoneyRemaining<<endl;
				cout<<"\n"<<"\n";
			}
			if(BET=='O'||BET=='o'&&WheelNumber%2!=0)
			{
				cout<<"Wheel Number="<<WheelNumber<<endl;
				MoneyRemaining=MoneyRemaining+BET_AMOUNT;

			    NumberofWins =NumberofWins+1;    
			    cout<<"Congratulation"<<endl; 
		 	    cout<< "Money Remaining="<<MoneyRemaining<<endl;
				cout<<"\n"<<"\n";
			}
			else if(BET=='O'||BET=='o'&&WheelNumber%2==0)
			{
				cout<<"Wheel Number="<<WheelNumber<<endl;
				MoneyRemaining=MoneyRemaining-BET_AMOUNT;        
				NumberofLosses=NumberofLosses+1; 
				cout<< "sorry you lost" <<endl;
				cout<< "Money Remaining="<<MoneyRemaining<<endl;
				cout<<"\n"<<"\n";
			}
			if (BET=='Z'||BET=='z'&&WheelNumber==0) 
			{      
				NumberofWins =NumberofWins+1;
				MoneyRemaining=MoneyRemaining+ZERO_WIN_AMOUNT;
				cout<<"Wheel Number="<<WheelNumber<<endl;    
			    cout<<"Congratulation"<<endl; 
		 	    cout<< "Money Remaining="<<MoneyRemaining<<endl;
				cout<<"\n"<<"\n";
			}
			 else if (BET=='Z'||BET=='z'&&WheelNumber!=0) 
			 {
				MoneyRemaining=MoneyRemaining-BET_AMOUNT;        
				NumberofLosses=NumberofLosses+1;
				cout<<"Wheel Number="<<WheelNumber<<endl;
				cout<< "sorry you lost" <<endl;
				cout<< "Money Remaining="<<MoneyRemaining<<endl;
				cout<<"\n"<<"\n";
			}
			if (BET=='q' || BET=='Q') 
			{
			cout<< "Money Remaining="<<MoneyRemaining<<endl;
            cout<<"Number of Wins="<<NumberofWins<<endl; 
            cout<<"Number of Losses="<<NumberofLosses<<endl;
			cout<<"\n"<<"\n";
			fout<<"Money Remaining="<<MoneyRemaining<<endl;
            fout<<"Number of Wins="<<NumberofWins<<endl; 
            fout<<"Number of Losses="<<NumberofLosses<<endl;
			fout.close();
			break;
			}
			else if(MoneyRemaining==0)
			{
			cout<< "Money Remaining="<<MoneyRemaining<<endl;
            cout<<"Number of Wins="<<NumberofWins<<endl; 
            cout<<"	Number of Losses="<<NumberofLosses<<endl;
			cout<<"\n"<<"\n";
			fout<< "Money Remaining="<<MoneyRemaining<<endl;
            fout<<"Number of Wins="<<NumberofWins<<endl; 
            fout<<"	Number of Losses="<<NumberofLosses<<endl;
			fout.close();
			break;
			}
		}
			else
			{
				cout<<"invalid input"<<endl;
				cout<<"\n"<<"\n";

			}
	
	}
	}
	fout.close();
	system("pause");
	return 0;
}