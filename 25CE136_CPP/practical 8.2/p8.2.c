#include <iostream>
#include <cmath>
using namespace std;

// Custom Exception
class NegativeNumberException {
public:
    void show() {
        cout << "Error: Negative number not allowed!\n";
    }
};

int main() {
    double n;

    try {
        cout << "Enter number: ";
        cin >> n;

        if(n < 0)
            throw NegativeNumberException();

        cout << "Square Root = " << sqrt(n);
    }

    catch(NegativeNumberException e) {
        e.show();
    }

    return 0;
}
