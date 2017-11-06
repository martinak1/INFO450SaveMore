/* The Certificate of Deposit (CD) earns 10% with a 5 year term and 5% for 
 * anything less.  The term is set on account creation and cannot be 
 * updated.  Interest is compounded monthly and added to the balance.  If
 * funds are withdrawn before the term is over, a 10% fee on the entire 
 * pre-withdrawal balance is levied
 *
 * derrived from Account
 */

#include "account.h"


class CertDeposit : public Account
{
    protected:
        int term;

    public:
        //constructors
        CertDeposit();
        CertDeposit(int num, float inter, double bal, int trm);

        // destructor
        ~CertDeposit();
 
        // methods
        int AssessInterest();
        int withdraw(double sum);
};
