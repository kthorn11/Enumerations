// ATM Transaction Menu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum TransactionType
{
    Deposit,
    Withdraw,
    CheckBalance,
    Exit
};



int main()
{

    string user_input;
    TransactionType transaction;

    cout << "Enter transaction (Deposit / Withdraw / CheckBalance / Exit): ";
    cin >> user_input;

    if (user_input == "Deposit")
        transaction = Deposit;
    else if (user_input == "Withdraw")
        transaction = Withdraw;
    else if (user_input == "CheckBalance")
        transaction = CheckBalance;
    else if (user_input == "Exit")
        transaction = Exit;
    else
    {
        cout << "Invalid Input!";
        return 0;

    }

    switch (transaction)
    {
    case Deposit:
        cout << "Opening deposit process...";
        break;
    case Withdraw:
        cout << "Opening withdrawl process...";
        break;
    case CheckBalance:
        cout << "Displaying current balance...";
        break;
    case Exit:
        cout << "Thank you! Exiting ATM.";
        break;

      

    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
