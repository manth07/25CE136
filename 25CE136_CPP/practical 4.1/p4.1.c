
#include <iostream>
using namespace std;

int main() {
    int *arr = nullptr;
    int size = 0;

    // Insert at end
    for(int i=0;i<5;i++) {
        int val;
        cout << "Enter value: ";
        cin >> val;

        int *temp = new int[size+1];
        for(int j=0;j<size;j++)
            temp[j] = arr[j];

        temp[size] = val;

        delete[] arr;
        arr = temp;
        size++;

        // Display
        for(int j=0;j<size;j++) cout << arr[j] << " ";
        cout << endl;
    }

    // Delete at position
    for(int d=0; d<3; d++) {
        int pos;
        cout << "Enter position to delete: ";
        cin >> pos;

        if(pos < 0 || pos >= size) {
            cout << "Invalid position\n";
            continue;
        }

        int *temp = new int[size-1];
        for(int i=0,j=0;i<size;i++) {
            if(i != pos) temp[j++] = arr[i];
        }

        delete[] arr;
        arr = temp;
        size--;

        // Display
        for(int i=0;i<size;i++) cout << arr[i] << " ";
        cout << endl;
    }

    delete[] arr;
    return 0;
}
