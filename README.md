# INFO450SaveMore
Info450 Project 3

Program Requirements:
Design and implement a set of classes in C++ to support all of the above  functional  requirements.  
Define class member data, constructors and member functions  as required to fulfill on the requirements.
Constructors for the accounts should set the open balance for the account
The class structures defined should demonstrate inheritance implementing Savings, Checking and CD accounts as derived classes of the base class Bank Account.
Deposit and withdrawal methods should return a value to indicate success or failure of the method (0=success  -1=failure)
If an operation will make an account go negative, the operation should not be completed and a failure returned from the method
Interest-bearing accounts should include a method AssessInterest that calculates monthly interest and adds it to the balance

The classes created should be exercised/tested  by leveraging  your main() function and performing the following  operations (in order)
Create a new savings account  with a 10K opening balance
Create a new checking account with a 6K opening balance
Create a new CD account  with a 3 year term and a 10K opening balance
Calculate monthly interest for the savings account
Calculate  the monthly interest for the CD account 
Order checks for the checking account
Display the attributes for  each account
Withdraw $200 from checking
Withdraw $1000 from Savings
Perform an early withdrawal of $2000 from the CD account
Display the account attributes for  each account
Polymorphism must be demonstrated with the creation of the bank accounts 

Extra Credit + 15
Add an additional member variable to the base class Account for OpenDate.  This date should be set in the constructor as the current system date when the account object is created.  The Display method should include the Open Date in the format:  MM/DD/YYYY.
You will need to Google this (or other resource) to figure out how to use the C++ date structs and functions.
