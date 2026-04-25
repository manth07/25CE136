#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string line, word;
    map<string, int> freq;

    cout << "Enter sentence: ";
    getline(cin, line);

    stringstream ss(line);

    // Count frequency
    while (ss >> word) {
        freq[word]++;   // key-value update
    }

    // Display result
    cout << "\nWord Frequencies:\n";
    for (auto it : freq) {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}
