#include <iostream>
using namespace std;

class Rectangle {
    double l, w;

public:
    void set(double length, double width) {
        if(length > 0 && width > 0) {
            l = length;
            w = width;
        } else {
            cout << "Invalid input\n";
            l = w = 0;
        }
    }

    double area() {
        return l * w;
    }

    double perimeter() {
        return 2 * (l + w);
    }

    void show() {
        cout << "Area: " << area()
             << " Perimeter: " << perimeter() << endl;
    }
};

int main() {
    Rectangle r[2];   // array of objects

    r[0].set(10, 5);
    r[1].set(7, 7);

    r[0].show();
    r[1].show();

    return 0;
}
}
