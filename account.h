// Base class of Savings, Checking, and Certificate
// Contains the minimum variables and methods required for a bank account

#ifndef PET_H
#define PET_H


class Account
{
    protected:
        int     actNum;
        float   interest;
        double  balance;

    public:
        // constructors
        Account();
        Account(int num, float inter, double bal);

        // destructor
        ~Account();

        // methods
        int withdraw(double sum);
        int deposit(double sum);
        int display();
};

#endif
