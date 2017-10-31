#include "account.h"

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

int Account::withdraw(double sum)
{

}
