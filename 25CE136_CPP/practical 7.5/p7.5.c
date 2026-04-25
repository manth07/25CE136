#include <iostream>
using namespace std;

// Abstract base class
class Grade {
protected:
    int marks;

public:
    Grade(int m) { marks = m; }

    virtual void compute() = 0;   // pure virtual
};

// Undergraduate
class UG : public Grade {
public:
    UG(int m) : Grade(m) {}

    void compute() {
        if(marks >= 50) cout << "UG Pass\n";
        else cout << "UG Fail\n";
    }
};

// Postgraduate
class PG : public Grade {
public:
    PG(int m) : Grade(m) {}

    void compute() {
        if(marks >= 60) cout << "PG Pass\n";
        else cout << "PG Fail\n";
    }
};

int main() {
    Grade* g;

    UG u(55);
    PG p(55);

    g = &u;
    g->compute();   // UG logic

    g = &p;
    g->compute();   // PG logic

    return 0;
}
