#include <iostream>
using namespace std;

// Recursive function
int superDigit(long long n) {
    if(n < 10) return n;   // base case

    long long sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return superDigit(sum);
}

int main() {
    string n;
    int k;

    cout << "Enter number and k: ";
    cin >> n >> k;

    long long sum = 0;

    // Sum digits of n
    for(char c : n)
        sum += c - '0';

    // Multiply by k (instead of concatenation)
    sum *= k;

    cout << "Super Digit = " << superDigit(sum);

    return 0;
}
