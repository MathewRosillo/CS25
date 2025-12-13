# CS25 week 8

CODE


Class

A class called Bank account is created with 1 variable (balance) and 4 methods

methods:

makePurchase method to make a purchase (deduct from balance and calls saveTransaction) 

deposit method to deposit funds (adds money to balance and calls saveTransaction)

displayBalance method to print the current balance (displays current funds to screen)

saveTransaction method to save each transaction to a file (when called the transaction specified is saved to a file called transactions.txt)

---------------------------------------------------------------------

Main

An instance of BankAccount is created
A deposit of $100 is then made followed by two purchases. 
At the end the final balance is displayed.

---------------------------------------------------------------------

Display

On the display the following 4 things are displayed in order

1: The initial deposit of $100

2: The purchase of a coffee

3: The purchase of a book

4: The current balance of the account

---------------------------------------------------------------------


Seperate files

When deposit and make purchase is called in main a seperate file named transactions.txt is created containing the information saved from those transactions.
