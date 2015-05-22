#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int x=1;
int i;
int type;
double Balance;
string name,address,phone,AccountID;
////////////////////////////////////////////////////////////////////////////////////////////

class BankAccount
{
      public:
             BankAccount()
             {
             }
             BankAccount(double bal)
             {
                          Balance=bal;
             }
             void get_Balance()
             {
                          cout<<"An account was created with ID FCI-00"<< x <<" and Starting Balance "<<Balance<<" L.E."<<endl;
             }
             void withdraw()
             {
             int drawn;
             cout<<"Please Enter Account ID (e.g., FCI-015) =========> ";
             string IDW;
             cin>>IDW;
             cout<<"Account ID: "<<IDW<<endl;
             cout<<"Acocunt Type: ";
             if (type ==1)
             {
                         cout<<"Basic"<<endl;
                         cout<<"Balance: "<<Balance<<endl;
                         cout<<"Enter amount to be withdrawn: ";
                         cin>>drawn;
                         while(Balance<=drawn)
                         {
                                           cout<<"\nSorry. This is more than what you can withdraw."<<endl;
                                           cout<<"Enter amount to be withdrawn: ";
                                           cin>>drawn;
                         }
                         if (Balance>drawn)
                         {
                             Balance-=drawn;
                         }
                         cout<<"Thank you."<<endl;
                         cout<<"Account ID: "<<IDW<<endl;
                         cout<<"New Balance: "<<Balance<<endl;
             }
             else
             {
                 cout<<"Saving"<<endl;
                 cout<<"Balance: "<<Balance<<endl;
                 cout<<"Enter amount to be withdrawn: ";
                 cin>>drawn;
                 while(Balance<=drawn || (Balance-drawn<1000))
                 {
                                   cout<<"\nSorry. This is more than what you can withdraw."<<endl;
                                   cout<<"Enter amount to be withdrawn: ";
                                   cin>>drawn;
                 }
                 if(Balance>drawn && (Balance-drawn>1000) )
                 {
                     Balance-=drawn;
                 }
                 cout<<"Thank you."<<endl;
                 cout<<"Account ID: "<<IDW<<endl;
                 cout<<"New Balance: "<<Balance<<endl;
                 }
             }
             
             void deposit()
             {
                  double deposit;
                  cout<<"Please Enter Account ID (e.g., FCI-015) =========> ";
                  string IDW;
                  cin>>IDW;
                  cout<<"Account ID: "<<IDW<<endl;
                  cout<<"Acocunt Type: ";
                  if (type ==1)
                  {
                           cout<<"Basic"<<endl;
                           cout<<"Balance: "<<Balance<<endl;
                           cout<<"Enter amount to be deposited: ";
                           cin>>deposit;
                           while(deposit<0)
                           {
                                        cout<<"Enter amount to be deposited: ";
                                        cin>>deposit;
                           }
                           if(deposit>0)
                               {Balance+=deposit;}
                           cout<<"Thank you."<<endl;
                           cout<<"Account ID: "<<IDW<<endl;
                           cout<<"New Balance: "<<Balance<<endl;
                      
                  }
                  else
                  {
                      cout<<"Saving"<<endl;
                      cout<<"Balance: "<<Balance<<endl;
                      cout<<"Enter amount to be deposited: ";
                      cin>>deposit;
                      while(deposit<100)
                      {
                                cout<<"Enter amount to be deposited \" >100\" : ";
                                cin>>deposit;
                      }
                      if(deposit>100)
                      {Balance+=deposit;}
                      cout<<"Thank you."<<endl;
                      cout<<"Account ID: "<<IDW<<endl;
                      cout<<"New Balance: "<<Balance<<endl;
              
          
                 }
            }
              
};
/////////////////////////////////////////////////////////////////////////////////////////////////
class SavingBankAcc : public BankAccount
{
      public:
             SavingBankAcc(){}
             SavingBankAcc(double bal)
             {
                                  Balance=bal;
             }
             void deposit()
             {
                  BankAccount::deposit();
             }
             void withdraw()
             {
                  BankAccount::withdraw();
             }
};
/////////////////////////////////////////////////////////////////////////////////////////////////
class Client 
{
      public:
             Client()  {}
             void getDeta()
             {
                  
                 cout<<"Please Enter Client Name =========> ";
                 cin.ignore();
                 getline(cin,name);
                 cout<<"Please Enter Client Address =========> ";
                 getline(cin,address);
                 cout<<"Please Enter Client Phone =========> ";
                 getline(cin,phone);
                 cout<<"What Type of Account Do You Like? (1) Basic (2) Saving =========> ";
                 cin>>type;
                 cout<<"Please Enter the Starting Balance =========> ";
                 cin>>Balance;
                 
                 if (type ==1)
                 {
                          BankAccount B(B);
                          B.get_Balance();
                 }
                 else
                 {
                            if(Balance>1000)
                            SavingBankAcc(Balance);
                            while(Balance<1000)
                            {
                                cout<<"Please Initial balance should be >= min balance.\" >=1000\" "<<endl;
                                cout<<"Please Enter the Starting Balance =========> ";
                                cin>>Balance;
                            }
                            SavingBankAcc(Balance);
                 }
             }
             void get_info()
            {
                  cout<<"-------------------------- "<<name<<" ---------------------------"<<endl;
                  cout<<"Address:  "<<address <<"   Phone:  "<<phone <<endl;
                  cout<<"Account ID:  FCI-00"<<x<<"  ";
                  if (type ==1)
                  cout<<"(Basic)"<<endl;
                  else
                  cout<<"(Saving)"<<endl;
                  cout<<"Balance:  "<< Balance <<endl;//B.Balance
                  cout<<"-------------------------------------------------------------------"<<endl;
            } 
     
};

////////////////////////////////////////////////////////////////////////////////////

class BankApplication 
{
      private:
              int choice ;
      public:
             BankApplication()
             {
                              Client C;
                              BankAccount Ba(Balance);
                              SavingBankAcc SBa(Balance);
                              cout<<"-------------------------------------------------------------------"<<endl;
                              cout<<"Welcome to FCI Banking Application"<<endl;
                              cout<<"1. Create a New Account"<<endl;
                              cout<<"2. List Clients and Accounts"<<endl;
                              cout<<"3. Withdraw Money"<<endl;
                              cout<<"4. Deposit Money"<<endl;
                              cout<<"Please Enter Choice =========> "<<endl;
                              cin>>choice;
                              if (choice ==1)
                              {
                                         C.getDeta();
                                         x++;
                              }
                              if ( choice ==2)
                              {
                                   x--;
                                   C.get_info();
                              }
                              if (choice ==3)
                              {
                                         Ba.withdraw();
                                         
                              }
                              if (choice ==4)
                              {
                                         Ba.deposit();
                              }        
             }
};
//////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////

int main()
{
    
    BankApplication BAp1[5] ; 
    for (i=0 ;i<5;i++)   
    BAp1[i] ; 
    system("pause");
    return 0;
}    
