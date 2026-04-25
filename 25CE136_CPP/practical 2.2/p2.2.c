#include <iostream>
using namespace std;

class Account {
    int id;
    string name;
    double balance;

public:
    // Constructor (default + parameterized)
    Account(int i, string n, double b = 0) {
        id = i;
        name = n;
        balance = b;
    }

    void deposit(double amt) {
        if(amt > 0) balance += amt;
    }

    void withdraw(double amt) {
        if(amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient balance\n";
    }

    void show() {
        cout << id << " " << name
             << " Balance: " << balance << endl;
    }
};

int main() {
    Account a1(1, "Maitry", 1000);
    Account a2(2, "Arjun");      // zero balance
    Account a3(3, "Riya", 500);

    // Transactions
    a1.deposit(200); a1.withdraw(300); a1.withdraw(2000); // invalid
    a2.deposit(500); a2.withdraw(100);
    a3.deposit(100); a3.withdraw(50);

    // Display
    a1.show();
    a2.show();
    a3.show();

    return 0;
}
