#include <iostream>
using namespace std;

// Abstract base class Account
class Account {
protected:
    int accountNumber;
    double balance;

public:
    Account(int accNumber, double bal) : accountNumber(accNumber), balance(bal) {}

    // Pure virtual functions
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual double calculateInterest() const = 0;

    // Concrete member functions
    int getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }
};

// Concrete subclass SavingsAccount
class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int accNumber, double bal, double rate) : Account(accNumber, bal), interestRate(rate) {}

    void deposit(double amount) override {
        balance += amount;
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    double calculateInterest() const override {
        return balance * interestRate;
    }
};

// Concrete subclass CurrentAccount
class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(int accNumber, double bal, double limit) : Account(accNumber, bal), overdraftLimit(limit) {}

    void deposit(double amount) override {
        balance += amount;
    }

    void withdraw(double amount) override {
        if (balance - amount >= -overdraftLimit) {
            balance -= amount;
        } else {
            cout << "Exceeds overdraft limit!" << endl;
        }
    }

    double calculateInterest() const override {
        return 0; // Current accounts typically don't earn interest
    }
};

int main() {
    // Creating objects of SavingsAccount and CurrentAccount
    SavingsAccount savings(12345, 1000, 0.05); // Account number: 12345, Initial balance: $1000, Interest rate: 5%
    CurrentAccount current(67890, 2000, 500); // Account number: 67890, Initial balance: $2000, Overdraft limit: $500

    // Performing operations
    savings.deposit(500);
    savings.withdraw(200);
    cout << "Savings Account Balance: $" << savings.getBalance() << endl;
    cout << "Interest Earned: $" << savings.calculateInterest() << endl;

    current.deposit(300);
    current.withdraw(2500);
    cout << "Current Account Balance: $" << current.getBalance() << endl;

    return 0;
}
