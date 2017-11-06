/* The Checking Account is non-interest bearing.  If the checking account 
 * balance drops below $500 a fee of $5.00 is deducted from the balance.  
 * Checking accounts have the capability to order checks for $15, deducted 
 * directly from the balance.
 *
 * Derived from Account
 */

#include "account.h"

class Checking : public Account
{

    public:
        // constructors
        Checking();
        Checking(double bal);

        // destructor
        ~Checking();

        // methods
        int withdraw(double sum);
};

