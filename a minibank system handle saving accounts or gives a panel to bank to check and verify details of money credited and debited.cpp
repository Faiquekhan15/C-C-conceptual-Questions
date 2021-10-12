#include<iostream>
using namespace std;
class ACCOUNT
{
    protected:
    double ACCOUNTNUMBER;
    double ACCOUNTBALANCE;
public:
    ACCOUNT ()
    {
        ACCOUNTNUMBER = 0;
        ACCOUNTBALANCE = 0;
    }
    ACCOUNT (double INTIAL_AMOUNT, double NO)
    {
        if (INTIAL_AMOUNT >= 0.0)
        {
            ACCOUNTNUMBER = NO;
            ACCOUNTBALANCE = INTIAL_AMOUNT;
        }
        else
        {
            ACCOUNTBALANCE = 0;
            cout << "THE CURRENT AMOUNT IS INVALID" << endl;
        }
    }
    virtual void CREDIT (double ADDAMOUNT)
    {
        ACCOUNTBALANCE = ACCOUNTBALANCE + ADDAMOUNT;
    }
    virtual bool DEBIT (double WITHDRAW)
    {
        if (WITHDRAW > ACCOUNTBALANCE)
        {
            cout << "DEBIT AMOUNT EXCEEDED ACCOUNT BALANCE" << "\n";
            return false;
        }
        else
        {
            ACCOUNTBALANCE = ACCOUNTBALANCE - WITHDRAW;
            return true;
        }
  }
  double GETBALANCE ()
  {
    return ACCOUNTBALANCE;
  }
  virtual ~ ACCOUNT ()
  {}
  void PRINT ()
  {
    cout<<"##############*********************##############"<<endl;
    cout<<"------------ACCOUNT BALANCE =" << ACCOUNTBALANCE << endl;
    cout<<"------------ACCOUNT NUMBER =" << ACCOUNTNUMBER << endl;
    cout<<"##############*********************##############"<<endl;
  }
};

class SAVINGACCOUNT:public ACCOUNT
{
    double INTEREST_RATE;
    public:
    SAVINGACCOUNT ()
    {
        INTEREST_RATE = 0;
    }
    SAVINGACCOUNT (double ACCOUNTBALANCE, double ACCOUNTNUMBER,
		 double INTEREST_R):ACCOUNT (ACCOUNTBALANCE, ACCOUNTNUMBER)
		 {
		     INTEREST_RATE = INTEREST_R;
		 }
  double CALCULATE_INTEREST ()
  {
    double intEREST = GETBALANCE ();
    intEREST = INTEREST_RATE * ACCOUNTBALANCE;
    return intEREST;
  }
  ~SAVINGACCOUNT ()
  {}
  void PRINT ()
  {
    ACCOUNT::PRINT ();
    cout << "INTEREST_RATE =" << INTEREST_RATE << endl;
  }
};

class CHECKINGACCOUNT:public ACCOUNT
{
    protected:
    double TRANSITION;
    public:
    CHECKINGACCOUNT ()
    {
        TRANSITION = 0;
    }
    CHECKINGACCOUNT (int ACCOUNTBALANCE, int ACCOUNTNUMBER,
    double FEEAMOUNT):ACCOUNT (ACCOUNTBALANCE, ACCOUNTNUMBER)
    {
        TRANSITION = FEEAMOUNT;
    }
    void CREDIT (double MONEY)
    {
        ACCOUNT::CREDIT (MONEY);
    }
    bool DEBIT (double MONEY)
    {
        if (ACCOUNT::DEBIT (MONEY) == false)
        {
          cout << "MONEY IS DRAW ALREADY" << endl;
          return false;
        }
        else
        {
          ACCOUNTBALANCE = ACCOUNTBALANCE - TRANSITION;
          return true;
        }
    }
    ~CHECKINGACCOUNT ()
    {}
    void PRINT ()
    {
        ACCOUNT::PRINT ();
        cout << "TRANSITION PER CHARGE =" << TRANSITION << endl;
    }
};

int main ()
{
  ACCOUNT *G;
  double AB;
  double AR;
  double IR;
  double crdt;
  double debt;
  cout<<"*****************************"<<endl;
  cout<<"PLEASE ENTER ACCOUNTBALANCE=";
  cin>>AB;
  cout<<"*****************************"<<endl;
  cout<<"PLEASE ENTER ACCOUNTNUMBER=";
  cin>>AR;
  cout<<"*****************************"<<endl;
  cout<<"PLEASE ENTER INTEREST RATE=";
  cin>>IR;
  SAVINGACCOUNT H (AB, AR, IR);
  cout<<"**************************************"<<endl;
  cout <<"*******FOR SAVING ACCOUNT***********"<< endl;
  cout<<"**************************************"<<endl;
  G = &H;
  cout<<"****************************"<<endl;
  cout<<"PLEASE ENTER AMOUNT CREDITED=";
  cin>>crdt;
  cout<<"****************************"<<endl;
  cout<<"PLEASE ENTER AMOUNT DEBITTED=";
  cin>>debt;
  G->CREDIT (crdt);
  G->DEBIT (debt);
  G->PRINT ();
  cout << endl;
  
  
  cout<<"------------------------------------------------------"<<endl;
  cout <<"----------------CHECKING ACCOUNT SECTION-------------"<< endl;
  cout<<"------------------------------------------------------"<<endl;
  
  double AB1;
  double AR1;
  double IR1;
  double crdt1;
  double debt1;
  cout<<"*****************************"<<endl;
  cout<<"PLEASE ENTER ACCOUNTBALANCE=";
  cin>>AB1;
  cout<<"*****************************"<<endl;
  cout<<"PLEASE ENTER ACCOUNTNUMBER=";
  cin>>AR1;
  cout<<"*****************************"<<endl;
  cout<<"PLEASE ENTER INTEREST RATE=";
  cin>>IR1;
  CHECKINGACCOUNT F (AB1, AR1, IR1);
  cout<<"**************************************"<<endl;
  cout <<"********FOR CHECKING ACCOUNT*********"<< endl;
  cout<<"**************************************"<<endl;
  G = &F;
  cout<<"****************************"<<endl;
  cout<<"PLEASE ENTER AMOUNT CREDITED=";
  cin>>crdt1;
  cout<<"****************************"<<endl;
  cout<<"PLEASE ENTER AMOUNT DEBITTED=";
  cin>>debt1;
  G->CREDIT (crdt1);
  G->DEBIT (debt1);
  G->PRINT ();
  cout << endl;
  
  return 0;
}
