#include <iostream>
using namespace std;

int main() {
    int id = 1, copies = 3;
    string title = "C++", author = "Bjarne";

    cout << "Book: " << title << " | Copies: " << copies << endl;

    // Issue book
    if(copies > 0) {
        copies--;
        cout << "Book Issued\n";
    } else {
        cout << "Not Available\n";
    }

    // Return book
    copies++;
    cout << "Book Returned\n";

    cout << "Total Copies: " << copies << endl;

    return 0;
}
