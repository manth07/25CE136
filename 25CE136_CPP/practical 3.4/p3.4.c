#include <iostream>
using namespace std;

// Display
template <class T>
void show(T a[], int n) {
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}

// Maximum
template <class T>
T findMax(T a[], int n) {
    T m = a[0];
    for(int i=1;i<n;i++)
        if(a[i] > m) m = a[i];
    return m;
}

// Reverse
template <class T>
void reverseArr(T a[], int n) {
    for(int i=0;i<n/2;i++)
        swap(a[i], a[n-i-1]);
}

// Leader Elements
template <class T>
void leaders(T a[], int n) {
    T maxRight = a[n-1];
    cout << maxRight << " ";
    for(int i=n-2;i>=0;i--) {
        if(a[i] > maxRight) {
            cout << a[i] << " ";
            maxRight = a[i];
        }
    }
    cout << endl;
}

int main() {
    int a[] = {16,17,4,3,5,2};
    float b[] = {1.2, 3.4, 2.1};
    char c[] = {'a','z','b','y'};

    int n1=6, n2=3, n3=4;

    // INT
    show(a,n1);
    cout << "Max: " << findMax(a,n1) << endl;
    reverseArr(a,n1); show(a,n1);
    cout << "Leaders: "; leaders(a,n1);

    // FLOAT
    show(b,n2);
    cout << "Max: " << findMax(b,n2) << endl;

    // CHAR
    show(c,n3);
    cout << "Max: " << findMax(c,n3) << endl;
    cout << "Leaders: "; leaders(c,n3);

    return 0;
}
