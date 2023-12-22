#include <iostream>

using namespace std;

double accountBalance = 0;
int transactionCount = 0;

void showbal();
void deposit();
void withdraw();
void history();
void TransactionCount();

int main()
{
    cout << "     Welcome To The Bank Management System      \n";
    int choice;

    cout << "Enter 1 to exit \n";
    cout << "Enter 2 to see your account balance \n";
    cout << "Enter 3 to deposit money to your account \n";
    cout << "Enter 4 to withdraw money from your account \n";
    cout << "Enter 5 to see the transactions history \n";
    cout << "Enter 6 to display the number of transactions \n";

    while (1)
    {
        cout << "\n\nEnter the operation you want to perform: ";
        cin >> choice;

        switch (choice)
        {
        case 2:
            showbal();
            break;
        case 3:
            deposit();
            break;
        case 4:
            withdraw();
            break;
        case 5:
            history();
            break;
        case 6:
            TransactionCount();
            break;
        case 1:
            cout << "ThankYou!\n";
            exit(0);
            break;
        default:
            cout << "You Entered an invalid Number \n";
        }
    }
}

void showbal()
{
cout << "Account balance: $" << accountBalance << "\n";
}

void deposit()
{
    double amount;
    cout << "Enter the deposit amount: $";
    cin >> amount;

    if (amount > 0)
    {
    accountBalance += amount;
    transactionCount++;
    cout << "Deposit successful. Current balance: $" << accountBalance << "\n";
    }
    else
    {
    cout << "Invalid deposit amount. Please enter a positive value." << "\n";
    }
}

void withdraw()
{
    double amount;
    cout << "Enter the withdrawal amount: $";
    cin >> amount;

    if (amount > 0 && amount <= accountBalance)
    {
    accountBalance -= amount;
    transactionCount++;
    cout << "Withdrawal successful. Current balance: $" << accountBalance << "\n";
    }
    else
    {
    cout << "Invalid withdrawal amount. Please enter a positive value within your balance." << "\n";
    }
}

void history()
{
cout << "Transaction History:" << "\n";
cout << "No. of Transaction : " << transactionCount << "\n";
cout << "The Current Balance is: " << accountBalance << "\n";
}

void TransactionCount()
{
cout << "Number of transactions: " << transactionCount << "\n";
}
