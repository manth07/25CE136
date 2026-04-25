#include <iostream>
using namespace std;

class Wallet {
private:
    int id;
    string name;
    double balance;

public:
    // Constructor
    Wallet(int i, string n, double b) {
        id = i;
        name = n;
        balance = b;
    }

    // Load money
    void load(double amt) {
        if(amt > 0) {
            balance += amt;
            cout << "Money added!\n";
        }
    }

    // Transfer money
    void transfer(Wallet &w, double amt) {
        if(amt <= balance) {
            balance -= amt;
            w.balance += amt;
            cout << "Transfer successful!\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    // Display details
    void display() {
        cout << "ID: " << id << "\nName: " << name
             << "\nBalance: " << balance << endl;
    }
};

int main() {
    Wallet w1(1, "Maitry", 1000);
    Wallet w2(2, "Arjun", 500);

    w1.load(500);
    w1.transfer(w2, 700);

    cout << "\nWallet 1:\n";
    w1.display();

    cout << "\nWallet 2:\n";
    w2.display();

    return 0;
}
