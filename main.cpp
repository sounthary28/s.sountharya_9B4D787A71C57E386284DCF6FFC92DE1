#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Constructor to initialize the account
    BankAccount(const std::string& accNumber, const std::string& accHolderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        accountBalance = initialBalance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposited $" << amount << " successfully." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawn $" << amount << " successfully." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account Balance: $" << accountBalance << std::endl;
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount myAccount("123456", "John Doe", 1000.0);

    // Test the deposit and withdrawal functionality
    myAccount.displayBalance();  // Display initial balance
    myAccount.deposit(500.0);    // Deposit $500
    myAccount.withdraw(200.0);   // Withdraw $200
    myAccount.displayBalance();  // Display updated balance

    return 0;
}
