#include<iostream>
#include<string>
using namespace std;

class bankaccount {
private:
    int accountnumber;
    string holdername;
    double balance;
public:
    bankaccount(int accountnumber, string accountholder, double balance) :
        accountnumber(accountnumber), holdername(accountholder), balance(balance) {
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
            cout << "Your deposit of " << amount << " rupees successful" << endl;
        }
        else {
            cout << "Invalid deposit" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            cout << "Your withdrawal of " << amount << " rupees successful" << endl;
        }
        else {
            cout << "Invalid withdrawal" << endl;
        }
    }

    void display() {
        cout << "Account number: " << accountnumber << endl;
        cout << "Holder name: " << holdername << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    bankaccount account[3] = {
        bankaccount(1234, "Tanisha", 23000),
        bankaccount(2345, "Vishu", 24000),
        bankaccount(6789, "Tanu", 21000)
    };

    for (int i = 0; i < 3; ++i) {
        cout << "Account details" << endl;
        account[i].display();
        cout << endl;
    }

    for (int i = 0; i < 3; ++i) {
        cout << "Transaction process " << i + 1 << endl;
        account[i].deposit(500);
        account[i].withdraw(200);
        cout << "Updated details" << endl;
        account[i].display();
        cout << endl;
    }

    return 0;
}
