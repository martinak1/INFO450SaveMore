// Defines the methods of the CertDeposit class

#include <iostream>
#include "certdeposit.h"


using namespace std;

CertDeposit::CertDeposit() : Account()
{
    term = 0;
    interest = .05f;
}


CertDeposit::CertDeposit(double bal, int trm) : Account(bal)
{
    term = trm;

    if(term == 5)
        interest = .1f;
    else
        interest = .05f;
}


CertDeposit::~CertDeposit()
{
    cout << "Killed: " << actNum << endl;
}


int CertDeposit::AssessInterest()
{
    if(balance == 0)
    {
        cout << "You can not earn interest if you don't have any money!" << endl;
        return -1; 
    }

    balance += (interest/12) * balance;
    return 0;
}


int CertDeposit::withdraw(double sum)
{
    if(sum + (balance *.1) > balance)
    {
        cout << "The amount you would like to withdraw plus fees exceeds your"
             << "balance \n\tBalance: " << balance << endl;
        return -1;
    }
    else if(sum <= 0)
    {
        cout << "You can not withdraw less than $0.01.\n\tBalance: " << balance;
        return -1; 
    }

    cout << "Transaction successfull. A fee of 10% of your current balance was"
         << "applied due to a pre-mature withdrawl." << endl;

    balance -= sum + (balance * .1);
    return 0; 
}


int CertDeposit::display()
{
    cout << "\nAccount ID:\t\t" << actNum
         << "\n\tBalance:\t$"  << balance
         << "\n\tInterest:\t" << interest
         << endl;
    return 0;
}
