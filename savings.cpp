// Derived from the Account class.
// This file defines the methods of the Savings class

#include "savings.h"
#include <iostream>

using namespace std;


Savings::Savings()
{
    actNum      = 0;
    interest    = 0f;
    balance     = 0;
}


Savings::Savings(int num, float inter, double bal)
{
    actNum  = num;
    interst = inter;
    balance = bal;
}


int Savings::AssessInterest()
{
   if(bal >= 10000)
      interest = .02f;
   else if(bal <= 0)
    {
        cout << "\nYou can not gain interest on an account with no money in it"
             << endl;
        return -1; 
    }
   else
      interest = .01f;

  balance += (balance * interest);

  return 0; 
}
