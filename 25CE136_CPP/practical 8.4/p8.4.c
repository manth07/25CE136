#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream file;
    string filename;

    // Retry mechanism for file opening
    while (true) {
        cout << "Enter file name: ";
        cin >> filename;

        file.open(filename);

        if (file.is_open()) break;
        else cout << "Error: File not found! Try again.\n";
    }

    string line;
    int lineNo = 0, sum = 0, count = 0;

    // Process line by line
    while (getline(file, line)) {
        lineNo++;
        stringstream ss(line);
        int num;

        if (ss >> num) {   // valid number
            sum += num;
            count++;
        } else {
            cout << "Invalid data at line " << lineNo << ": " << line << endl;
        }
    }

    file.close();

    cout << "\nValid Count: " << count;
    cout << "\nSum: " << sum;

    if (count > 0)
        cout << "\nAverage: " << (float)sum / count;

    return 0;
}
