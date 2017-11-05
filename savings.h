/* Derived class of Account
 *
 * The Savings account has a variable interest rate. Balances under $10,000 
 * earn 1% APR interest  and balances  >= $10,000 earn 2% APR.  The rate is
 * updated dynamically if and when the balance changes.  Interest is 
 * compounded monthly and added to the balance. All savings withdrawals are
 * charged a fee of $2, deducted from the balance at the time of withdrawal.
 */


class Savings : public Account
{
    public:
        Savings();
        Savings(int num, float inter, double bal);

        // destructor
        ~Savings();

        // methods
        int AssessInterest();
};
