#include <iostream>
#include <iomanip>
using namespace std;

// Custom manipulator
ostream& currency(ostream& out) {
    out << "₹ ";
    return out;
}

int main() {
    string name[5] = {"A","B","C","D","E"};
    double marks[5] = {85.5, 90.2, 76.8, 88.4, 92.1};
    double fees[5] = {1000, 1200, 1100, 1300, 1250};

    cout << left << setw(10) << "Name"
         << setw(10) << "Marks"
         << setw(10) << "Fees" << endl;

    cout << setfill('-') << setw(30) << "" << setfill(' ') << endl;

    for(int i=0;i<5;i++) {
        cout << left << setw(10) << name[i]
             << setw(10) << fixed << setprecision(2) << marks[i]
             << currency << setw(10) << fees[i]
             << endl;
    }

    return 0;
}
}
