#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    public:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;
    public:

    void assignValues(string name, int accNum, string accType, double availableBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = availableBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void display() const {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account; 
    string name;
    int accNumber;
    string accType;
    double availableBalance;

    cout << "Enter the depositor's name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> accNumber;

    cout << "Enter account type (Savings or Current): ";
    cin >> accType;

    cout << "Enter balance amount in the account: ";
    cin >> availableBalance;

    account.assignValues(name, accNumber, accType, availableBalance);

    account.deposit(500); 
    account.withdraw(200); 

    account.display();
}