#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
double accountBalance = 0.0;
std::vector<double> transactions;

void showbal();
void deposit();
void withdraw();
void history();

int main()
{
    cout<<"Welcome To The Bank Management System \n";
int choice;
    cout<<"Enter 1 to exit \n";   
    cout<<"Enter 2 to see your account balance \n";
    cout<<"Enter 3 to deposite money to your account \n";
    cout<<"Enter 4 to withdraw money from your account \n";
    cout<<"Enter 5 to see the transactions history \n";
    

    while (1) {
        printf("\n\nEnter the operation you want to perform: ");
        scanf("%d", &choice);

        switch (choice) {
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
            case 1:
            cout<<"ThankYou!\n";
                exit(0);
                
                break;
            default:
            cout<<"You Entered an invalid Number \n";
}
}
}
void showbal() 
{
    cout << "Account balance: $" << accountBalance <<"\n";

}

void deposit() 
{
    double amount;
    std::cout << "Enter the deposit amount: $";
    std::cin >> amount;

    if (amount > 0) {
        accountBalance += amount;
        cout << "Deposit successful. Current balance: $" << accountBalance << "\n";
    } else {
        cout << "Invalid deposit amount. Please enter a positive value." <<"\n";
    }
}
void withdraw() 
{
    double amount;
    cout << "Enter the withdrawal amount: $";
    cin >> amount;

    if (amount > 0 && amount <= accountBalance) {
        accountBalance -= amount;
        cout << "Withdrawal successful. Current balance: $" << accountBalance <<"\n";
    } else {
        cout << "Invalid withdrawal amount. Please enter a positive value within your balance." << "\n";
    }
}
void history() 
{
    cout << "Transaction History:" <<"\n";
    for (double transaction : transactions) {
        if (transaction > 0) {
            cout << "Deposit: $" << transaction << "\n";
        } else {
            cout << "Withdrawal: $" << -transaction << "\n";
        }
    }
    cout << "Current balance: $" << accountBalance << "\n";
}