// Base class of Savings, Checking, and Certificate
// Contains the minimum variables and methods required for a bank account

using namespace std;

class Account
{
    protected:
        const int   actNum;
        float       interest;
        double      balance;

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
