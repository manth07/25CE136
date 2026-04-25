#include <iostream>
using namespace std;

int main() {
    int a, b;

    try {
        cout << "Enter two integers: ";
        cin >> a >> b;

        // Check invalid input
        if(cin.fail())
            throw "Invalid input! Enter integers only.";

        // Check division by zero
        if(b == 0)
            throw "Division by zero error!";

        cout << "Result = " << a / b;
    }

    catch(const char* msg) {
        cout << "Error: " << msg;
    }

    return 0;
}
