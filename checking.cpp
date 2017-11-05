// defines the methods of the Checking class

#include <iostream>
#include "checking.h"

using namespace std;

Checking::Checking() : Account()
{
}

Checking::Checking(int num, float inter, double bal) : Account(num, inter, bal)
{
}

int Checking::withdraw(double sum)
{
    if(sum > balance)
    {
        cout << "The amount you would like to withdraw exceeds your balance\
            \n\tBalance: " << balance << endl;
        return -1; 
    }
    else if(sum <= 0)
    {
        cout << "You can not withraw less thang $0.01.\n\tBalance: " << balance;
        return -1;
    }
    else if( balance - sum < 500)
    {
        cout << "This withdrawl will reduce your balance to bellow $500, there\
            is a chage of $5.00" << endl;
        balance -= 5;
    }

    balance -= balance - sum;
}
