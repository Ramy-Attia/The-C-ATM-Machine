# The-C-ATM-Machine
This project simulates an ATM machine using a C program that processes checking and savings accounts for two users, "a" and "b." Each user has both checking and savings accounts, and the program allows them to withdraw from either account while dispensing the appropriate denominations in bills.

Features:
A 2x2 array stores user account balances:
User "a": Checking - $500, Savings - $1000
User "b": Checking - $750, Savings - $325
The user is prompted to choose their account (checking or savings) and specify a withdrawal amount.
The program uses a switch statement to handle account type selection and processes withdrawals accordingly.
Denominations provided for withdrawals:
$100 bills
$20 bills (up to 4 times)
$10, $5, and $1 bills
Withdrawals are limited to a maximum of $200.
Example Scenarios:
Withdraw $19 → Dispenses $10, $5, and $4 in $1 bills
Withdraw $55 → Dispenses $20 bills, $10 bill, and $5 bill
Withdraw $200 → Dispenses two $100 bills
The ATM algorithm ensures that users receive the smallest possible number of bills for their requested amounts.
