#include <iostream>

using namespace std;

class Account
{
    int     actNum;
    float   interest;
    double  balance;

    public:
        // constructors
        Account();
        Account(int, float, double);

        // destructor
        ~Account();

        // methods
        int withdraw(double);
        int deposit(float);
        int display() const;
};
