// defines the methods of the Account class

#include "account.h"
#include <iostream>

using namespace std;

//constructors and destructor

Account::Account()
{
    actNum   = openAccounts + 1;
    balance  = 0;
    openAccounts++;
}

Account::Account(double bal)
{
    actNum      = openAccounts+1;
    balance     = bal;
    openAccounts++;
}

Account::~Account()
{
    --openAccounts;
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
   cout << "\nAccount ID:\t\t" << actNum 
        << "\n\tBalance:\t" << balance 
        << endl;
}

int Account::openAccounts = 0;

int Account::getCount()
{
    return openAccounts;
}
