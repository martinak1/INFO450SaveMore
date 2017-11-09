#include <iostream>
#include "account.h"
#include "savings.h"
#include "checking.h"
#include "certdeposit.h"


using namespace std;


int main()
{
    double savBal, checkBal, cdBal;
    int term;

    while(true)
    {
        cout << "\nWhat is the opening balance of the savings account?: ";
        cin  >> savBal;

        cout << "\nWhat is the opening balance of the checking account?: ";
        cin  >> checkBal;

        cout << "\nWhat is the opening balance of the Certificate Deposit?: ";
        cin  >> cdBal;

        cout << "\nWhat is the term lenght?: ";
        cin  >> term;
    
        Savings savings(savBal);
        cout << "\nCreated a new savings account with a " << savBal 
             << " opening balance" << endl;

        Checking checking(checkBal);
        cout << "\nCreated a new checking account with a " << checkBal 
             << " opening balance" << endl;

        CertDeposit cd(cdBal, term);
        cout << "\nCreated a new CD account with a " << term 
             << " year term and a " << cdBal << " opening balance" << endl;

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

        double checkWd, savWd, cdWd;

        cout << "\nHow much would you like to withdraw from checking?: ";
        cin  >> checkWd;
        cout << "\nWithdrawing $" << checkWd << " from checking" << endl;
        checking.withdraw(checkWd);

        cout << "\nHow much would you like to withdraw from savings?: ";
        cin  >> savWd;
        cout << "\nWithdrawing $1000 from Savings" << endl;
        savings.withdraw(savWd);

        cout << "\nHow much would you like to withdraw from the CD?: ";
        cin  >> cdWd;
        cout << "\nPerforming an early withdrawal of $" << cdWd 
             << " from the CD account" << endl;
        cd.withdraw(cdWd);

        cout << "\nDisplaying the account attributes for each account" << endl;
        cout << "\nsavings" << endl;
        savings.display();
        cout << "\nchecking" << endl;
        checking.display();
        cout << "\ncd" << endl;
        cd.display();

        // FIX THIS SHIT
        char exit;

        cout << "\nPress 'q' if you like to quit?: ";
        cin  >> exit;

        if(exit == 'q') break;
        
    }
}
