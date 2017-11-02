// defines the methods of the Account class

#include "account.h"
#include <iostream>

using namespace std;

//constructors and destructor

Account::Account()
{
    actNum   = 0;
    interest = 0;
    balance  = 0;
}

Account::Account(int num, float inter, double bal)
{
    actNum      = num;
    interest    = inter;
    balance     = bal;
}

Account::~Account()
{
    cout << "Kill me!" << endl;
}

/* methods

   withdraw funds from the account if it is non-negative and does not 
   exceed the balance */
int Account::withdraw(double sum)
{
    if(sum > balance)
    { 
        cout << "The amount you would like to withdraw exceeds your balance.\
            \n\tBalance: " << balance << endl;
        return -1;
    }
    else if(sum < 0)
    {
        cout << "You can not withdraw a negative amount, try again" << endl;
        return -1;
    }

    balance -= sum;
    cout << "Withdraw sucessfull. \n\tBalance: " << balance << endl;

    return 0;
}

// add funds to the account if it is greater than 0
int Account::deposit(double sum)
{
    if(sum < 0.1)
    {
        cout << "You can not deposit funds less that $0.01, come back when\
            you have more money!" << endl;
        return -1;
    }

    balance += sum;
    cout << "Deposite sucessfull. \n\tBalance: " << balance << endl;
    
    return 0;
}


// print account information
int Account::display()
{
   cout << "Account #: " << actNum << "\nBalance: " << balance 
        << "\nInterest Rate: " << interest << "\n" << endl;
    
   return 0; 
}
