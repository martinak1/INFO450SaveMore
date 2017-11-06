// Derived from the Account class.
// This file defines the methods of the Savings class

#include "savings.h"
#include <iostream>

using namespace std;


Savings::Savings() : Account()
{
}


Savings::Savings(double bal) : Account(bal)
{
    if(bal >= 10000)
        interest = .02f/12;
    else
        interest = .01f/12;
}


Savings::~Savings()
{
    cout << "Killed: " << actNum << endl;
}


int Savings::AssessInterest() 
{
   if(balance >= 10000)
      interest = .02f;
   else if(balance <= 0)
    {
        cout << "\nYou can not gain interest on an account with no money in it"
             << endl;
        return -1; 
    }
   else
      interest = .01;

  balance += (balance * interest);

  return 0; 
}


int Savings::withdraw(double sum)
{
    if(sum + 2 > balance)
    {   
        cout << "The amount you would like to withdraw plus fees exceeds your"
             << "balance \n\tBalance: " << balance << endl;
        return -1; 
    }   
   else if(sum <= 0)
   {   
        cout << "You can not withraw less thang $0.01.\n\tBalance: " << balance;
        return -1; 
   }   
                                    
   cout << "\nTransaction successfull. A $2.00 fee was applied for withdrawing"
        << "from a savings account" << endl;

   balance -= balance - sum - 2;                          

   return 0;
}

int Savings::display()
{
    cout << "\nAccount ID:\t\t" << actNum
         << "\n\tBalance:\t$" << balance
         << "\n\tInterest:\t" << interest
         << endl;
}
