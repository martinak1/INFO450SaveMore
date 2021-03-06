/* Derived class of Account
 *
 * The Savings account has a variable interest rate. Balances under $10,000 
 * earn 1% APR interest  and balances  >= $10,000 earn 2% APR.  The rate is
 * updated dynamically if and when the balance changes.  Interest is 
 * compounded monthly and added to the balance. All savings withdrawals are
 * charged a fee of $2, deducted from the balance at the time of withdrawal.
 */

#include "account.h"


class Savings : public Account
{
    protected:
        float interest;
    public:
        Savings();
        Savings(double bal);

        // destructor
        ~Savings();

        // methods
        int AssessInterest();
        int withdraw(double sum);
        int display();
};
