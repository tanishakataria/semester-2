#include<iostream>
using namespace std;

class Bankaccount {
    int accountid;
    double balance;
    int* transactionhistory;
    int numtransaction;

public:
    // Constructor
    Bankaccount(int id, double amount, int arr[], int number) :
        accountid(id), balance(amount), numtransaction(number) {
        transactionhistory = new int[numtransaction];
        for (int i = 0; i < numtransaction; i++) {
            transactionhistory[i] = arr[i];
        }
    }

    // Copy constructor
    Bankaccount(const Bankaccount& other) :
        accountid(other.accountid), balance(other.balance), numtransaction(other.numtransaction) {
        transactionhistory = new int[numtransaction];
        for (int i = 0; i < numtransaction; i++) {
            transactionhistory[i] = other.transactionhistory[i];
        }
    }

    // Destructor
    ~Bankaccount() {
        delete[] transactionhistory;
    }

    // Display function
    void display() {
        cout << "Account id: " << accountid << endl;
        cout << "Balance: " << balance << endl;
        cout << "Number of transactions: " << numtransaction << endl;
        cout << "Transaction history:" << endl;
        for (int i = 0; i < numtransaction; i++) {
            cout << "Transaction history " << i + 1 << ": " << transactionhistory[i] << endl;
        }
    }

    // Update transaction history function
    void updatetransactionhistory(int arr[], int number) {
        delete[] transactionhistory;
        numtransaction = number;
        transactionhistory = new int[numtransaction];
        for (int i = 0; i < numtransaction; i++) {
            transactionhistory[i] = arr[i];
        }
    }
};

int main() {
    int arr[5] = {1000, 2000, 3000, 4000, 5000};
    Bankaccount b(0, 5000, arr, 5);
    Bankaccount b1(0, 5000, arr, 5);
    Bankaccount b2 = b1;
    b1.display();
    b2.display();

    int newTransactions[3] = {50, -25, 100};
    b1.updatetransactionhistory(newTransactions, 3);
    b1.display();

    return 0;
}
