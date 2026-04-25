#include <iostream>
using namespace std;

string logArr[20];
int idx = 0;

void log(string s) { logArr[idx++] = s; }

// Custom Exception
class InsufficientFunds {};

class BankAccount {
    double balance;

public:
    BankAccount(double b) { balance = b; }

    void deposit(double amt) {
        log("Enter deposit()");
        if(amt <= 0) throw "Invalid deposit!";
        balance += amt;
        log("Exit deposit()");
    }

    void withdraw(double amt) {
        log("Enter withdraw()");
        if(amt > balance) throw InsufficientFunds();
        balance -= amt;
        log("Exit withdraw()");
    }

    double getBalance() { return balance; }
};

// Function chain to show stack unwinding
void processWithdraw(BankAccount &acc, double amt) {
    log("Enter processWithdraw()");
    acc.withdraw(amt);   // may throw
    log("Exit processWithdraw()");
}

int main() {
    BankAccount acc(1000);

    try {
        log("Start main");

        acc.deposit(500);        // success
        processWithdraw(acc, 200); // success
        processWithdraw(acc, 2000); // ❌ will throw

        log("End main");
    }

    catch(InsufficientFunds) {
        log("Caught InsufficientFunds");
        cout << "Error: Not enough balance!\n";
    }
    catch(const char* msg) {
        log("Caught Other Exception");
        cout << msg << endl;
    }

    // Print logs
    cout << "\n--- Logs ---\n";
    for(int i=0;i<idx;i++)
        cout << logArr[i] << endl;

    cout << "\nFinal Balance: " << acc.getBalance();

    return 0;
}
