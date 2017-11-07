#include <iostream>
#include "account.h"
#include "savings.h"
#include "checking.h"
#include "certdeposit.h"


using namespace std;


int main()
{
    cout << "\nCreated a new savings account with a 10K opening balance" << endl;
    Savings savings(10000);

    cout << "\nCreated a new checking account with a 6K opening balance" << endl;
    Checking checking(6000);

    cout << "\nCreated a new CD account with a 3 year term and a 10K opening balance"
         << endl;
    CertDeposit cd(10000, 3);

    cout << "\nCalculated monthly interest for the savings account" << endl;
    savings.AssessInterest();

    cout << "\nCalculated the monthly interest for the CD account" << endl;
    cd.AssessInterest();

    cout << "\nOrder checks for the checking account" << endl;
    checking.orderChecks();


    cout << "\nDisplaying the attributes for each account" << endl;
    cout << "\nsavings" << endl;
    savings.display();
    cout << "\nchecking" << endl;
    checking.display();
    cout << "\ncd" << endl;
    cd.display();

    cout << "\nWithdrawing $200 from checking" << endl;
    checking.withdraw(200);

    cout << "\nWithdrawing $1000 from Savings" << endl;
    savings.withdraw(1000);

    cout << "\nPerforming an early withdrawal of $2000 from the CD account" << endl;
    cd.withdraw(2000);

    cout << "\nDisplaying the account attributes for each account" << endl;
    cout << "\nsavings" << endl;
    savings.display();
    cout << "\nchecking" << endl;
    checking.display();
    cout << "\ncd" << endl;
    cd.display();
}
