#include <iostream>
#include "account.h"
#include "savings.h"
#include "checking.h"
#include "certdeposit.h"


using namespace std;


int main()
{
    //Create a new savings account  with a 10K opening balance
    Savings savings(10000);

    //Create a new checking account with a 6K opening balance
    Checking checking(6000);

    //Create a new CD account  with a 3 year term and a 10K opening balance
    CertDeposit cd(10000, 3);

    //Calculate monthly interest for the savings account
    savings.AssessInterest();

    //Calculate  the monthly interest for the CD account 
    cd.AssessInterest();

    //Order checks for the checking account


    //Display the attributes for  each account
    savings.display();
    checking.display();
    cd.display();

    //Withdraw $200 from checking
    checking.withdraw(200);

    //Withdraw $1000 from Savings
    savings.withdraw(1000);

    //Perform an early withdrawal of $2000 from the CD account
    cd.withdraw(2000);

    //Display the account attributes for  each account
    savings.display();
    checking.display();
    cd.display();
}
