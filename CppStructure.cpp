// ----------- Preprocessor Directives -------------
#include <iostream>             // For input/output
#define PI 3.14159              // Macro definition

#define CONDITION                // Conditional compilation

using namespace std;            // Namespace usage

// ----------- Function Prototype -------------
void displayInfo();

// ----------- Base Class Definition -------------
class Description {
public:
    void Script() {
        cout << "Circle's area: ";
    }
};

// ----------- Derived Class Definition -------------
class Circle : public Description {
public:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

#ifdef CONDITION
    float area() {
        return PI * radius * radius;
    }
#endif
};

// ----------- Main Function -------------
int main() {
    // Variable Declaration
    float rad;
    cout << "Enter radius: ";
    cin >> rad;

    // Object initialization
    Circle c(rad);

    // Control Structure (if-else)
    if (rad > 0) {
        c.Script();                  // Function call from base class
#ifdef CONDITION
        cout << c.area() << endl;  // Function call
#endif
    } else {
        cout << "Invalid radius!" << endl;
    }

    displayInfo(); // Function call
    return 0;
}

// ----------- Function Definition -------------
void displayInfo() {
    cout << "Program demonstrating multiple C++ features." << endl;
}