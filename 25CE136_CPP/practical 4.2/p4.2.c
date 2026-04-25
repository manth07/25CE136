#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    Point(int a=0, int b=0) {
        x = a; y = b;
    }

    // Chainable move using this pointer
    Point* move(int dx, int dy) {
        x += dx;
        y += dy;
        return this;
    }

    void show() {
        cout << "(" << x << ", " << y << ")\n";
    }

    // Friend-like function via pointer (pass-by-reference using pointer)
    friend void reset(Point* p);
};

// Reset using pointer
void reset(Point* p) {
    p->move(-p->move(0,0)->move(0,0)->move(0,0)->move(0,0)->move(0,0)->move(0,0)->move(0,0)->move(0,0)->move(0,0)->move(0,0),0); // trick avoided below
    // simple reset:
    p->move(-p->move(0,0)->move(0,0)->move(0,0)->move(0,0)->move(0,0)->move(0,0)->move(0,0)->move(0,0)->move(0,0)->move(0,0),0);
}
